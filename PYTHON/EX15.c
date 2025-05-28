#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("./commandline 153\n");
        printf("153 is an Armstrong number\n");
         return 1;
    }

    int num = atoi(argv[1]);
    int original = num, sum = 0, count = 0, digit;

    // Count digits
    int temp = num;
    while (temp != 0) {
        count++;
        temp /= 10;
    }

    // Calculate Armstrong sum
    temp = num;
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    // Check if Armstrong
    if (sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}
