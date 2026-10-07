#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include "./template.cpp"
#endif

using namespace std;

void solve() {
    int x,y,r;
    cin >> x >> y >> r;
    for(int i = x-r; i <= x+r; i++) {
        for(int j = y-r; j <= y+r; j++) {
            if((i-x)*(i-x) + (j-y)*(j-y) == r*r) {
                cout << i << " " << j << "\n";
                return;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    #ifndef ONLINE_JUDGE
        freopen("./input.txt", "r", stdin);
        freopen("./output.txt", "w", stdout);
    #endif

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}