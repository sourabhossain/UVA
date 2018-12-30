#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(int argc, char const *argv[])
{
	int T, n;
	double v;
	char c;
	string s;

	scanf("%d", &T);

	while(T--) {
		map<char, double> m;

		scanf("%d", &n);

		while(n--) {
			cin >> c >> v;
			m[c] = v;
		}

		scanf("%d", &n);
		cin.ignore();
		v = 0.0;

		while(n--) {
			getline(cin, s);

			for(int i = 0, length = s.size(); i < length; i++) {
				if(m.find(s[i]) != m.end()) {
					v += m[s[i]];
				}
			}
		}

		printf("%0.2lf$\n", v / 100.0);
	}

	return 0;
}