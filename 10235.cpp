#include <bits/stdc++.h>
#define SIZE 1000002

using namespace std;

bool isPrime[SIZE];

void sieve() {
    isPrime[1] = 1;

    for(int i = 4; i < SIZE; i += 2) {
        isPrime[i] = 1;
    }

    int root = sqrt(SIZE) + 1;

    for(int i = 3; i < root; i += 2) {
        if(!isPrime[i]) {
            for(int j = i * i, k = i << 1; j < SIZE; j += k) {
                isPrime[j] = 1;
            }
        }
    }
}

int reverse(int n) {
    int r = 0;

    while(n) {
        r = r * 10 + n % 10;
        n /= 10;
    }

    return r;
}

int main()
{
    sieve();
    int n;

    while(scanf("%d", &n) != EOF) {
        if(isPrime[n]) {
            printf("%d is not prime.\n", n);
        } else {
            int temp = reverse(n);

            if(isPrime[temp] || n == temp) {
                printf("%d is prime.\n", n);
            } else {
                printf("%d is emirp.\n", n);
            }
        }
    }

    return 0;
}
