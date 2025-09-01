#include <stdio.h>

int main() {
    int num, sum = 0, count = 0;
    float average;

    printf("Enter numbers (0 to stop):\n");

    do {
        scanf("%d", &num);

        if (num != 0) {
            sum += num;
            count++;
        }
    } while (num != 0);

    if (count > 0) {
        average = (float) sum / count;
        printf("Sum = %d, Average = %.2f\n", sum, average);
    } else {
        printf("No numbers entered (other than 0).\n");
    }

    return 0;
}
