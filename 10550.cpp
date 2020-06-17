#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d;

    while(scanf("%d%d%d%d", &a, &b, &c, &d) && a || b || c || d) {
        int result = 1080;

        result += ((a - b) > 0? (a - b) * 9 : (a - b + 40) * 9);
        result += ((c - b) > 0? (c - b) * 9 : (c - b + 40) * 9);
        result += ((c - d) > 0? (c - d) * 9 : (c - d + 40) * 9);

        printf("%d\n", result);
    }

    return 0;
}
