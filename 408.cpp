#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    while(b) {
        b ^= a ^= b ^= a %= b;
    }

    return a;
}

int main()
{
    int a, b;

    while(scanf("%d%d", &a, &b) != EOF) {
        int temp = gcd(a, b);

        if(temp == 1) {
            printf("%10d%10d    Good Choice\n", a, b);
        } else {
            printf("%10d%10d    Bad Choice\n", a, b);
        }
        putchar('\n');
    }

    return 0;
}
