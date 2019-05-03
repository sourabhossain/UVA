#include <bits/stdc++.h>
#define SIZE 1001

using namespace std;

int sum(int n) {
    if(n == 1) {
        return 1;
    }

    int root = sqrt(n), result = 1;

    for(int i = 2; i <= root; i++) {
        if(n % i == 0) {
            result += (i * i == n)? i : i + (n / i);
        }
    }

    return result + n;
}

int main()
{
    int n, result[SIZE];
    memset(result, -1, sizeof(result));

    for(int i = 1; i < SIZE; i++) {
        int s = sum(i);

        if(s < SIZE) {
            result[s] = i;
        }
    }

    for(int i = 1; scanf("%d", &n) && n; i++) {
        printf("Case %d: %d\n", i, result[n]);

    }

    return 0;
}
