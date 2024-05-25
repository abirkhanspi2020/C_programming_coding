//print odd number from  1 to 20
#include<stdio.h>

int main()
{
    int num;
    //using for loop to find odd numbers from 1 to 20
    for( num = 1; num <= 20; num += 2) {
        printf("%d\n", num);
    }
    return 0;
}
