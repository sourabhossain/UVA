#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    while(scanf("%d", &n) != EOF) {
        vector <int> data(n);

        for(int i = 0; i < n; i++) {
            scanf("%d", &data[i]);
        }

        int c = 0;
        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                if(data[i] > data[j]) {
                    c++;
                }
            }
        }

        printf("Minimum exchange operations : %d\n", c);
    }

    return 0;
}
