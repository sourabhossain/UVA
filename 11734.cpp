#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    string a, b;

    scanf("%d", &T);
    getchar();

    for(int i = 1; i <= T; i++) {
        cin.clear();
        getline(cin, a);
        cin.clear();
        getline(cin, b);

        if(a == b) {
            printf("Case %d: Yes\n", i);
        } else {
            int l = a.size(), ll = b.size(), j = 0, k = 0;
            bool ck = true;

            while(j < l && k < ll) {
                if(a[j] == ' ') {
                    j++;
                } else if(b[k] == ' ') {
                    k++;
                } else if(a[j] == b[k]) {
                    j++, k++;
                } else {
                    ck = false;
                    break;
                }
            }

            while(a[j] == ' ') {
                j++;
            }

            while(b[k] == ' ') {
                k++;
            }

            if(ck && j == l && k == ll) {
                printf("Case %d: Output Format Error\n", i);
            } else {
                printf("Case %d: Wrong Answer\n", i);
            }
        }
    }

    return 0;
}
