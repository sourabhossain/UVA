#include <bits/stdc++.h>

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        int a, b;
        scanf("%d%d", &a, &b);
        while(b--) {
            int i;
            for(i = 1; i <= a; i++) {
                for(int j = 0; j < i; j++) {
                    printf("%d", i);
                }
                putchar('\n');
            }

            for(i -= 2; i > 0; i--) {
                for(int j = 0; j < i; j++) {
                    printf("%d", i);
                }
                putchar('\n');
            }

            if(b) {
                putchar('\n');
            }
        }

        if(T) {
            putchar('\n');
        }
    }

    return 0;
}
