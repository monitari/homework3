#include <stdio.h>

void print_one(int *ptr, int rows);  // print_one 함수 선언

int main() {
    int one[] = {0, 1, 2, 3, 4};  // one 배열 선언 및 초기화

    printf("one = %p\n", one);  // one 배열의 시작 주소 출력
    printf("&one = %p\n", &one);  // one 배열 자체의 주소 출력
    printf("&one[0] = %p\n\n", &one[0]);  // one 배열의 첫 번째 요소의 주소 출력 (모두 같음)

    printf("========== 2023041018 김준후 ==========\n");
    printf("print_one(&one[0], 5) \n");
    print_one(&one[0], 5);  // print_one 함수 호출, one 배열의 첫 번째 요소의 주소와 요소 개수 전달

    printf("========== 2023041018 김준후 ==========\n");
    printf("print_one(one, 5) \n");
    print_one(one, 5);  // print_one 함수 호출, one 배열의 시작 주소와 요소 개수 전달

    return 0;
}

void print_one(int *ptr, int rows) {  // 1차원 배열의 주소와 값을 출력하는 함수
    printf("Address \t\t Contents\n");
    for (int i = 0; i < rows; i++) printf("%p \t %5d\n", ptr + i, *(ptr + i)); // 배열 요소의 주소와 값을 출력
    printf("\n");
}