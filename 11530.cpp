#include <bits/stdc++.h>

int main()
{
    int c[26], i = 0;

	while(i < 17) {
		c[i++] = 1;
		c[i++] = 2;
		c[i++] = 3;
	}

	c[i++] = 4;
	c[i++] = 1;
	c[i++] = 2;
	c[i++] = 3;
	c[i++] = 1;
	c[i++] = 2;
	c[i++] = 3;
	c[i++] = 4;

    int T;
    scanf("%d", &T);
    getchar();

    for(i = 1; i <= T; i++) {
        char s[101];
        gets(s);

        int total = 0;
        for(int j = 0; s[j]; j++) {
            if(s[j] == ' ') {
                ++total;
            }
            else if(s[j] >= 'a' && s[j] <= 'z') {
                total += c[s[j] - 'a'];
            }
        }

        printf("Case #%d: %d\n", i, total);
    }

    return 0;
}
