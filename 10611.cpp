#include <bits/stdc++.h>

using namespace std;

int upperBound(vector<int>& data, int target) {
    int left = 0, right = data.size() - 1, mid, index = -1;

    while(left <= right) {
    	mid = left + (right - left) / 2;

        if(data[mid] == target) {
            left = mid + 1;
        } else if(data[mid] < target) {
    		left = mid + 1;
    	} else {
    	    index = mid;
    		right = mid - 1;
    	}
    }

    return index;
}

int lowerBound(vector<int>& data, int target) {
    int left = 0, right = data.size() - 1, mid, index = -1;

    while(left <= right) {
    	mid = left + (right - left) / 2;

        if(data[mid] == target) {
            right = mid - 1;
        } else if(data[mid] < target) {
            index = mid;
    		left = mid + 1;
    	} else {
    		right = mid - 1;
    	}
    }

    return index;
}

int main()
{
    int n;

    scanf("%d", &n);
    vector<int> heigth(n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &heigth[i]);
    }

    int q, query;

    scanf("%d", &q);

    while(q--) {
        scanf("%d", &query);
        int lower = lowerBound(heigth, query), upper = upperBound(heigth, query);

        if(lower == -1 && upper == -1) {
            puts("X X");
        } else if(lower == -1 && upper != -1) {
            printf("X %d\n", heigth[upper]);
        } else if(lower != -1 && upper == -1) {
            printf("%d X\n", heigth[lower]);
        } else {
            printf("%d %d\n", heigth[lower], heigth[upper]);
        }
    }

    return 0;
}
