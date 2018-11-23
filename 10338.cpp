#include <bits/stdc++.h>
#define SIZE 21

using namespace std;

int main()
{
    unsigned long long f[SIZE] = {1};

    for(int i = 1; i < SIZE; i++) {
        f[i] = f[i - 1] * i;
    }

    int T;
    string s;

    scanf("%d", &T);

    for(int j = 1; j <= T; j++) {
        cin >> s;

        int length = s.size();
        unsigned long long ans = f[length];
        map<char, int> m;

        for(int i = 0; i < length; i++) {
            m[s[i]]++;
        }

        for(map<char, int>::iterator it = m.begin(); it != m.end(); it++) {
            ans /= f[it->second];
        }

        printf("Data set %d: %llu\n", j, ans);
    }

    return 0;
}
