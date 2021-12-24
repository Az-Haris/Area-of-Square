#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    float Side, Area;
    printf("Enter the Length of Side of Square = ");
    scanf("%f", &Side);
    Area = Side*Side;
    printf("Square Area is = %f", Area);
    getch();
    return 0;
}
