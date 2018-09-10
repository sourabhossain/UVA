#include <bits/stdc++.h>

using namespace std;

int nodPrime(int n) {
    set<int> f;

    if((n & 1) == 0) {
        n >>= 1;
        f.insert(2);

        while((n & 1) == 0) {
            n >>= 1;
        }
    }

    int root = sqrt(n);

    for(int i = 3; i <= root; i += 2) {
        if(n % i == 0) {
            n /= i;
            f.insert(i);

            while(n % i == 0) {
                n /= i;
            }
        }
    }

    if(n > 2) {
        f.insert(n);
    }

    return f.size();
}

int main()
{
    int n;

    while(scanf("%d", &n) && n) {
        printf("%d : %d\n", n, nodPrime(n));
    }

    return 0;
}