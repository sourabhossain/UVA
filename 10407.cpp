#include <bits/stdc++.h>

using namespace std;

int data[1001];

int gcd(int a, int b) {
    while(b) {
		b ^= a ^= b ^= a %= b;
	}

	return a;
}

int main()
{
    while(scanf("%d", &data[0]) && data[0]) {
        int i = 1;

        while(scanf("%d", &data[i]) && data[i]) {
            i++;
        }

        int g = 0;

        for(int j = 1; j < i; j++) {
            g = gcd(g, data[j] - data[j - 1]);
        }

        printf("%d\n", (g < 0)? -g : g);
    }

    return 0;
}