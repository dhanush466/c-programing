#include<stdio.h>

int main() {
    // delclare variables
    int i, n, sum = 0;

    // take input of n
    printf("Enter no of terms: ");
    scanf("%d", & n);

    // calculate the sum using formula
    sum = (n * (n + 1)) / 2;

    // display result
    printf("Sum: %d\n", sum);

    return 0;
}




