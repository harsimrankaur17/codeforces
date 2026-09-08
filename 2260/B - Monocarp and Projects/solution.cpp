#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        long long x, y, k;
        cin >> x >> y >> k;
 
        long long answer = 0;
        long long d = y - x;
 
        for(long long i = 0; i < k && x + i <= d; i++) {
            answer += (y + i) % (x + i);
        }
 
        if(k > d - x + 1) {
            answer += (k - max(0LL, d - x + 1)) * d;
        }
 
        cout << answer << endl;
    }
}