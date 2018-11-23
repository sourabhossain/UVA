#include <bits/stdc++.h>
#define SIZE 5001

using namespace std;

vector<string> ans(SIZE);

string bigAddition(string first, string second) {
	if(first.size() > second.size()) {
		swap(first, second);
	}

	string result = "";
    int firstLength = first.size(), secondLength = second.size();
    int carry = 0, difference = secondLength - firstLength;

    for(int i = firstLength - 1; i >= 0; i--) {
    	carry += (first[i] - '0') + (second[i + difference] - '0');
    	result += (carry % 10) + '0';
    	carry /= 10;
    }

    for(int i = difference - 1; i >= 0; i--) {
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

void solve() {
    ans[0] = "0";
    ans[1] = "1";

    for(int i = 2; i < SIZE; i++) {
        ans[i] = bigAddition(ans[i - 1], ans[i - 2]);
    }
}

int main()
{
    solve();
    int n;

    while(scanf("%d", &n) != EOF) {
        printf("The Fibonacci number for %d is %s\n", n, ans[n].c_str());
    }

    return 0;
}
