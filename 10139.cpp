#include <bits/stdc++.h>

using namespace std;

bool ok(int n, int prime, int count) {
    for(int i = prime; n / i && count > 0; i *= prime) {
        count -= (n / i);
    }
      
    return count > 0;
}

int main(int argc, char const *argv[])
{
    int n, m;

    while(scanf("%d%d", &n, &m) != EOF) {
        if(n >= m) {
            printf("%d divides %d!\n", m, n);
            continue;
        }

        int k = m, count = 0;
        
        while(!(m & 1)) {
            count++;
            m >>= 1;
        }
        
        if(count && ok(n, 2, count)) {
            printf("%d does not divide %d!\n", k, n);
            continue;
        }
        
        bool ck = true;

        for(int i = 3; i * i <= m; i += 2) {
            count = 0;

            while(m % i == 0) {
                count++;
                m /= i;
            }

            if(count && ok(n, i, count)) {
                ck = false;
                break;
            }
        }

        if(ck && m > 1 && ok(n, m, 1)) {
            ck = false;
        }

        if(ck) {
            printf("%d divides %d!\n", k, n);
        } else {
            printf("%d does not divide %d!\n", k, n);
        }
    }

    return 0;
}