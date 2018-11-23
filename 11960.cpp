#include <bits/stdc++.h>
#define SIZE 1000001

using namespace std;

vector<int> divisors(SIZE, 2), result(SIZE);

void Divisors() {
	for(int i = 2; i < SIZE; i++) {
		for(int j = i << 1; j < SIZE; j += i) {
			divisors[j]++;
		}
	}

	result[1] = 1;

	for(int i = 2; i < SIZE; i++) {
        if(divisors[i] >= divisors[result[i - 1]]) {
            result[i] = i;
        } else {
            result[i] = result[i - 1];
        }
	}
}

int main()
{
	Divisors();
    int T, n;

    scanf("%d", &T);

    while(T--) {
        scanf("%d", &n);
        printf("%d\n", result[n]);
    }

	return 0;
}
