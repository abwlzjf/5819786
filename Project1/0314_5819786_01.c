#include <stdio.h>
#include <time.h>
#define MAX 100

int main(void) {
    int sum = 0; // 소수 합 변수
    clock_t start, end; // clock 변수
    double time; // 수행 시간을 저장할 변수

    start = clock(); // 시작 시간 저장

    for (int i = 2; i <= MAX; i++) { // 0과 1은 소수가 아니므로 i=2부터 시작
        int isPrime = 1; // 현재 숫자가 소수인지 여부를 나타내는 변수

        for (int j = 2; j < i; j++) { // 자기 자신과 1 이외의 수로 나누어 모두 나머지가 0이 아니면 소수
            if (i % j == 0) { // 나누어 떨어지는 경우
                isPrime = 0; // 소수x
                break;
            }
        }

        if (isPrime) { // 소수일 때 합에 더함
            sum += i;
        }
    }

    end = clock(); // 종료 시간 저장
    time = ((double)(end - start)) / CLOCKS_PER_SEC; // 수행 시간을 초 단위로 계산함

    printf("0부터 %d까지에서 소수의 합: %d\n",MAX,sum); // 소수의 합 출력
    printf("프로그램의 수행 시간: %.lf 초\n",time); // 수행 시간 출력

    return 0;
}