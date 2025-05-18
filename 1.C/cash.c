#include <stdio.h>

int get_cents();
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    int cents = get_cents();
    while (cents > 0)
    {
        int quarters = calculate_quarters(cents);
        cents -= quarters * 25;
        int dimes = calculate_dimes(cents);
        cents -= dimes * 10;
        int nickels = calculate_nickels(cents);
        cents -= nickels * 5;
        int pennies = calculate_pennies(cents);
        cents -= pennies * 1;
        int total = quarters + dimes + nickels + pennies;
        printf("Total coins: %d\n", total);
        printf("Quarters: %d\n", quarters);
        printf("Dimes: %d\n", dimes);
        printf("Nickels: %d\n", nickels);
        printf("Pennies: %d\n", pennies);
    }
    return 0;
}

int get_cents()
{
    int cents;
    printf("Enter the amount of cents: ");
    scanf("%d", &cents);
    if (cents < 0)
    {
        printf("Please enter a non-negative amount.\n");
        get_cents();
    }
    else
    {
        return cents;
    }
}

int calculate_quarters(int cents)
{
    
    return cents / 25;
}

int calculate_dimes(int cents)
{
    return cents / 10;
}

int calculate_nickels(int cents)
{
    return cents / 5;
}

int calculate_pennies(int cents)
{
    return cents / 1;
}