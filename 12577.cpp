#include <bits/stdc++.h>

int main()
{
    int i = 1;
    char s[10001];

    while(scanf("%s", s)) {
        if(s[0] == '*') {
            break;
        }

        if(!strcmp(s, "Hajj")) {
            printf("Case %d: Hajj-e-Akbar\n", i++);
        }
        else {
            printf("Case %d: Hajj-e-Asghar\n", i++);
        }
    }

    return 0;
}
