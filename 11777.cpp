#include <bits/stdc++.h>

using namespace std;

void f(int& a, int& b) {
    if(b > a) {
        swap(a, b);
    }
}

int main()
{
    int T;

    scanf("%d", &T);

    for(int i = 1; i <= T; i++) {
        int sum = 0, a = 4, b, c;

        while(a--) {
            scanf("%d", &b);
            sum += b;
        }

        scanf("%d%d%d", &a, &b, &c);
        f(a, b), f(a, c), f(b, c);
        sum += ((a + b) / 2);

        if(sum >= 90) {
            printf("Case %d: A\n", i);
        } else if(sum >= 80) {
            printf("Case %d: B\n", i);
        } else if(sum >= 70) {
            printf("Case %d: C\n", i);
        } else if(sum >= 60) {
            printf("Case %d: D\n", i);
        } else {
            printf("Case %d: F\n", i);
        }
    }

    return 0;
}
