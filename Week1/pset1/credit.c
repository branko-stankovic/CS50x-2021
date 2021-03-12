#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // get user card number
    long cardNumber;
    do
    {
        cardNumber = get_long("Number: ");
    }
    while (cardNumber < 1);

    // check the card number length
    int length = 0;
    long cardCopy = cardNumber;

    while (cardCopy > 0)
    {
        cardCopy = cardCopy / 10;
        length++;
    }

    // if length isn't valid, print invalid and stop executing the program
    if (length != 13 && length != 15 && length != 16)
    {
        printf("INVALID\n");
        return 0;
    }

    // calculate the checksum
    cardCopy = cardNumber;
    bool odd = true;
    int i = length;

    int checkSum = 0;
    int helper;

    while (i > 0)
    {
        if (odd)
        {
            // add the odd numbers to checksum, starting from last number
            checkSum += cardCopy % 10;
            cardCopy = cardCopy / 10;
            odd = !odd;
        }
        else
        {
            // add the even digits to checksum, starting from the second to last number
            helper = (cardCopy % 10) * 2;
            cardCopy = cardCopy / 10;
            checkSum += helper / 10 + helper % 10;
            odd = !odd;
        }
        i--;
    }

    // if hash is good, check card type
    if (checkSum % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }

    // calculate first two digits
    cardCopy = cardNumber;
    while (cardCopy > 100)
    {
        cardCopy /= 10;
    }


    // check first two digits for known card types
    if (cardCopy == 34 || cardCopy == 37)
    {
        printf("AMEX\n");
    }
    else if (cardCopy >= 51 && cardCopy <= 55)
    {
        printf("MASTERCARD\n");
    }
    else if (cardCopy / 10 == 4)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}