#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d, e;

    while(scanf("%d%d%d%d%d", &a, &b, &c, &d, &e) && a && b && c && d && e) {
        printf("%d\n", a * b * c * d * d * e * e);
    }

    return 0;
}
