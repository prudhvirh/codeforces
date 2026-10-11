#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include "./template.cpp"
#endif

using namespace std;

void solve() {
    string s; int n; cin >> n;cin >> s;
    int ans = 0, temp = 0;
    for(int i = 0; i < n;i++){
        while(i + temp < n && s[i + temp] == '#'){
            temp++;
        }
        ans = max(ans,temp);
        i = i + temp;
        temp = 0;
    }
    cout << (ans + 1)/2 << "\n";
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