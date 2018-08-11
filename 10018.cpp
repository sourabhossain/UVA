#include <bits/stdc++.h>

using namespace std;

bool palindrome(string str) {
    int length = str.size();

    for(int i = 0; i < length; i++) {
        if(str[i] != str[--length]) {
            return false;
        }
    }

    return true;
}

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        long long n;
        int count = 1;

        scanf("%lld", &n);

        string str = to_string(n);

        while(true) {
            reverse(str.begin(), str.end());
            n += stoi(str);
            str = to_string(n);

            if(palindrome(str)) {
                printf("%d %s\n", count, str.c_str());
                break;
            } else {
                count++;
            }
        }
    }

    return 0;
}
