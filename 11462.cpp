#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    while(scanf("%d", &n) && n) {
        vector <int> data(n);

        for(int i = 0; i < n; i++) {
            scanf("%d", &data[i]);
        }
        sort(data.begin(), data.end());

        for(int i = 0; i < n; i++) {
            printf("%d", data[i]);

            if(i + 1 != n) {
                putchar(' ');
            }
        }
        putchar('\n');
    }

    return 0;
}
