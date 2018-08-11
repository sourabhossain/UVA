#include <bits/stdc++.h>

int main()
{
    int n;

    while(scanf("%d", &n)) {
        if(n == 0) {
            break;
        }

        char s[15];
        int i = 0, c = 0;

        while(n) {
           s[i++] =  (n & 1) + '0';
           n >>= 1;

           if(s[i - 1] & 1) {
                ++c;
           }
        }
        s[i] = '\0';

        int len = strlen(s);
        char ch;

        for(i = 0; i < len / 2; i++) {
            ch = s[i];
            s[i] = s[len - (i + 1)];
            s[len - (i + 1)] = ch;
        }

        printf("The parity of %s is %d (mod 2).\n", s, c);
    }

    return 0;
}
