#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        long long n, temp, sum = 0, t, c;

        scanf("%lld", &n);
        temp = n;
        int length = to_string(n).size();

        while(n) {
            t = n % 10;
            c = 1;

            for(int i = 0; i < length; i++) {
                c *= t;
            }

            sum += c;
            n /= 10;
        }

        if(sum == temp) {
            puts("Armstrong");
        } else {
            puts("Not Armstrong");
        }
    }

    return 0;
}
