#include <bits/stdc++.h>

int main()
{
    long long a, b;

    while(scanf("%lld%lld", &a, &b) && (a || b)) {
        int r = 0, c = 0;

        while(a || b) {
            r = ((a%10) + (b%10) + r) / 10;
            a /= 10;
            b /= 10;
            c += r;
        }

        if(c == 0) {
            printf("No carry operation.\n");
        }
        else if(c == 1) {
            printf("1 carry operation.\n");
        }
        else {
            printf("%d carry operations.\n", c);
        }
    }

    return 0;
}
