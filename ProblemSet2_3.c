#include<stdio.h>

int main()
{
    int a;
    int b;

    //Asks for an input for both numbers
    printf("Enter an integer value for A.\n");
    scanf("%d",&a);

    printf("Enter an integer value for B.\n");
    scanf("%d",&b);

    //Prints the inputed values
    printf("Before swap: A = %d, B = %d\n",a,b);

    //Uses a new integer holder to be used for the swap
    int holder = a;
    a = b;
    b = holder;

    //Prints the swap
    printf("After swap: A = %d, B = %d\n",a,b);

    return 0;
}