/*
 *  Author: Arpit Bhayani
 *  http://arpitbbhayani.github.io
 */
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <climits>
#include <deque>
#include <iostream>
#include <list>
#include <limits>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>

#define ll long long

#define MIN(a, b) a < b ? a : b

using namespace std;

int main(int argc, char *argv[]) {
    int t;
    scanf("%d", &t);

    while( t-- ) {
        ll int n, m, k, answer;
        scanf("%lld%lld%lld", &n, &m, &k);

        answer = abs(n-m);
        while(k) {
            k--;
            if(n < m) {
                n++;
            }
            else if(n > m) {
                m++;
            }
            answer = MIN(answer, abs(n-m));
        }

        printf("%lld\n", answer);
    }
    return 0;
}
