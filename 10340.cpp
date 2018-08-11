#include <bits/stdc++.h>

int main()
{
    char a[100001], b[100001];

    while(scanf("%s%s", a, b) != EOF) {
        int j = 0;

        for(int i = 0; b[i]; i++) {
            if(a[j] == b[i]) {
               j++;

               if(a[j] == '\0') {
                   printf("Yes\n");
                   break;
               }
            }
        }

        if(a[j]) {
            printf("No\n");
        }
    }

    return 0;
}
