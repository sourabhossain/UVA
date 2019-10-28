#include "bits/stdc++.h"

using namespace std;

int main(int argc, char const *argv[])
{
	string str;

	while(cin >> str, str != "#") {
		if (next_permutation(str.begin(), str.end())) {
			printf("%s\n", str.c_str());
		} else {
			puts("No Successor");
		}
	}

	return 0;
}
