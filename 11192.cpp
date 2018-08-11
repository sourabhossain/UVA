#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    while(scanf("%d", &n) && n) {
        string s;
        cin >> s;
        int length = s.size();
        int l = length / n;

        for(int i = 0; i < length; i += l) {
            int temp = i + l;

            for(int j = i; j < temp; j++) {
                swap(s[j], s[--temp]);
            }
        }
        printf("%s\n", s.c_str());
    }

    return 0;
}
