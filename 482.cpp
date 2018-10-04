#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    string line, data;

    scanf("%d", &T);
    getchar();

    while(T--) {
        getchar();
        getline(cin, line);
        getline(cin, data);

        vector<int> index;
        stringstream ss(line);
        int temp;

        while(ss >> temp) {
            index.push_back(temp);
        }

        int length = index.size();
        vector<string> ans(length);
        stringstream s(data);
        temp = 0;

        while(s >> ans[index[temp++] - 1]);

        for(temp = 0; temp < length; temp++) {
            cout << ans[temp] << "\n";
        }

        if(T) {
            putchar('\n');
        }
    }

    return 0;
}
