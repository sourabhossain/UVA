#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;

    while(getline(cin, a) && getline(cin, b)) {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for(int i=0, j=0; a[i] && b[j];) {
            if(a[i] == b[j]) {
                putchar(a[i]);
                i++, j++;
            } else {
                (a[i] > b[j])? j++ : i++;
            }
        }
        putchar('\n');
    }

    return 0;
}
