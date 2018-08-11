#include <bits/stdc++.h>

using namespace std;

string add(string a, string b) {
    if(a.size() > b.size()) {
        swap(a, b);
    }

    int remainder = 0, aLength = a.size(), bLength = b.size();
    string result;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    for(int i = aLength; i < bLength; i++) {
        a += "0";
    }

    for(int i = 0, sum; i < bLength; i++) {
        sum = (a[i] - '0') + (b[i] - '0') + remainder;
        remainder = sum / 10;
        result += (sum % 10) + '0';
    }

    if(remainder > 0) {
        result += (remainder % 10) + '0';
    }

    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    string n, sum = "0";

    while(cin >> n && n != "0") {
        sum = add(sum, n);
    }

    printf("%s\n", sum.c_str());

    return 0;
}
