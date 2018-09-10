#include <bits/stdc++.h>

using namespace std;

string bigAddition(string first, string second) {
    if(first.size() > second.size()) {
        swap(first, second);
    }

    string result = "";
    int l = first.size(), ll = second.size();
    int carry = 0, diff = ll - l;

    for(int i = l - 1; i >= 0; i--) {
        carry += (first[i] - '0') + (second[i + diff] - '0');
        result += (carry % 10) + '0';
        carry /= 10;
    }

    for(int i = diff - 1; i >= 0; i--) {
        carry += (second[i] - '0');
        result += (carry % 10) + '0';
        carry /= 10;
    }

    if(carry) {
        result += (carry + '0');
    }

    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    int T;
    string a, b, ans;

    scanf("%d", &T);

    while(T--) {
        cin >> a >> b;

        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        ans = bigAddition(a, b);

        while(ans[ans.size() - 1] == '0') {
            ans.pop_back();
        }

        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }

    return 0;
}
