#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num_1;
    float num_2;
    char op;
    printf("Enter your first number:\n");
    scanf("%f", &num_1);
    printf("Enter your operator (* or / or - or +)\n");
    scanf(" %c", &op);
    while(op != '-' && op != '+' &&  op != '*' && op != '/')
    {
        printf("Invalid input\n");
        printf("Please reenter the correct operator (* or / or - or +)\n");
        scanf(" %c", &op);
    }



    printf("Enter your second number:\n");
    scanf("%f", &num_2);

    switch(op)
    {
    case '+':
        printf("The result = %.2f", num_1 + num_2);
        break;
    case '-':
        printf("The result = %.2f", num_1 - num_2);
        break;
    case '*':
        printf("The result = %.2f", num_1 * num_2);
        break;
    case '/':
        if (num_2 == 0)
        {
            printf("Math error");
        }
        else
        {
           printf("The result = %.2f", num_1 / num_2);
        }

        break;
    }

}
