#include <stdio.h>
#include <stdlib.h>

void main() {
    int list[5]; // 크기가 5인 정수 배열 선언
    int *plist[5] = { NULL, }; // 크기가 5인 정수 포인터 배열 선언, 초기화

    plist[0] = (int *)malloc(sizeof(int)); // plist[0]에 동적 메모리 할당

    list[0] = 1; // list의 첫 번째 요소에 1 할당
    list[1] = 100; // list의 두 번째 요소에 100 할당
    *plist[0] = 200; // plist[0]이 가리키는 메모리 공간에 200 할당

    printf("list[0] = %d\n", list[0]); // list[0]의 값 출력
    printf("&list[0] = %p\n", &list[0]); // list[0]의 메모리 주소 출력
    printf("list = %p\n", list); // list 배열의 시작 주소 출력
    printf("&list = %p\n", &list); // list 배열의 주소 출력

    printf("========== 2023041018 김준후 ==========\n");
    printf("list[1] = %d\n", list[1]); // list[1]의 값 출력
    printf("&list[1] = %p\n", &list[1]); // list[1]의 메모리 주소 출력
    printf("*(list+1) = %d\n", *(list + 1)); // list+1이 가리키는 값 출력
    printf("list+1 = %p\n", list + 1); // list+1의 주소 출력

    printf("========== 2023041018 김준후 ==========\n");
    printf("*plist[0] = %d\n", *plist[0]); // plist[0]이 가리키는 값 출력
    printf("&plist[0] = %p\n", &plist[0]); // plist[0]의 메모리 주소 출력
    printf("&plist = %p\n", &plist); // plist 배열의 주소 출력
    printf("plist = %p\n", plist); // plist 배열의 시작 주소 출력
    printf("plist[0] = %p\n", plist[0]); // plist[0]의 값(주소) 출력
    printf("plist[1] = %p\n", plist[1]); // plist[1]의 값(NULL) 출력
    printf("plist[2] = %p\n", plist[2]); // plist[2]의 값(NULL) 출력
    printf("plist[3] = %p\n", plist[3]); // plist[3]의 값(NULL) 출력
    printf("plist[4] = %p\n", plist[4]); // plist[4]의 값(NULL) 출력

    free(plist[0]); // plist[0]에 할당된 동적 메모리 해제
}