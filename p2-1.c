#include <stdio.h>
#define MAX_SIZE 100

float sum1(float list[], int);
float sum2(float *list, int);
float sum3(int n, float *list);

float input[MAX_SIZE], answer;
int i;

void main() {
    for (i = 0; i < MAX_SIZE; i++) input[i] = i;
    
    printf("========== 2023041018 ±èÁØÈÄ ==========\n");
    printf("sum1(input, MAX_SIZE) \n");
    printf("input \t= %p\n", input);
    answer = sum1(input, MAX_SIZE);
    printf("The sum is: %f\n", answer);

    printf("========== 2023041018 ±èÁØÈÄ ==========\n");
    printf("sum2(input, MAX_SIZE) \n");
    printf("input \t= %p\n", input);
    answer = sum2(input, MAX_SIZE);
    printf("The sum is: %f\n", answer);

    printf("========== 2023041018 ±èÁØÈÄ ==========\n");
    printf("sum3(MAX_SIZE, input) \n");
    printf("input \t= %p\n", input);
    answer = sum3(MAX_SIZE, input);
    printf("The sum is: %f\n", answer);
}

float sum1(float list[], int n) {
    printf("list \t= %p\n", list);
    printf("&list \t= %p\n\n", &list);
    float tempsum = 0;
    for(int i = 0; i < n; i++) tempsum += list[i];
    return tempsum;
}

float sum2(float *list, int n) {
    printf("list \t= %p\n", list);
    printf("&list \t= %p\n\n", &list);
    float tempsum = 0;
    for(int i = 0; i < n; i++) tempsum += *(list + i);
    return tempsum;
}

float sum3(int n, float *list) {
    printf("list\t= %p\n", list);
    printf("&list\t= %p\n\n", &list);
    float tempsum = 0;
    for(int i = 0; i < n; i++) tempsum += *(list + i);
    return tempsum;
}