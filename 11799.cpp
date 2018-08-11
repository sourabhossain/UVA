#include <bits/stdc++.h>

int main()
{
    int T;
    scanf("%d", &T);

    for(int i = 1; i <= T; i++) {
        int n;
        scanf("%d", &n);

        int c = 0, num;
        while(n--) {
            scanf("%d", &num);

            if(c < num) {
                c = num;
            }
        }

        printf("Case %d: %d\n", i, c);
    }

    return 0;
}
