#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;

    while(scanf("%lld", &n) && n) {
        double root = sqrt(n);
        int temp = root;

        if(root == temp) {
            puts("yes");
        } else {
            puts("no");
        }
    }

    return 0;
}
