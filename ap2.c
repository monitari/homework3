#include <stdio.h>
#include <stdlib.h>

void main() {
    int list[5]; // ũ�Ⱑ 5�� ���� �迭 ����
    int *plist[5]; // ũ�Ⱑ 5�� ���� ������ �迭 ����

    list[0] = 10; // list�� ù ��° ��ҿ� 10 �Ҵ�
    list[1] = 11; // list�� �� ��° ��ҿ� 11 �Ҵ�

    plist[0] = (int *)malloc(sizeof(int)); // plist[0]�� ���� �޸� �Ҵ�
    
    printf("========== 2023041018 ������ ==========\n");
    printf("list[0] \t= %d\n", list[0]); // list[0]�� �� ���
    printf("list \t\t= %p\n", list); // list �迭�� ���� �ּ� ���
    printf("&list[0] \t= %p\n", &list[0]); // list[0]�� �޸� �ּ� ���
    printf("list + 0 \t= %p\n", list + 0); // list + 0�� �ּ� ��� (list �迭�� ���� �ּ�)
    printf("list + 1 \t= %p\n", list + 1); // list + 1�� �ּ� ��� (list[1]�� �ּ�)
    printf("list + 2 \t= %p\n", list + 2); // list + 2�� �ּ� ��� (list[2]�� �ּ�)
    printf("list + 3 \t= %p\n", list + 3); // list + 3�� �ּ� ��� (list[3]�� �ּ�)
    printf("list + 4 \t= %p\n", list + 4); // list + 4�� �ּ� ��� (list[4]�� �ּ�)
    printf("&list[4] \t= %p\n", &list[4]); // list[4]�� �޸� �ּ� ���
    printf("========== 2023041018 ������ ==========\n");

    free(plist[0]); // plist[0]�� �Ҵ�� ���� �޸� ����
}