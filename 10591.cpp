#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    for(int i = 1, n; i <= T; i++) {
        scanf("%d", &n);
        int sum = 0, temp = n, p;

        while(sum != 1 && sum != 4) {
            sum = 0;

            while(temp) {
                p = temp % 10;
                sum += (p * p);
                temp /= 10;
            }

            temp = sum;
        }

        if(sum == 1) {
            printf("Case #%d: %d is a Happy number.\n", i, n);
        } else {
            printf("Case #%d: %d is an Unhappy number.\n", i, n);
        }
    }

    return 0;
}
