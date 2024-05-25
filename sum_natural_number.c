//print the sum of natural numbers
#include<stdio.h>

int main() {
    int num, i, sum;
    sum=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    //using for loop to calculate the sum of natural number
    if(num >= 0) {
        for(i=1; i <=num; i++) {
            sum += i;
        }
        printf("the sum of the natural number is: %d", sum);
    }
    return 0;
}
