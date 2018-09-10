#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;

    while(scanf("%d%d%d", &a, &b, &c) != EOF) {
        if(a == b) {
            if(b == c) {
                puts("*");
            } else {
                puts("C");
            }
        } else if(a == c) {
            if(b == c) {
                puts("*");
            } else {
                puts("B");
            }
        } else {
            puts("A");
        }
    }

    return 0;
}
