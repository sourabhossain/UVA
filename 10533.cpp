#include <bits/stdc++.h>
#define SIZE 1000002

using namespace std;

int prime[SIZE];
bool isPrime[SIZE];

void sieve() {
    isPrime[1] = 1;
    prime[2] = 1;

    for(int i = 4; i < SIZE; i += 2) {
        isPrime[i] = 1;
    }

    int root = sqrt(SIZE);

    for(int i = 3; i < SIZE; i += 2) {
        if(!isPrime[i]) {
           int n = i, sum = 0;

            while(n) {
                sum += (n % 10);
                n /= 10;
            }

            if(!isPrime[sum]) {
                prime[i] = 1;
            }

            if(i <= root) {
                for(int j = i * i; j < SIZE; j += i << 1) {
                    isPrime[j] = 1;
                }
            }
        }
    }

    for(int i = 3; i < SIZE; i++) {
        prime[i] = prime[i - 1] + prime[i];
    }
}

int main()
{
    sieve();
    int T, start, end;

    scanf("%d", &T);

    while(T--) {
        scanf("%d%d", &start, &end);
        printf("%d\n", prime[end] - prime[start - 1]);
    }

    return 0;
}
