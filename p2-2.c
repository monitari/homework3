#include <stdio.h>

void print_one(int *ptr, int rows);

int main() {
    int one[] = {0, 1, 2, 3, 4};

    printf("one = %p\n", one);
    printf("&one = %p\n", &one);
    printf("&one[0] = %p\n\n", &one[0]);

    printf("========== 2023041018 ±Ë¡ÿ»ƒ ==========\n");
    printf("print_one(&one[0], 5) \n");
    print_one(&one[0], 5);

    printf("========== 2023041018 ±Ë¡ÿ»ƒ ==========\n");
    printf("print_one(one, 5) \n");
    print_one(one, 5);

    return 0;
}

void print_one(int *ptr, int rows) {
    printf("Address \t\t Contents\n");
    for (int i = 0; i < rows; i++) printf("%p \t %5d\n", ptr + i, *(ptr + i));
    printf("\n");
}