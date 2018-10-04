#include <bits/stdc++.h>

using namespace std;

long long skewBinaryToDecimal(string number) {
	int base = 1, length = number.size();
	long long decimal = 0;

	while(--length >= 0) {
        decimal += ((number[length] - '0') * ((1 << base) - 1));
        base++;
	}

    return decimal;
}

int main()
{
    string n;

    while(cin >> n && n != "0") {
        cout << skewBinaryToDecimal(n) << endl;
    }

    return  0;
}
