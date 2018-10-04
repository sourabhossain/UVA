#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        double l, h, r;

       scanf("%lf", &l);
       
       h = l * 0.6;
       r = l * 0.2;
       l *= h;
       r = PI * r * r;
       
       printf("%0.2lf %0.2lf\n", r, l - r);
    }

    return 0;
}
