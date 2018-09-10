#include <bits/stdc++.h>

using namespace std;

string bigMultiplication(string first, string second) {
	int firstLength = first.size(), secondLength = second.size();

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

vector<string> ans = {"1", "1"};

int main()
{
    for(int i = 2; i <= 366; i++) {
        ans.push_back(bigMultiplication(ans[i - 1], to_string(i)));
    }

    int n;

    while(scanf("%d", &n) && n) {
        int output[10] = {0};

        for(int i = 0; ans[n][i]; i++) {
            output[ans[n][i] - '0']++;
        }

        printf("%d! --\n", n);
        for(int i = 0; i < 5; i++) {
            if(i == 0) {
                printf("   ");
            } else {
                printf("    ");
            }

            printf("(%d)%5d", i, output[i]);
        }

        putchar('\n');

        for(int i = 5; i < 10; i++) {
            if(i == 5) {
                printf("   ");
            } else {
                printf("    ");
            }

            printf("(%d)%5d", i, output[i]);
        }
        putchar('\n');
    }

    return 0;
}
