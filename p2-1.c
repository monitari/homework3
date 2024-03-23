#include <stdio.h>
#define MAX_SIZE 100  // �迭�� �ִ� ũ�⸦ 100���� ����

float sum1(float list[], int);  // sum1 �Լ��� ������Ÿ�� ����
float sum2(float *list, int);   // sum2 �Լ��� ������Ÿ�� ����
float sum3(int n, float *list); // sum3 �Լ��� ������Ÿ�� ����

float input[MAX_SIZE], answer;  // �迭 input�� �հ踦 ������ answer ���� ����
int i;                          // �ݺ����� ����� i ���� ����

void main() {
    for (i = 0; i < MAX_SIZE; i++) input[i] = i;  // �ݺ����� ���� �迭 input�� 0���� 99������ ���� �Ҵ�
    /*  call by reference Ȯ�ο� */
    printf("========== 2023041018 ������ ==========\n");
    printf("sum1(input, MAX_SIZE) \n");
    printf("input \t= %p\n", input);  // �迭 input�� �ּҸ� ���
    answer = sum1(input, MAX_SIZE);   // sum1 �Լ��� ȣ���Ͽ� ����� answer�� ����
    printf("The sum is: %f\n", answer); // �հ踦 ���

    printf("========== 2023041018 ������ ==========\n");
    printf("sum2(input, MAX_SIZE) \n");
    printf("input \t= %p\n", input);  // �迭 input�� �ּҸ� ���
    answer = sum2(input, MAX_SIZE);  // sum2 �Լ��� ȣ���Ͽ� ����� answer�� ����
    printf("The sum is: %f\n", answer);  // �հ踦 ���

    printf("========== 2023041018 ������ ==========\n");
    printf("sum3(MAX_SIZE, input) \n");
    printf("input \t= %p\n", input);  // �迭 input�� �ּҸ� ���
    answer = sum3(MAX_SIZE, input);  // sum3 �Լ��� ȣ���Ͽ� ����� answer�� ����
    printf("The sum is: %f\n", answer);  // �հ踦 ���
}

float sum1(float list[], int n) {  // �迭�� ����� �Լ� ����
    printf("list \t= %p\n", list);   // �迭 list�� �ּҸ� ���
    printf("&list \t= %p\n\n", &list); // list �迭 ������ ��ü�� �ּҸ� ���
    float tempsum = 0;
    for(int i = 0; i < n; i++) tempsum += list[i];  // �迭 ��Ҹ� �ϳ��� ���� tempsum�� ����
    return tempsum;          // ���� �հ踦 ��ȯ
}

float sum2(float *list, int n) {  // �����͸� ����� �Լ� ����
    printf("list \t= %p\n", list);
    printf("&list \t= %p\n\n", &list);
    float tempsum = 0;
    for(int i = 0; i < n; i++) tempsum += *(list + i);  // ������ ������ ����Ͽ� �迭 ��Ҹ� ����
    return tempsum;
}

float sum3(int n, float *list) {  // ���� ���� ���� �׽�Ʈ�� �Լ�
    printf("list\t= %p\n", list);
    printf("&list\t= %p\n\n", &list);
    float tempsum = 0;
    for(int i = 0; i < n; i++) tempsum += *(list + i);  // sum2�� ������ ������� �迭 ��Ҹ� ����
    return tempsum;
}