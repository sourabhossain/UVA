#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(int argc, char const *argv[])
{
	int n, px, py, x, y;

	while(scanf("%d", &n) && n) {
		scanf("%d%d", &px, &py);

		while(n--) {
			scanf("%d%d", &x, &y);

			if(x == px || py == y) {
				puts("divisa");
			} else if(x <= px && py >= y) {
				puts("SO");
			} else if(x >= px && py <= y) {
				puts("NE");
			} else if(x >= px && py >= y) {
				puts("SE");
			} else {
				puts("NO");
			}
		}
	}

	return 0;
}