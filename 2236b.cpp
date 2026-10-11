#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include "./template.cpp"
#endif

using namespace std;

void solve() {
    int n,k; cin >> n >> k;
    string s; cin >> s;
    for(int i = 0; i < n - k; i++){
        if(s[i] == '1'){
            s[i] = '0';
            s[i + k] = (char) ('0' + 1 - (s[i + k] - '0'));
        }
    }
    for(char c: s){
        if(c == '1'){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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