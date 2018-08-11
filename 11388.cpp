#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, gcd, lcm;

    scanf("%d", &T);

    while(T--) {
        scanf("%d%d", &gcd, &lcm);

        if(lcm % gcd == 0) {
            printf("%d %d\n", gcd, lcm);
        } else {
            puts("-1");
        }
    }

    return 0;
}
