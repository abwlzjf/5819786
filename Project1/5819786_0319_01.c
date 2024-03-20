#include <stdio.h>
#include <time.h>

double factorial_iter(int n) {
	double result = 1;
	for (int i = 1;i <= n;i++) {
		result *= i;
	}
	return result;
}

double factorial_rec(int n) {
	if (n <= 1) return 1;
	else
		return n * factorial_rec(n - 1);
}

int main() {
	clock_t start, end;
	double time;
	double result_rec, result_iter;

	start = clock();
	result_iter = factorial_iter(20);
	end = clock();

	time = ((double)(end - start)) / CLOCKS_PER_SEC);
	printf("Factorial Recursive Result: %lf\n", result_iter);
	printf("Time: %lf\n", time);

	start = clock();
	result_rec = factorial_rec(20);
	end = clock();

	time = ((double)(end - start)) / CLOCKS_PER_SEC);
	printf("Factorial Recursive Result: %lf\n", result_rec);
	printf("Time: %lf\n", time);
	return 0;
}