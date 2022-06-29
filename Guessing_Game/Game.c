#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Betacode();

int count, tim = 1;

int main()
{
    int trial;
    for (count = 0; count < 100; count++)
    {
        Betacode();
        printf("You want to try again?\n\n1.Yes\t\t2.No\n\n");
        scanf("%d", &trial);
        tim++;
        if(trial == 2)
            break;
    }

    if (count == 100)
        printf("You've tried 100 times... Thanks!!");
    printf("Thanks");
 return (0);
}




void Betacode()
{
    char *name;
    int guess1, guess2, guess3, num1, num2, num3, i = 0;
    time_t t1;
    srand((unsigned)time(&t1));
    num1 = rand() % 10;
    num2 = rand() % 10;
    num3 = rand() % 10;

    if (count == 0)
    {
         printf("Welcome to Betacode Games\n\n");

        printf("Enter your name: ");
        scanf("%s", &name);
    }

    printf("\n\nYour trial time is : %d", tim);
    printf("\nEnter your possible 3 numbers between 1 and 10");


    printf("\n\nEnter 1st number: ");
    scanf("%d", &guess1);

    printf("\nEnter 2nd number: ");
    scanf("%d", &guess2);

    printf("\nEnter 3rd number: ");
    scanf("%d", &guess3);


    printf("\nYour numbers are: %d %d %d\n\n", guess1, guess2, guess3);

    printf("Our selections : %d %d %d\n\n", num1, num2, num3);

    if (guess1 == num1 && guess2 == num2 && guess3 == num3)
    {
        printf("Congrats!! You won!!\n\n");
        printf("Make sure you collect your money at any of our agents\n\nAmount Won:MWK%d\n\nTransaction Token Number: %d\n\n",1000,(100 - count));
    }
    else
    {
        printf("You lose :(\n\n");
    }

}

