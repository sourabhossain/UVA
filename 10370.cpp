#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        int n;
        double sum = 0;

        scanf("%d", &n);
        vector<int> data(n);

        for(int i = 0; i < n; i++) {
            scanf("%d", &data[i]);
            sum += data[i];
        }

        sum /= n;
        int c = 0;

        for(int i = 0; i < n; i++) {
            if(sum < data[i]) {
                c++;
            }
        }
        printf("%0.3lf%%\n", 100.0 * ((double)c / (double)n));
    }

    return 0;
}
