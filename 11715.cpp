#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i = 1;
    double a, b, c, x, y;

    while(scanf("%d", &n) && n) {
        scanf("%lf%lf%lf", &a, &b, &c);

        if(n == 1) {
            x = (b - a) / c;
            y = (a * c) + (0.5 * x * c * c);

            printf("Case %d: %0.3lf %0.3lf\n", i++, y, x);
        } else if(n == 2) {
            x = (b - a) / c;
            y = (a * x) + (0.5 * c * x * x);
            
            printf("Case %d: %0.3lf %0.3lf\n", i++, y, x);
        } else if(n == 3) {
            x = sqrt((a * a) + (2 * b * c));
            y = (x - a) / b;
            
            printf("Case %d: %0.3lf %0.3lf\n", i++, x, y);
        } else {
            x = sqrt((a * a) - (2 * b * c)); 
            y = (a - x) / b;
            
            printf("Case %d: %0.3lf %0.3lf\n", i++, x, y);
        }
    }

    return 0;
}
