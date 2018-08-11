#include <bits/stdc++.h>
#define SIZE 1000002

using namespace std;

vector<int> prime;
bool isPrime[SIZE];

void sieve() {
    isPrime[1] = 1;

    for(int i = 2; i < SIZE; i += 2) {
        isPrime[i] = 1;
    }

    int root = sqrt(SIZE);

    for(int i = 3; i < SIZE; i += 2) {
        if(!isPrime[i]) {
            prime.push_back(i);

            if(i <= root) {
                for(int j = i * i; j < SIZE; j += i << 1) {
                    isPrime[j] = 1;
                }
            }
        }
    }
}

int main()
{
    sieve();
    int n;

    while(scanf("%d", &n) && n) {
        int temp;
        bool ck = true;

        for(vector<int>::iterator it = prime.begin(); it != prime.end(); it++) {
            temp = n - *it;
            if(temp < 1) {
                break;
            } else if(!isPrime[temp]) {
                printf("%d = %d + %d\n", n, *it, temp);
                ck = false;
                break;
            }
        }

        if(ck) {
            puts("Goldbach's conjecture is wrong.");
        }
    }

    return 0;
}
