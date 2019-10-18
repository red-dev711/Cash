#include <cs50.h>
#include <stdio.h>

int main()
{
    int count=0;
    float dollars;
    int money[4] = {25, 10, 5, 1};

    do
    {
        dollars = get_float("Enter the amount: ");
    }
    while(dollars <= 0);

    printf("Dollars is %f\n", dollars);
    int cents = dollars * 100;
    printf("Cents is %i\n", cents);

    for(int i=0; i < 4; i++)
    {
        while(cents/money[i]>=1)
        {
            count++;
            cents -= money[i];
        }
    }
    printf("Number of notes is %i\n", count);
}
