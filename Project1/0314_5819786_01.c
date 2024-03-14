#include <stdio.h>
#define MAX 100

main(void) {
    int sum = 0;

    for (int i = 2; i <= MAX; i++) {
        int isPrime = 1;

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            sum += i;
        }
    }

	return 0;
}