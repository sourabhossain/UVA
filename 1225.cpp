#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, n;

    scanf("%d", &T);

    while(T--) {
        scanf("%d", &n);
        int count[10] = {0}, temp;

        for(int i = 1; i <= n; i++) {
            temp = i;

            while(temp) {
                count[temp % 10]++;
                temp /= 10;
            }
        }

        for(int i = 0; i < 10; i++) {
            printf("%d", count[i]);

            if(i + 1 != 10) {
                putchar(' ');
            }
        }
        putchar('\n');
    }

    return 0;
}
