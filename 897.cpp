#include <bits/stdc++.h>

using namespace std;

vector<int> pa = {2, 3, 5, 7, 11, 13, 17, 31, 37, 71, 73, 79, 97, 113, 131, 199, 311, 337, 373, 733, 919, 991};

int main()
{
    int n;

    while(scanf("%d", &n) && n) {
        vector<int>::iterator it = upper_bound(pa.begin(), pa.end(), n);

        if(it != pa.end()) {
            int temp = *it;

            if(to_string(temp).size() == to_string(n).size()) {
                printf("%d\n", temp);
            } else {
                puts("0");
            }
        } else {
            puts("0");
        }
    }

    return 0;
}
