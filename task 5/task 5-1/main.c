
#include <stdio.h>


unsigned char setBit(unsigned char num, int bitNum) {
    return num | (1 << bitNum);
}


unsigned char clearBit(unsigned char num, int bitNum) {
    return num & ~(1 << bitNum);
}


unsigned char toggleBit(unsigned char num, int bitNum) {
    return num ^ (1 << bitNum);
}


int readBit(unsigned char num, int bitNum) {
    return (num >> bitNum) & 1;
}

int main() {
    unsigned char number;
    int bitNumber, functionId;

    printf("Enter the number: ");
    scanf("%hhu", &number);

    printf("Enter the bit number (0-7): ");
    scanf("%d", &bitNumber);

    printf("Enter the function ID: ");
    scanf("%d", &functionId);

    switch (functionId) {
        case 1:
            number = setBit(number, bitNumber);
            break;
        case 2:
            number = clearBit(number, bitNumber);
            break;
        case 3:
            number = toggleBit(number, bitNumber);
            break;
        case 4:
            printf("Bit value: %d\n", readBit(number, bitNumber));
            break;
        default:
            printf("Invalid function ID!\n");
            return 1;
    }

    if (functionId >= 1 && functionId <= 3) {
        printf("Number after function: %hhu\n", number);
    }

    return 0;
}

