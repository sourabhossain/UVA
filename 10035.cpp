#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a, b;

    while(scanf("%lld%lld", &a, &b) && a || b) {
        int result = 0, carry = 0, sum;

        while(a && b) {
            sum = (a % 10) + (b % 10) + carry;
            carry = sum / 10;
            a /= 10;
            b /= 10;

            if(carry) {
                result++;
            }
        }

        while(carry && a) {
            sum = (a % 10) + carry;
            carry = sum / 10;
            a /= 10;

            if(carry) {
                result++;
            }
        }

        while(carry && b) {
            sum = (b % 10) + carry;
            carry = sum / 10;
            b /= 10;

            if(carry) {
                result++;
            }
        }

        if(result) {
            if(result == 1) {
                printf("%d carry operation.\n", result);
            } else {
                printf("%d carry operations.\n", result);
            }
        } else {
            puts("No carry operation.");
        }
    }

    return 0;
}
