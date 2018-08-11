#include <stdio.h>

int main()
{
    long long n;

    while(scanf("%lld", &n)) {
        if(n == 0) {
            break;
        }

        while(1) {
            int sum = 0;
            while(n) {
                sum = sum + (n % 10);
                n = n / 10;
            }

            if(sum < 10) {
                printf("%d\n", sum);
                break;
            }
            else {
                n = sum;
            }
        }
    }

    return 0;
}
