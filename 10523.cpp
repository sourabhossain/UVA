#include <bits/stdc++.h>

using namespace std;

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

string bigMultiplication(string first, string second) {
	int firstLength = first.size(), secondLength = second.size();

	if(firstLength == 0 || secondLength == 0) {
		return "0";
	}

	vector<int> result(firstLength + secondLength, 0);
	int k = 0;

	for(int i = firstLength - 1; i >= 0; i--) {
		int carry = 0, l = 0;

		for(int j = secondLength - 1; j >= 0; j--) {
			carry += (first[i] - '0') * (second[j] - '0') + result[k + l];
            result[k + l] = carry % 10;
			carry /= 10;
			l++;
		}

		if(carry) {
			result[k + l] += carry;
		}

		k++;
	}

	int i = result.size() - 1;
	while(i >= 0 && result[i] == 0) {
		i--;
	}

	string ans = "";
	while(i >= 0) {
		ans += result[i--] + '0';
	}

	return ans;
}

int main()
{
    string a;
    int n;

    while(cin >> n >> a) {
        string ans = "0", ai = a;

        for(int i = 1; i <= n; i++) {
            ans = bigAddition(bigMultiplication(to_string(i), ai), ans);
            ai = bigMultiplication(ai, a);
        }

        cout << ans << "\n";
    }

    return 0;
}
