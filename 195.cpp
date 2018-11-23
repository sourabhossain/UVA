#include <bits/stdc++.h>

using namespace std;

bool compare(char a, char b) {
    char l = tolower(a), ll = tolower(b);
    return (l == ll)? a < b : l < ll;
}

int main()
{
    int T;
    string str;

    scanf("%d", &T);

    while(T--) {
        cin >> str;
        sort(str.begin(), str.end(), compare);

        do {
            printf("%s\n", str.c_str());
        } while(next_permutation(str.begin(), str.end(), compare));
    }

    return 0;
}
