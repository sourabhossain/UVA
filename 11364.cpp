#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        int n;

        scanf("%d", &n);
        int min = 100, max = 0, temp;

        while(n--) {
            scanf("%d", &temp);

            if(min > temp) {
                min = temp;
            }

            if(max < temp) {
                max = temp;
            }
        }

        printf("%d\n", (max - min) << 1);
    }

    return 0;
}
