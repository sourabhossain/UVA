#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main()
{
    //freopen("input", "r", stdin);
    int T;
    scanf("%d", &T);

    for(int i = 1; i <= T; i++) {
        int n, t;
        string str;
        scanf("%d", &n);
        int data[n][n], transpose[n][n], a, b;

        for(int j = 0; j < n; j++) {
            cin >> str;

            for(int k = 0; k < n; k++) {
                data[j][k] = str[k] - '0';
            }
        }

        scanf("%d", &t);

        while(t--) {
            cin >> str;

            if(str == "row") {
                scanf("%d%d", &a, &b);

                for(int j = 0; j < n; j++) {
                    swap(data[a - 1][j], data[b - 1][j]);
                }
            } else if(str == "col") {
                scanf("%d%d", &a, &b);

                for(int j = 0; j < n; j++) {
                    swap(data[j][a - 1], data[j][b - 1]);
                }
            } else if(str == "inc") {
                for(int j = 0; j < n; j++) {
                    for(int k = 0; k < n; k++) {
                        data[j][k] = (data[j][k] + 1) % 10;
                    }
                }
            } else if(str == "dec") {
                for(int j = 0; j < n; j++) {
                    for(int k = 0; k < n; k++) {
                        data[j][k] = (data[j][k] + 9) % 10;

                        if(data[j][k] < 0) {
                            data[j][k] = 9;
                        }
                    }
                }
            } else if(str == "transpose") {
                for(int j = 0; j < n; j++) {
                    for(int k = 0; k < n; k++) {
                        transpose[j][k] = data[k][j];
                    }
                }

                for(int j = 0; j < n; j++) {
                    for(int k = 0; k < n; k++) {
                        data[j][k] = transpose[j][k];
                    }
                }
            }
        }

        printf("Case #%d\n", i);
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                printf("%d", data[j][k]);
            }
            putchar('\n');
        }
        putchar('\n');
    }


    return 0;
}