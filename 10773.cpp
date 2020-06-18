#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    for(int i = 1; i <= T; i++) {
        double d, v, u;

        scanf("%lf%lf%lf", &d, &v, &u);

        if(u <= v || u == 0 || v == 0) {
            printf("Case %d: can't determine\n", i);
        } else {
            double t1 = d / u;
            double t2 = d / sqrt(u*u - v*v);

            printf("Case %d: %0.3lf\n", i, fabs(t1 - t2));
        }
    }

    return 0;
}
