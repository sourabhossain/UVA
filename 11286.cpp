#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    while(scanf("%d", &n) && n) {
        int data[5];
        map<string, int> m;

        while(n--) {
            scanf("%d%d%d%d%d", &data[0], &data[1], &data[2], &data[3], &data[4]);
            sort(data, data + 5);
            m[to_string(data[0]) + to_string(data[1]) + to_string(data[2]) + to_string(data[3]) + to_string(data[4])]++;
        }

        int maximum = 0, result = 0;

        for(auto it = m.begin(); it != m.end(); it++) {
            if(it->second > maximum) {
                maximum = it->second;
                result = 0;
            }

            if(it->second == maximum) {
                result += maximum;
            }
        }

        printf("%d\n", result);
    }

    return 0;
}
