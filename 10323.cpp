#include <bits/stdc++.h>

int main()
{
    int n;

    while(scanf("%d", &n) != EOF) {
        if(n > 13) {
            printf("Overflow!\n");
        }
        else if(n < 0 && n & 1) {
            printf("Overflow!\n");
        }
        else if(n < 8) {
            printf("Underflow!\n");
        }
        else {
            long long T = 1;

            while(n) {
                T *= n--;
            }
            printf("%lld\n", T);
        }
    }

    return 0;
}
