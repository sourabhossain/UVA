#include <bits/stdc++.h>
#define SIZE 20000000

using namespace std;

bool isPrime[SIZE];
vector<int> twin;

void sieve() {
    isPrime[1] = 1;

    for(int i = 4; i < SIZE; i += 2) {
        isPrime[i] = 1;
    }

    int root = sqrt(SIZE) + 2;

    for(int i = 3; i < root; i += 2) {
        if(!isPrime[i]) {
            for(int j = i * i; j < SIZE; j += i << 1) {
                isPrime[j] = 1;
            }
        }
    }
}

void twinPrime() {
    twin.push_back(0);

    for(int i = 2; i < SIZE; i++) {
        if(!isPrime[i] && !isPrime[i + 2]) {
           twin.push_back(i);
        }
    }
}

int main()
{
    sieve();
    twinPrime();
    int n;

    while(scanf("%d", &n) != EOF) {
        printf("(%d, %d)\n", twin[n], twin[n] + 2);
    }

    return 0;
}
