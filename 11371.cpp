#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;

    while(scanf("%lld", &n) != EOF) {
        string a = to_string(n);
        string b = a;
        sort(a.begin(), a.end());

        int c = 0;

        while(a.front() == '0') {
            c++;
            a.erase(a.begin());
        }

        while(c--) {
            a.insert(a.begin() + 1, '0');
        }

        sort(b.rbegin(), b.rend());
        long long m = atoll(a.c_str()), n = atoll(b.c_str());
        long long temp = n - m;
        printf("%lld - %lld = %lld = 9 * %lld\n", n, m, temp, temp / 9);
    }

    return 0;
}
