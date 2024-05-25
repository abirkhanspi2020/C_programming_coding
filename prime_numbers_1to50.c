//write a c program to print prime numbers from 1 to 50
#include<stdio.h>

int main()
{
    int num, i,checkPrime;

    for(num = 2; num<=50; num++)
    {
        checkPrime = 1;
        for(i = 2; i*i <= num; i++)
        {
            if(num % i == 0)
            {
                checkPrime = 0;
                break;
            }
        }
        if(checkPrime == 1)
        {
            printf("%d\n", num);
        }

    }
    return 0;
}
