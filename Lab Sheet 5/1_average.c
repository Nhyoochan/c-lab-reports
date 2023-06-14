
#include <stdio.h>

int main() {
    int num, sum = 0;
    float average;

    printf("Enter 10 numbers:\n");

    for (int i = 1; i <= 10; i++) {
        printf("Number %d: ", i);
        scanf("%d", &num);
        sum += num;
    }

    average = (float) sum / 10;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
