#include <bits/stdc++.h>
#define SIZE 2001

using namespace std;

bool isPrime[SIZE];

void prime() {
    isPrime[1] = true;

    for(int i = 4; i < SIZE; i += 2) {
        isPrime[i] = 1;
    }

	int root = sqrt(SIZE);

	for(int i = 3; i <= root; i += 2) {
        if(!isPrime[i]) {
            for(int j = i * i; j < SIZE; j += i << 1) {
                isPrime[j] = 1;
            }
        }
	}
}

int main()
{
    prime();
    int T;

    scanf("%d", &T);

    for(int i = 1; i <= T; i++) {
        string s;
        map <char, int> m;

        cin >> s;

        for(int i = 0; s[i]; i++) {
            m[s[i]]++;
        }

        bool b = true;
        printf("Case %d: ", i);

        for(map <char, int>::iterator it = m.begin(); it != m.end(); it++) {
            if(!isPrime[it->second]) {
                printf("%c", it->first);
                b = false;
            }
        }

        if(b) {
            puts("empty");
        } else {
            putchar('\n');
        }
    }

    return 0;
}
