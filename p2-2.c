#include <stdio.h>

void print_one(int *ptr, int rows);  // print_one �Լ� ����

int main() {
    int one[] = {0, 1, 2, 3, 4};  // one �迭 ���� �� �ʱ�ȭ

    printf("one = %p\n", one);  // one �迭�� ���� �ּ� ���
    printf("&one = %p\n", &one);  // one �迭 ��ü�� �ּ� ���
    printf("&one[0] = %p\n\n", &one[0]);  // one �迭�� ù ��° ����� �ּ� ��� (��� ����)

    printf("========== 2023041018 ������ ==========\n");
    printf("print_one(&one[0], 5) \n");
    print_one(&one[0], 5);  // print_one �Լ� ȣ��, one �迭�� ù ��° ����� �ּҿ� ��� ���� ����

    printf("========== 2023041018 ������ ==========\n");
    printf("print_one(one, 5) \n");
    print_one(one, 5);  // print_one �Լ� ȣ��, one �迭�� ���� �ּҿ� ��� ���� ����

    return 0;
}

void print_one(int *ptr, int rows) {  // 1���� �迭�� �ּҿ� ���� ����ϴ� �Լ�
    printf("Address \t\t Contents\n");
    for (int i = 0; i < rows; i++) printf("%p \t %5d\n", ptr + i, *(ptr + i)); // �迭 ����� �ּҿ� ���� ���
    printf("\n");
}