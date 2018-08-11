#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for(int i = 1; i <= T; i++) {
        int a, b;
        scanf("%d%d", &a, &b);

        if(a > b) {
            a ^= b;
            b ^= a;
            a ^= b;
        }

        if(!(a & 1)) {
            a++;
        }

        int sum = 0;
        while(a <= b) {
            sum += a;
            a += 2;
        }
        printf("Case %d: %d\n", i, sum);
    }

    return 0;
}
