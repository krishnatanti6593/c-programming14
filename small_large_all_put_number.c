#include <stdio.h>

int main() {
    int N, num, i;
    int smallest, largest;

    printf("How many numbers will you enter (N)? \n");
    scanf("%d", &N);

    printf("Enter the numbers:\n");

    for (i = 1; i <= N; i++) {
        scanf("%d", &num);

        // Initialize smallest and largest with the very first number
        if (i == 1) {
            smallest = num;
            largest = num;
            continue; // Skip the rest of the checks for the first number
        }

        // Update smallest and largest using control flow
        if (num < smallest) {
            smallest = num;
        }
        if (num > largest) {
            largest = num;
        }
    }

    printf("\nLargest number entered: %d\n", largest);
    printf("Smallest number entered: %d\n", smallest);

    return 0;