#include <bits/stdc++.h>

using namespace std;

void nodPrime(int n) {
    map <int, int> count;

    if(n < 0) {
        n *= -1;
        count[-1] = 1;
    }

    while(!(n & 1)) {
        count[2]++;
        n >>= 1;
    }

    int root = sqrt(n);

    for(int i = 3; i <= root; i += 2) {
        while(!(n % i)) {
            count[i]++;
            n /= i;
        }
    }

    if(n > 2) {
        count[n]++;
    }

    for(map <int, int>::iterator it = count.begin(); it != count.end();) {
        for(int i = 0; i < it->second; i++) {
            printf("%d", it->first);

            if(i + 1 != it->second) {
                printf(" x ");
            }
        }

        if(++it != count.end()) {
            printf(" x ");
        }
    }
    putchar('\n');
}

int main()
{
    int n;

    while(scanf("%d", &n) && n ) {
        printf("%d = ", n);
        nodPrime(n);
    }

    return 0;
}
