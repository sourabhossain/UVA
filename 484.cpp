#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    vector <int> v;
    vector <int>::iterator it;
    map <int, int> m;

    while(scanf("%d", &n) == 1) {
        m[n]++;

        for(it = v.begin(); it != v.end(); it++) {
            if(*it == n) {
                break;
            }
        }

        if(it ==  v.end()) {
            v.push_back(n);
        }
    }

    n = m.size();
    for(int i = 0; i < n; i++) {
        cout << v[i] << " " << m[v[i]] << endl;
    }

    return 0;
}
