#include <stdio.h>
#include <stdlib.h>

void printDiamond(int rows) {
    if (rows % 2 == 0) {
        printf("Please enter an odd number of rows.\n");
        return;
    }

    int space, i, j;
    int middleRow = rows / 2;

    // Upper part of the diamond
    for (i = 0; i <= middleRow; i++) {
        for (space = 0; space < middleRow - i; space++) {
            printf(" ");
        }
        for (j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower part of the diamond
    for (i = middleRow - 1; i >= 0; i--) {
        for (space = 0; space < middleRow - i; space++) {
            printf(" ");
        }
        for (j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int rows;

    printf("Enter the number of rows for the diamond (odd number): ");
    scanf("%d", &rows);

    printDiamond(rows);

    return 0;
}