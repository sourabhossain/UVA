#include <bits/stdc++.h>

using namespace std;

bool vowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main()
{
    char f, c;

    while(c = getchar()) {
        if(c == EOF) {
            return 0;
        }

        if(isalpha(c)) {
            if(vowel(c)) {
                putchar(c);

                while(c = getchar()) {
                    if(isalpha(c)) {
                        putchar(c);
                    } else {
                        printf("ay%c", c);
                        break;
                    }
                }
            } else {
                f = c;

                while(c = getchar()) {
                    if(isalpha(c)) {
                        putchar(c);
                    } else {
                        printf("%cay%c", f, c);
                        break;
                    }
                }
            }
        } else {
            putchar(c);
        }
    }

    return 0;
}
