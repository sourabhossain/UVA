#include <bits/stdc++.h>

using namespace std;

int love(string s) {
    int sum = 0;

    for(int i = 0; s[i]; i++) {
        s[i] = tolower(s[i]);

        if(s[i] >= 'a' && s[i] <= 'z') {
            sum += (s[i] - 'a' + 1);
        }
    }

    while(sum > 9) {
        int temp = 0;

        while(sum) {
            temp += (sum % 10);
            sum /= 10;
        }

        sum = temp;
    }

    return sum;
}

int main()
{
    string a, b;

    while(getline(cin, a) && !cin.eof()) {
        getline(cin, b);
        int x = love(a), y = love(b);

        if(x > y) {
            swap(x, y);
        }

        printf("%0.2f %%\n", (100.0 * x) / y);
    }

    return 0;
}
