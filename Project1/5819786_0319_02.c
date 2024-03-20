#include <stdio.h>
#include <time.h>

double power_iter(int a, int n) {
    double result = 1;
    for (int i = 0; i < n; ++i) {
        result *= a;
    }
    return result;
}

double power_rec(double a, int n) {
    if (n == 0)
        return 1;
    else if (n % 2 == 0) {
        return power_rec(a * a, n / 2);
    }
    else
        return a * power_rec(a * a, (n - 1) / 2);

}

int main() {
    clock_t start, end;
    double result_iter, result_rec;

    // 반복문 거듭제곱 실행 및 시간 측정
    start = clock();
    result_iter = power_iter(13, 21);
    end = clock();
    printf("Power Iterative Result: %lf\n", result_iter);
    printf("Time: %lf\n", ((double)(end - start)) / CLOCKS_PER_SEC);

    // 재귀함수 거듭제곱 실행 및 시간 측정
    start = clock();
    result_rec = power_rec(13, 21);
    end = clock();

    // 결과 출력

    printf("Power Recursive Result: %lf\n", result_rec);
    printf("Time: %lf\n", ((double)(end - start)) / CLOCKS_PER_SEC);

    return 0;
}