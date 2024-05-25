//print even number from 1 to 20
#include <stdio.h>

// declare User-defined function
int Even_num(int number);

int main() {
    int i;
    // Loop from 1 to 20
    for(i = 1; i <= 20; i++) {
        if(Even_num(i) == 0) { //check 'i' is even or not
            printf("%d\n", i);
        }
    }
    return 0;
}

int Even_num(int number) {
    return number % 2;//return 1 if its even
}
