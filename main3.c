#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    int remainder;
    int powresult = 1;
    int sum = 0;
    int temp = x;
    int n = 0;

for (int i = x; i != 0; i = i/10)
{
    n++;
}

    for (int i = n; i > 0; i-- )
    {
        remainder = temp % 10;
        temp = temp/10;
        printf("%d\n",temp);
        for (int j = n; j > 0; j--)
        {
            powresult = powresult * remainder;
        }
        sum = sum + powresult;
        powresult = 1;
    }
    if (sum == x)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not an Armstrong number");
    }

}
