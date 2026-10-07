#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include "./template.cpp"
#endif

using namespace std;

void solve() {
    map<int,set<int>> mp;
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n - 4; i++) {
        mp[a[i] + a[i + 2] - a[i + 4]].insert(i);
    }
    long long ans = 0;
    for(auto [key, values] : mp) {
        long long cnt = values.size();
        ans+= cnt * (cnt - 1) / 2;
        for(int i: values) {
            if(values.find(i + 2) != values.end()) {
               ans--;
            }
            if(values.find(i + 4) != values.end()) {
               ans--;
            }
            
        }
    }

    cout << ans << "\n";
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