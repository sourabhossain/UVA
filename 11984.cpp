#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    float c, f;

    scanf("%d", &T);

    for(int i = 1; i <= T; i++) {
        scanf("%f%f", &c, &f);
        printf("Case %d: %0.2f\n", i, c + (f * 0.5555556));
    }

    return 0;
}