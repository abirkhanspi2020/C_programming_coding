//print a number 5 times
#include<stdio.h>

int main()
{
    int number;
    int i;
    printf("Enter a number: ");
    scanf("%d", &number);
    //create Loop to print 'number' five times
    for(i = 1; i <=5; i++)
    {
        printf("%d\n", number);
    }
    return 0;
}
