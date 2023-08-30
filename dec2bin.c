#include <stdio.h>

void decimalToBinary(int num) {
    if (num == 0) {
        printf("Binary: 0\n");
        return;
    }

    int binary[32]; // Assuming 32-bit binary representation
    int i = 0;

    while (num > 0) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    if (decimal < 0) {
        printf("Please enter a non-negative decimal number.\n");
    } else {
        decimalToBinary(decimal);
    }

    return 0;
}
