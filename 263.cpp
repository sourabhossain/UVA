#include <bits/stdc++.h>

using namespace std;

bool isSmaller(string first, string second) {
    int l = first.size(), ll = second.size();

    if(l < ll) {
        return 1;
    }

    if(l > ll) {
        return 0;
    }

    for(int i = 0; i < l; i++) {
        if(first[i] < second[i]) {
            return 1;
        } else {
            return 0;
        }
    }

    return 0;
}

string bigSubtraction(string first, string second) {
    if(isSmaller(first, second)) {
        swap(first, second);
    }

    string result = "";
    int l = first.size(), ll = second.size();
    int diff = l - ll, carry = 0;

    for(int i = ll - 1, sub; i >= 0; i--) {
        sub = (first[i + diff] - '0') - (second[i] - '0') - carry;


        if(sub < 0) {
            sub += 10;
            carry = 1;
        } else {
            carry = 0;
        }

        result += (sub + '0');
    }

    for(int i = diff - 1, sub; i >= 0; i--) {
        if(first[i] == '0' && carry) {
            result += '9';
        }

        sub = (first[i] - '0') - carry;

        if(i || sub) {
            result += (sub + '0');
        }

        carry = 0;
    }

    while(result.size() > 1 && result.back() == '0') {
        result.pop_back();
    }

    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    string a;

    while(cin >> a && a != "0") {
        cout << "Original number was " << a << "\n";
        string b = "", temp;
        int c = 0;
        map<string, bool> m;

        while(true) {
            sort(a.begin(), a.end());
            b = a;
            reverse(b.begin(), b.end());
            c++;
            temp = bigSubtraction(b, a);

            reverse(a.begin(), a.end());

            while(a.size() > 1 && a.back() == '0') {
                a.pop_back();
            }

            reverse(a.begin(), a.end());
            cout << b << " - " << a << " = " << temp << "\n";

            if(m.find(temp) != m.end()) {
                break;
            } else {
                m[temp] = true;
                a = temp;
            }
        }

        printf("Chain length %d\n\n", c);
    }

    return 0;
}
