#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // declaring the variables
    float change;
    int change_;
    
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;
    
    int dollars = 0;
    int tens = 0;
    int twenties = 0;
    int fifties = 0;
    int hundreds = 0;
    
    int total_bills;
    int total_coins;

//prompt user for amount of change
do
    {
    printf("Change due: \n");
    change = GetFloat();
    }
    // validating the integer
    while (change <= 0);
    
    // converting float to integer
    change_ = (change + 0.004) * 100;

    //amount of hundreds
    while (change_ >= 10000)
    {
        change_ = change_ - 10000;
        hundreds++;
    }
    
    // amount of fifties
    while (change_ >= 5000 && change <= 10000)
    {
        change_ = change_ - 5000;
        fifties++;
    }
    
    // amount of twenties
    while (change_ >= 2000 && change_ <= 5000)
    {
        change_ = change_ - 2000;
        twenties++;
    }
    
    // amount of tens
    while (change_ >= 1000 && change_ <= 2000)
    {
        change_ = change_ - 1000;
        tens++;
    }
    
    // amount of dollar bills
    while (change_ >= 100 && change_ <= 1000)
    {
        change_ = change_ - 100;
        dollars++;
    }
    
    // amount of quarters
    while (change_ >= 25 && change_ <= 100)
    {
        change_ = change_ - 25;
        quarters++;
    }

    // amount of dimes
    while (change_ >= 10 && change_ <= 25)
    {
        change_ = change_ - 10;
        dimes++;
    }

    // amount of nickels
    while (change_ >= 5 && change_ <= 10)
    {
        change_ = change_ - 5;
        nickels++;
    }

    // amount of pennies
    while (change_ >= 1 && change_ <= 5)
    {
        change_ = change_ - 1;
        pennies++;
    }
    
    // total amount of coins
    total_bills = (dollars + tens + twenties + fifties + hundreds);
    total_coins = (quarters + dimes + nickels + pennies);
    printf("Bills: %i\nCoins: %i\n", total_bills, total_coins);
}
