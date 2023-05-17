#include <stdio.h>

int second_largest(int n, int numbers[n])
{
    int largest = numbers[0];
    for (int i = 1; i < n; i++){
        if (numbers[i] > largest){
            largest = numbers[i];
        }
    }

    int second_largest = 0;
    for (int i = 0; i < n; i++) {
        if (numbers[i] < largest && numbers[i] > second_largest) {
            second_largest = numbers[i];
        }
    }

    return second_largest;
}

int main() {
    int numbers[100];
    int n = 0;

    while (1) {
        int number;
        scanf("%d", &number);
        if (number == -1) {
            break;
        }
        numbers[n++] = number;
    }

    int result = second_largest(n, numbers);
    printf("%d", result);

    return 0;
}