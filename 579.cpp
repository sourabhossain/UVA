#include <bits/stdc++.h>

using namespace std;

int main()
{
    double h, m;

    while(scanf("%lf:%lf", &h, &m) && h || m) {
        double angle = fabs(((h*60 + m) * 0.5) - m*6);

        if(angle > 180) {
            angle = 360 - angle;
        }

        printf("%0.3lf\n", angle);
    }

    return 0;
}
