#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter any number\n");
    int x;
    scanf("%d", &x);
    printf("Enter nth bit to toggle (0-31): ");
    int y;
    scanf("%d", &y);

    int z = x ^ (1 << (y));


    printf("Bit toggled successfully\n");
    printf("Number before toggling %d bit:%d (in decimal)\n", y,x);
    printf("Number after toggling %d bit:%d (in decimal)", y,z);
}

