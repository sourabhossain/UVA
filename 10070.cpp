#include <bits/stdc++.h>

using namespace std;

bool mod(string s, int n) {
    int r = 0;

    for(int i = 0; s[i]; i++) {
        r = (r * 10 + (s[i] - '0')) % n;
    }

    return r == 0;
}

int main()
{
    string n;
    bool b = false;

    while(cin >> n && !cin.eof()) {
        if(b) {
            putchar('\n');
        }

        b = true;
        bool a = mod(n, 4), b = mod(n, 100), c = mod(n, 400), d = mod(n, 15), e = mod(n, 55);
        bool ck = true, temp = false;

        if(c == true || a == true && b == false) {
            puts("This is leap year.");
            ck = false;
            temp = true;
        }

        if(d == true) {
            puts("This is huluculu festival year.");
            ck = false;
        }

        if(e == true && temp) {
            puts("This is bulukulu festival year.");
            ck = false;
        }

        if(ck) {
            puts("This is an ordinary year.");
        }
    }

    return 0;
}
