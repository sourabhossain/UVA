#include <bits/stdc++.h>

using namespace std;

int hexadecimalToDecimal(string number)
{
	int length = number.size(), power = length - 1, i;
	int total;

	for(i = total = 0; i < length; i++) {
        switch(number[i]) {
            case 'A':
            case 'a':
                total += 10 * pow(16, power--);
                break;

            case 'B':
            case 'b':
                total += 11 * pow(16, power--);
                break;

            case 'C':
            case 'c':
                total += 12 * pow(16, power--);
                break;

            case 'D':
            case 'd':
                total += 13 * pow(16, power--);
                break;

            case 'E':
            case 'e':
                total += 14 * pow(16, power--);
                break;

            case 'F':
            case 'f':
                total += 15 * pow(16, power--);
                break;

            default:
                total += (number[i] - '0') * pow(16, power--);
                break;
        }
	}

    return total;
}

string DecimalToBinary(int n) {
    string ans = "0000000000000";
    int i = 12;

    while(n) {
        ans[i] += (n & 1);
        n >>= 1;
        i--;
    }

    return ans;
}

int main()
{
    int T;
    string a, b, c;

    scanf("%d", &T);

    while(T--) {
        cin >> a >> b >> c;
        int first = hexadecimalToDecimal(a), second = hexadecimalToDecimal(c);

        if(b == "+") {
            printf("%s + %s = %d\n", DecimalToBinary(first).c_str(), DecimalToBinary(second).c_str(), first + second);
        } else {
            printf("%s - %s = %d\n", DecimalToBinary(first).c_str(), DecimalToBinary(second).c_str(), first - second);
        }
    }

    return 0;
}
