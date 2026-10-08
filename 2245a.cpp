#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include "./template.cpp"
#endif

using namespace std;

void solve() {
    int n,k; cin >> n >> k;
    string s; cin >> s;
    if(n < 2*k){
        cout << -1 << "\n";
        return;
    }
    int cnt = 0;
    for(int i = 0;i < k; i++){
        if (s[i] == 'L'){cnt++;}
    }
    for(int i = s.size() - 1; i > s.size() - 1 - k; i--){
        if(s[i] == 'R'){cnt++;}
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