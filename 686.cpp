#include <bits/stdc++.h>
#define SIZE 32800

using namespace std;

vector<int> prime;
bool isPrime[SIZE];

void sieve() {
    isPrime[1] = 1;

    for(int i = 4; i < SIZE; i += 2) {
        isPrime[i] = 1;
    }

    int root = sqrt(SIZE);
    prime.push_back(2);

    for(int i = 3; i < SIZE; i += 2) {
        if(!isPrime[i]) {
            prime.push_back(i);

            if(i <= root) {
                for(int j = i * i, k = i << 1; j < SIZE; j += k) {
                    isPrime[j] = 1;
                }
            }
        }
    }
}

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    sieve();
    int n;

    while(scanf("%d", &n) && n) {
        int temp, count = 0;

        for(vector<int>::iterator it = prime.begin(); it != prime.end(); it++) {
            temp = n - *it;

            if(*it > temp || temp < 1) {
                break;
            } else if(isPrime[temp] == 0) {
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
