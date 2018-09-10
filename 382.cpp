#include <bits/stdc++.h>

using namespace std;

int properNODSum(int n) {
    set<int> nod;
    int root = sqrt(n);

    nod.insert(1);

    for(int i = 2; i <= root; i++) {
        if(n % i == 0) {
            nod.insert(i);
            nod.insert(n / i);
        }
    }

    int sum = 0;

    for(set<int>::iterator it = nod.begin(); it != nod.end(); it++) {
        sum += *it;
    }

    return sum;
}

int main()
{
    int n;

    puts("PERFECTION OUTPUT");

    while(scanf("%d", &n) && n) {
        int nod = properNODSum(n);

        if(n > 1 && nod == n) {
            printf("%5d  PERFECT\n", n);
        } else if(nod > n) {
            printf("%5d  ABUNDANT\n", n);
        } else {
            printf("%5d  DEFICIENT\n", n);
        }
    }

    puts("END OF OUTPUT");

    return 0;
}
