#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    while(b) b ^= a ^= b ^= a %= b;
    return a;
}

int main()
{
    int T;
    string s;

    scanf("%d ", &T);

    while(T--) {
        getline(cin, s);
        stringstream ss(s);
        vector<int> v;
        int temp;

        while(ss >> temp) {
            v.push_back(temp);
        }

        int maximum = 1, length = v.size();

        for(int i = 0; i < length; i++) {
            for(int j = i + 1; j < length; j++) {
                temp = gcd(v[i], v[j]);

                if(maximum < temp) {
                    maximum = temp;
                }
            }
        }

        printf("%d\n", maximum);
    }

    return 0;
}
