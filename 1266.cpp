#include <bits/stdc++.h>

using namespace std;

int digit(int n) {
    int c = 0;

    while(n) {
        n /= 10;
        c++;
    }

    return c;
}

int main()
{
    int n;
    bool newLine = false;

    while(scanf("%d", &n) != EOF) {
        int magic[n][n], length = n * n, sum = length * (length + 1) / (2 * n), d = digit(length) + 1;

        for(int i = 1; i <= length; i++) {
            magic[(n - i % n + 1 + 2 * ((i - 1) / n)) % n][((n - 1) / 2 + i - 1 - (i - 1) / n) % n] = i;
        }

        if(newLine) {
            putchar('\n');
        } else {
            newLine = true;
        }

        printf("n=%d, sum=%d\n", n, sum);

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                printf("%*d", d, magic[i][j]);
            }
            putchar('\n');
        }
    }

    return 0;
}
