#include <bits/stdc++.h>

using namespace std;
bool ck;

bool isSmaller(string first, string second) {
	int firstLength = first.size(), secondLength = second.size();

	if(firstLength < secondLength) {
		return true;
	}

	if(firstLength > secondLength) {
		return false;
	}

	for(int i = 0; i < firstLength; i++) {
		if(first[i] < second[i]) {
			return true;
		} else if(first[i] > second[i]) {
			return false;
		}
	}

    return false;
}

string bigSubtraction(string first, string second) {
	if(isSmaller(first, second)) {
		swap(first, second);
		ck = true;
	}

	string result = "";
	int firstLength = first.size(), secondLength = second.size();
	int difference = firstLength - secondLength, carry = 0;

	for(int i = secondLength - 1; i >= 0; i--) {
		int sub = (first[i + difference] - '0') - (second[i] - '0') - carry;

		if(sub < 0) {
			sub += 10;
			carry = 1;
		} else {
			carry = 0;
		}

		result += (sub + '0');
	}

	for(int i = difference - 1; i >= 0; i--) {
		if(first[i] == '0' && carry) {
			result += '9';
			continue;
		}

		int sub = (first[i] - '0') - carry;

		if(i || sub) {
			result += (sub + '0');
		}

		carry = 0;
	}

    while(result.size() > 1 && result[result.size() - 1] == '0') {
        result.pop_back();
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
        ans = bigSubtraction(a, b);

        if(ck) {
            printf("-%s\n", ans.c_str());
            ck = false;
        } else {
            printf("%s\n", ans.c_str());
        }
    }

    return 0;
}
