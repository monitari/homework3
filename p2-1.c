#include <stdio.h>
#define MAX_SIZE 100  // 배열의 최대 크기를 100으로 정의

float sum1(float list[], int);  // sum1 함수의 프로토타입 선언
float sum2(float *list, int);   // sum2 함수의 프로토타입 선언
float sum3(int n, float *list); // sum3 함수의 프로토타입 선언

float input[MAX_SIZE], answer;  // 배열 input과 합계를 저장할 answer 변수 선언
int i;                          // 반복문에 사용할 i 변수 선언

void main() {
    for (i = 0; i < MAX_SIZE; i++) input[i] = i;  // 반복문을 통해 배열 input에 0부터 99까지의 값을 할당
    /*  call by reference 확인용 */
    printf("========== 2023041018 김준후 ==========\n");
    printf("sum1(input, MAX_SIZE) \n");
    printf("input \t= %p\n", input);  // 배열 input의 주소를 출력
    answer = sum1(input, MAX_SIZE);   // sum1 함수를 호출하여 결과를 answer에 저장
    printf("The sum is: %f\n", answer); // 합계를 출력

    printf("========== 2023041018 김준후 ==========\n");
    printf("sum2(input, MAX_SIZE) \n");
    printf("input \t= %p\n", input);  // 배열 input의 주소를 출력
    answer = sum2(input, MAX_SIZE);  // sum2 함수를 호출하여 결과를 answer에 저장
    printf("The sum is: %f\n", answer);  // 합계를 출력

    printf("========== 2023041018 김준후 ==========\n");
    printf("sum3(MAX_SIZE, input) \n");
    printf("input \t= %p\n", input);  // 배열 input의 주소를 출력
    answer = sum3(MAX_SIZE, input);  // sum3 함수를 호출하여 결과를 answer에 저장
    printf("The sum is: %f\n", answer);  // 합계를 출력
}

float sum1(float list[], int n) {  // 배열을 사용한 함수 정의
    printf("list \t= %p\n", list);   // 배열 list의 주소를 출력
    printf("&list \t= %p\n\n", &list); // list 배열 포인터 자체의 주소를 출력
    float tempsum = 0;
    for(int i = 0; i < n; i++) tempsum += list[i];  // 배열 요소를 하나씩 더해 tempsum에 누적
    return tempsum;          // 최종 합계를 반환
}

float sum2(float *list, int n) {  // 포인터를 사용한 함수 정의
    printf("list \t= %p\n", list);
    printf("&list \t= %p\n\n", &list);
    float tempsum = 0;
    for(int i = 0; i < n; i++) tempsum += *(list + i);  // 포인터 연산을 사용하여 배열 요소를 더함
    return tempsum;
}

float sum3(int n, float *list) {  // 스택 변수 재사용 테스트용 함수
    printf("list\t= %p\n", list);
    printf("&list\t= %p\n\n", &list);
    float tempsum = 0;
    for(int i = 0; i < n; i++) tempsum += *(list + i);  // sum2와 동일한 방식으로 배열 요소를 더함
    return tempsum;
}