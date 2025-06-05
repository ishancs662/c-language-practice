#include <stdio.h>
#include <stdint.h>

void printBinary(uint32_t number, int bits) {
    for (int i = bits - 1; i >= 0; i--) {
        printf("%d", (number >> i) & 1);
    }
    printf("\n");
}

int main() {
    uint32_t number = 120;
    int bits = sizeof(number) * 8; 

    printf("Number in binary: ");
    printBinary(number, bits);

    return 0;
}

