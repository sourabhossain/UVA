#include <bits/stdc++.h>

int main()
{
    int T;

    scanf("%d", &T);
    char s[10001];

    while(T--) {
        scanf("%s", s);
        int len = strlen(s);

        if(s[len - 2] == '3' && s[len - 1] == '5') {
            puts("-");
        }
        else if(s[0] == '9' && s[len - 1] == '4') {
            puts("*");
        }
        else if(s[0] == '1' && s[1] == '9' && s[2] == '0') {
            puts("?");
        }
        else {
            puts("+");
        }
    }

    return 0;
}
