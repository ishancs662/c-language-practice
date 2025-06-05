#include <stdio.h>
#include <stdint.h>

// Function to print an integer in binary
void printBinary(uint32_t number, int bits) {
    for (int i = bits - 1; i >= 0; i--) {
        // Shift the bit to the rightmost position and mask with 1 to get the bit value
        printf("%d", (number >> i) & 1);
    }
    printf("\n");
}

int main() {
    uint32_t number = 120; // Example integer
    int bits = sizeof(number) * 8; // Number of bits in the integer type

    printf("Number in binary: ");
    printBinary(number, bits);

    return 0;
}

