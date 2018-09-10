#include <bits/stdc++.h>

using namespace std;

string decimalToBinary(int n) {
    if(n == 0) {
    	return "0";
    }

    string binary = "";

    while(n) {
        binary = to_string(n & 1) + binary;
        n >>= 1;
    }

    return binary;
}

int binaryToDecimal(string number) {
	int length = number.size(), base = 0, decimal = 0;

	while(--length >= 0) {
	    decimal += (number[length] - '0') << base++;
	}

    return decimal;
}

int main()
{
    int n;

    while(scanf("%d", &n) && n) {
        string a = "", b = "", number = decimalToBinary(n);
        bool ck = true;

        for(int i = number.size() - 1; i >= 0; i--) {
            if(ck && number[i] == '1') {
                a = "1" + a;
                b = "0" + b;
                ck = false;
            } else if(number[i] == '1') {
                a = "0" + a;
                b = "1" + b;
                ck = true;
            } else {
                a = "0" + a;
                b = "0" + b;
            }
        }

        printf("%d %d\n", binaryToDecimal(a), binaryToDecimal(b));
    }

    return 0;
}
