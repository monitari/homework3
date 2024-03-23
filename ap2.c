#include <stdio.h>
#include <stdlib.h>

void main() {
    int list[5]; // 크기가 5인 정수 배열 선언
    int *plist[5]; // 크기가 5인 정수 포인터 배열 선언

    list[0] = 10; // list의 첫 번째 요소에 10 할당
    list[1] = 11; // list의 두 번째 요소에 11 할당

    plist[0] = (int *)malloc(sizeof(int)); // plist[0]에 동적 메모리 할당
    
    printf("========== 2023041018 김준후 ==========\n");
    printf("list[0] \t= %d\n", list[0]); // list[0]의 값 출력
    printf("list \t\t= %p\n", list); // list 배열의 시작 주소 출력
    printf("&list[0] \t= %p\n", &list[0]); // list[0]의 메모리 주소 출력
    printf("list + 0 \t= %p\n", list + 0); // list + 0의 주소 출력 (list 배열의 시작 주소)
    printf("list + 1 \t= %p\n", list + 1); // list + 1의 주소 출력 (list[1]의 주소)
    printf("list + 2 \t= %p\n", list + 2); // list + 2의 주소 출력 (list[2]의 주소)
    printf("list + 3 \t= %p\n", list + 3); // list + 3의 주소 출력 (list[3]의 주소)
    printf("list + 4 \t= %p\n", list + 4); // list + 4의 주소 출력 (list[4]의 주소)
    printf("&list[4] \t= %p\n", &list[4]); // list[4]의 메모리 주소 출력
    printf("========== 2023041018 김준후 ==========\n");

    free(plist[0]); // plist[0]에 할당된 동적 메모리 해제
}