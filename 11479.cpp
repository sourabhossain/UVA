#include <stdio.h>

int main()
{
    int T;

    scanf("%d", &T);

    for(int i = 1; i <= T; ++i) {
        long long int a, b, c;

        scanf("%lld%lld%lld", &a, &b, &c);

        if((a+b) <= c || (a+c) <= b || (b+c) <= a) {
            printf("Case %d: Invalid\n", i);
        }
        else if(a == b && a == c && b == c) {
            printf("Case %d: Equilateral\n", i);
        }
        else if(a == b || a == c || b == c) {
            printf("Case %d: Isosceles\n", i);
        }
        else {
            printf("Case %d: Scalene\n", i);
        }
    }

    return 0;
}
