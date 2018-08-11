#include <bits/stdc++.h>

int main()
{
    int n;

    while(scanf("%d", &n) != EOF) {
        int T = 0, c = 0;

        T += n;
        while(n > 2) {
            c = n / 3;
            T += c;
            n %= 3;
            n += c;
        }

        if(n == 2) {
            T++;
        }

        printf("%d\n", T);
    }

    return 0;
}
