//print sum of the numbers from 1 to 5
#include<stdio.h>

int main() {
    int num = 0;
    int i;
    //using for loop to sum of the numbers from 1 to 5;
    for(i = 1; i <= 5; i++) {
        num += i;
    }
    printf("%d\n", num);
    return 0;
}
