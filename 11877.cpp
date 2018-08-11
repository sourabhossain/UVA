#include <stdio.h>

int main()
{
    int n;

    while(scanf("%d", &n)) {
        if(n == 0) {
            break;
        }

        int sum = 0;
        while(n > 2) {
            int t = n / 3;
            sum += t;

            n %= 3;
            n += t;
        }

        if(n == 2) {
            ++sum;
        }
        printf("%d\n", sum);
    }

    return 0;
}
