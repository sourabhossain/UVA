#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    while(scanf("%d", &T) && T) {
        int n, temp;
        priority_queue <int, vector<int>, greater<int> > p;

        while(T--) {
            scanf("%d", &n);
            p.push(n);
        }

        n = temp = 0;

        while(p.size() > 1) {
            temp = p.top();
            p.pop();

            temp += p.top();
            p.pop();

            n += temp;
            p.push(temp);
        }

        printf("%d\n", n);
    }

    return 0;
}
