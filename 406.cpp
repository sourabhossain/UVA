#include <bits/stdc++.h>
#define SIZE 1002

using namespace std;

bool prime[SIZE];
vector<int> p;

void sieve() {
    int root = sqrt(SIZE);
    p.push_back(1);
    p.push_back(2);

    for(int i = 3; i < SIZE; i += 2) {
        if(prime[i] == false) {
            p.push_back(i);

            if(i <= root) {
                for(int j = i * i; j < SIZE; j += i << 1) {
                    prime[j] = 1;
                }
            }
        }
    }
}

int main()
{
    sieve();
    int n, c, length = p.size();

    while(scanf("%d%d", &n, &c) != EOF) {
        vector<int> ans;

        for(int i = 0; i < length && p[i] <= n; i++) {
            ans.push_back(p[i]);
        }

        int l = c, ll = ans.size();

        if(ll & 1) {
            c = (c << 1) - 1;
        } else {
            c <<= 1;
        }

        printf("%d %d:", n, l);

        if(ll <= c) {
            for(int i = 0; i < ll; i++) {
                printf(" %d", ans[i]);
            }
            putchar('\n');
        } else {
            int start = (ll >> 1) - (c >> 1), end = (ll >> 1) + (c >> 1);

            if((c & 1) == 0) {
                end--;
            }

            for(int i = start; i <= end; i++) {
                printf(" %d", ans[i]);
            }
            putchar('\n');
        }
        putchar('\n');
    }

    return 0;
}
