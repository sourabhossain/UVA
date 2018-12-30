#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(int argc, char const *argv[])
{
	int n;

	while(scanf("%d", &n) != EOF) {
		if(n == 2) {
			puts("00\n01\n81");
		} else if(n == 4) {
			puts("0000\n0001\n2025\n3025\n9801");
		} else if(n == 6) {
			puts("000000\n000001\n088209\n494209\n998001");
		} else if(n == 8) {
			puts("00000000\n00000001\n04941729\n07441984\n24502500\n25502500\n52881984\n60481729\n99980001");
		} else {
			break;
		}
	}

	return 0;
}