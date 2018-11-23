#include <bits/stdc++.h>

using namespace std;

long long palindrome_number(long long n) {
    if(n < 109) {
        return n - 9;
    } else if(n < 1099) {
        return n - 99;
    } else if(n < 10999) {
        return n - 999;
    } else if(n < 109999) {
        return n - 9999;
    } else if(n < 1099999) {
        return n - 99999;
    } else if(n < 10999999) {
        return n - 999999;
    } else if(n < 109999999) {
        return n - 9999999;
    } else if(n < 1099999999) {
        return n - 99999999;
    } else {
        return n - 999999999;
    }
}

void palindrome(long long n, bool f) {
    n = palindrome_number(n);
    printf("%lld", n);

    if(f == false) {
        n /= 10;
    }

    while(n > 0) {
        printf("%d", n % 10);
        n /= 10;
    }
    putchar('\n');
}

bool boolean(long long n) {
    if(n < 19) {
        return true;
    } else if(n < 109) {
        return false;
    } else if(n < 199) {
        return true;
    } else if(n < 1099) {
        return false;
    } else if(n < 1999) {
        return true;
    } else if(n < 10999) {
        return false;
    } else if(n < 19999) {
        return true;
    } else if(n < 109999) {
        return false;
    } else if(n < 199999) {
        return true;
    } else if(n < 1099999) {
        return false;
    } else if(n < 1999999) {
        return true;
    } else if(n < 10999999) {
        return false;
    } else if(n < 19999999) {
        return true;
    } else if(n < 109999999) {
        return false;
    } else if(n < 199999999) {
        return true;
    } else if(n < 1099999999) {
        return false;
    } else if(n < 1999999999) {
        return true;
    } else {
        return false;
    }
}

int main()
{
    long long n;

    while(scanf("%lld", &n) && n) {
        if(n < 10) {
            printf("%lld\n", n);
        } else {
            palindrome(n, boolean(n));
        }
    }

    return 0;
}
