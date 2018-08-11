#include <bits/stdc++.h>

int main()
{
    int T, Total = 0;

    scanf("%d", &T);

    while(T--) {
        char s[11];
        int n;

        scanf("%s", s);

        if(!strcmp(s, "donate")) {
            int n;
            scanf("%d", &n);
            Total += n;
        }
        else {
            printf("%d\n", Total);
        }
    }

    return 0;
}
