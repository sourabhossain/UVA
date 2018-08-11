#include <bits/stdc++.h>
#define SIZE 10000

using namespace std;

vector <bool> p(SIZE, true);

void prime() {
    int root = sqrt(SIZE);
    for(int i = 2; i <= root; i++) {
        if(p[i]) {
            for(int j = i + i; j < SIZE; j += i) {
                p[j] = false;
            }
        }
    }
}

int main()
{
    int lower[26], upper[26];

    prime();
    for(int i = 0; i < 26; i++) {
        lower[i] = i + 1;
        upper[i] = i + 27;
    }

    char s[21];

    while(scanf("%s", s) != EOF) {
        int sum = 0;
        for(int i = 0; s[i]; i++) {
            if(s[i] >= 'a' && s[i] <= 'z') {
                sum += lower[s[i] - 'a'];
            }
            else {
                sum += upper[s[i] - 'A'];
            }
        }

        if(p[sum]) {
            printf("It is a prime word.\n");
        }
        else {
            printf("It is not a prime word.\n");
        }
    }

    return 0;
}
