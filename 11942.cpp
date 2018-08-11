#include <bits/stdc++.h>
#define SIZE 10

using namespace std;

int main()
{
    int T, arr[SIZE];

    scanf("%d", &T);

    puts("Lumberjacks:");
    while(T--) {
        for(int i = 0; i < SIZE; i++) {
            scanf("%d", &arr[i]);
        }

        bool ck = true;

        if(arr[0] > arr[1]) {
            for(int i = 2; i < SIZE; i++) {
                if(arr[i - 1] < arr[i]) {
                    puts("Unordered");
                    ck = false;
                    break;
                }
            }

            if(ck) {
                puts("Ordered");
            }
        } else {
            for(int i = 2; i < SIZE; i++) {
                if(arr[i - 1] > arr[i]) {
                    puts("Unordered");
                    ck = false;
                    break;
                }
            }

            if(ck) {
                puts("Ordered");
            }
        }
    }

    return 0;
}
