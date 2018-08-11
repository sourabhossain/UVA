#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        int n;
        scanf("%d", &n);
        vector <int> data(n);

        for(int i = 0; i < n; i++) {
            scanf("%d", &data[i]);
        }

        int c = 0;
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if(data[i] > data[j]) {
                    c++;
                    swap(data[i], data[j]);
                }
            }
        }

        printf("Optimal train swapping takes %d swaps.\n", c);
    }

    return 0;
}
