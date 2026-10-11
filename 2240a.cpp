#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include "./template.cpp"
#endif

using namespace std;

void solve() {
    int n,k; cin >> n >> k;
    if(n <= k){
        cout << n << "\n";
        return;
    }
    int cnt = 0;
    int temp;
    while(n > 0){
        temp = (int)(log2(n/k + 1));
        cnt+=k*temp;
        n-=(k*(1<<temp) - k);
    }
    cout << cnt << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

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