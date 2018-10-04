#include <bits/stdc++.h>
#define SIZE 101

using namespace std;

vector<map<char, int> > result(SIZE);

map<char, int> numberToRomanNumber(int number) {
    map<char, int> c = {{'i', 0}, {'v', 0}, {'x', 0}, {'l', 0}, {'c', 0}};

    while(number > 0) {
        if(number >= 100) {
            c['c']++;
            number -= 100;
        } else if(number >= 90) {
            c['x']++, c['c']++;
            number -= 90;
        } else if(number >= 50) {
            c['l']++;
            number -= 50;
        } else if(number >= 40) {
            c['x']++, c['l']++;
            number -= 40;
        } else if(number >= 10) {
            c['x']++;
            number -= 10;
        } else if(number >= 9) {
            c['i']++, c['x']++;
            number -= 9;
        } else if(number >= 5) {
            c['v']++;
            number -= 5;
        } else if(number >= 4) {
            c['i']++, c['v']++;
            number -= 4;
        } else {
            c['i']++;
            number -= 1;
        }
    }

    return c;
}

int main()
{
    result[0] = {{'i', 0}, {'v', 0}, {'x', 0}, {'l', 0}, {'c', 0}};

    for(int i = 1; i < SIZE; i++) {
        map<char, int> m = numberToRomanNumber(i);

        result[i]['i'] = result[i - 1]['i'] + m['i'];
        result[i]['v'] = result[i - 1]['v'] + m['v'];
        result[i]['x'] = result[i - 1]['x'] + m['x'];
        result[i]['l'] = result[i - 1]['l'] + m['l'];
        result[i]['c'] = result[i - 1]['c'] + m['c'];
    }

    int n;

    while(scanf("%d", &n) && n) {
        printf("%d: %d i, %d v, %d x, %d l, %d c\n", n, result[n]['i'], result[n]['v'], result[n]['x'], result[n]['l'], result[n]['c']);
    }

    return 0;
}