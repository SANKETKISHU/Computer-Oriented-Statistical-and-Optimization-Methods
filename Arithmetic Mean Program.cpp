#include<stdio.h>
#include<conio.h>
int main()
{
    int i, size;
    float num, sum, am;
    printf("How many number to enter ? ");
    scanf("%d", &size);
    sum = 0;
    printf("Enter %d Numbers: ", size);
    for(i=0; i<size; i++)
    {
        scanf("%f", &num);
        sum = sum+num;
    }
    am = sum/size;
    printf("\nArithmetic Mean = %0.2f", am);
    getch();
    return 0;
}
