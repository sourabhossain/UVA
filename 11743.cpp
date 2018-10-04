#include <bits/stdc++.h>

using namespace std;

int solve(char n) {
    n = (n - '0') * 2;
    int sum = 0;

    while(n) {
        sum += (n % 10);
        n /= 10;
    }

    return sum;
}

int main()
{
    int T;
    string first, second, third, fourth;

    scanf("%d", &T);

    while(T--) {
        cin >> first >> second >> third >> fourth;
        int a = 0, b = 0;

        for(int i = 0; i < 4; i++) {
            if(i & 1) {
                a += (first[i] - '0');
                a += (second[i] - '0');
                a += (third[i] - '0');
                a += (fourth[i] - '0');
            } else {
                b += (solve(first[i]));
                b += (solve(second[i]));
                b += (solve(third[i]));
                b += (solve(fourth[i]));
            }
        }

        if((a + b) % 10 == 0) {
            puts("Valid");
        } else {
            puts("Invalid");
        }
    }

    return 0;
}
