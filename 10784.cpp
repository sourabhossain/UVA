#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n;

    for(int i = 1; scanf("%lf", &n) && n; i++) {
        printf("Case %d: %0.0lf\n", i, ceil((3.0 + sqrt(9 + (8 * n))) / 2.0));
    }

    return 0;
}
