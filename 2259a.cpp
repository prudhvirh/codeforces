#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include "./template.cpp"
#endif

using namespace std;

void solve() {
    int n,k; cin >> n >> k;
    string s; cin >> s;
    int cnt = 0;
    for(int i = 0; i < n/k; i++){
        int temp = 1;
        for(int j = 0; j < k; j++){
            if(s[i*k + j] == '0'){
                temp = 0;
                break;
            }
        }
        cnt += temp;
    }
    cout << cnt << "\n";
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