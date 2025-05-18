#include <stdio.h>

int luhn(long long input);
int main(void)
{
    printf("Please enter a credit card number:");
    long long input;
    scanf("%lld", &input); 
    if (luhn(input) != 0)
    {
        printf("Valid\n");
    }
    else
    {
        printf("Invalid\n");
    }
    return 0;
}

int luhn(long long input)
{
    int sum = 0;
    int n1;
    int count = 0;

    
    do{
        n1 = input % 10;
        input = input / 10;
        count++;

        if (count % 2 == 1)
        {
            sum += n1;
        }
        else
        {
            int n2 = n1 * 2;
            if(n2 > 9)
            {
                n2 = n2 % 10 + n2 / 10;
            }
            sum += n2;
        }
    }while (input > 0);

    return (sum % 10 == 0);
}