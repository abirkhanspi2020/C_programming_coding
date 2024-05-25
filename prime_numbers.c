//write a c program to print prime number
#include<stdio.h>
//function declaration
int primeNum(int number);
int main()
{
    int num, checkPrime;
    printf("Enter a number: ");
    scanf("%d", &num);//get input from user
    checkPrime=primeNum(num);//return value stored from the primeNum function
    if(checkPrime == 1)//check the results of checkPrime variable
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }
}

int primeNum(int number)
{
    int i;
    if(number <= 1 )
    {
        return 0;
    }

    for(i=2; i*i<=number; i++)
    {
        if(number % i == 0)
        {
            return 0; //return 0 if its not a prime number
        }
    }
    return 1;//return 1 if its not a prime number
}
