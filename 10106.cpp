#include <bits/stdc++.h>

using namespace std;

string bigAddition(string x, string y) {
    if(x.size() > y.size()) {
        swap(x, y);
    }

    int length = y.size();

    for(int i = x.size(); i < length; i++) {
        x = "0" + x;
    }

    string result = "";
    int carry = 0;

    for(int i = length - 1; i >= 0; i--) {
        carry = carry + (x[i] - '0') + (y[i] - '0');
        result += (carry % 10) + '0';
        carry /= 10;
    }

    if(carry > 0) {
       result += (carry + '0');
    }

    reverse(result.begin(), result.end());
    return result;
}

string bigMultiplication(string x, string y) {
    if(x == "0" || y == "0") {
        return "0";
    }

    string result = "0";
    int l = y.size() - 1, ll = x.size() - 1;

    for(int i = l; i >= 0; i--) {
        int carry = 0, m = y[i] - '0';
        string temp = "";

        for(int j = l; j > i; j--) {
            temp += "0";
        }

        for(int j = ll; j >= 0; j--) {
            carry = carry + ((x[j] - '0') * m);
            temp += (carry % 10) + '0';
            carry /= 10;
        }

        if(carry > 0) {
            temp += (carry + '0');
        }

        reverse(temp.begin(), temp.end());
        result = bigAddition(result, temp); // go to bigAddition function
    }

    return result;
}

int main()
{
    string x, y;

    while(cin >> x >> y) {
        cout << bigMultiplication(x, y) << endl;
    }

    return 0;
}
