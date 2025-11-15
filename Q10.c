#include <stdio.h>

int main() {
    int grid[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int *ptr = &grid[0][0];
    int *row2 = &grid[1][0];

    printf("=== Pointer Grid Operations ===\n");

    printf("1. *ptr: %d\n", *ptr);
    printf("2. *(ptr + 5): %d\n", *(ptr + 5));
    printf("3. row2[2]: %d\n", row2[2]);
    printf("4. row2[-1]: %d\n", row2[-1]);

    printf("5. Divisible by 3:\n");
    for (int i = 0; i < 12; i++) {
        if (*(ptr + i) % 3 == 0) {
            printf("%d ", *(ptr + i));
        }
    }
    printf("\n");

    int *last = &grid[2][3];
    printf("6. Last element: %d\n", *last);

    return 0;
}

