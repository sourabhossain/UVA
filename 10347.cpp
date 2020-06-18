#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a, b, c;

    while(scanf("%lf%lf%lf", &a, &b, &c) != EOF) {
        double s = (a + b + c) / 2.0;
        double area =  (4.0 / 3.0) * sqrt(s * (s - a) * (s - b) * (s - c));

        if(area > 0) {
            printf("%0.3lf\n", area);
        } else {
            puts("-1.000");
        }
    }

    return 0;
}
