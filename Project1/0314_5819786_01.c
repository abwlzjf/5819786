#include <stdio.h>
#include <time.h>
#define MAX 100

int main(void) {
    int sum = 0; // �Ҽ� �� ����
    clock_t start, end; // clock ����
    double time; // ���� �ð��� ������ ����

    start = clock(); // ���� �ð� ����

    for (int i = 2; i <= MAX; i++) { // 0�� 1�� �Ҽ��� �ƴϹǷ� i=2���� ����
        int isPrime = 1; // ���� ���ڰ� �Ҽ����� ���θ� ��Ÿ���� ����

        for (int j = 2; j < i; j++) { // �ڱ� �ڽŰ� 1 �̿��� ���� ������ ��� �������� 0�� �ƴϸ� �Ҽ�
            if (i % j == 0) { // ������ �������� ���
                isPrime = 0; // �Ҽ�x
                break;
            }
        }

        if (isPrime) { // �Ҽ��� �� �տ� ����
            sum += i;
        }
    }

    end = clock(); // ���� �ð� ����
    time = ((double)(end - start)) / CLOCKS_PER_SEC; // ���� �ð��� �� ������ �����

    printf("0���� %d�������� �Ҽ��� ��: %d\n",MAX,sum); // �Ҽ��� �� ���
    printf("���α׷��� ���� �ð�: %.lf ��\n",time); // ���� �ð� ���

    return 0;
}