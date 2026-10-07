#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include "./template.cpp"
#endif

using namespace std;

void solve() {
    int n; char c;
    string s;
    cin >> n >> c >> s;
    int i = 0, j = s.size() - 1;
    int cnt = 0;
    while(i <= j){
        if(s[i] == s[j]){
            i++; j--;
            continue;
        }
        if( (s[i] == c) || (s[j] == c)){
            cnt++;
            i++; j--;
            continue;
        }
        i++; j--;
        cnt+=2;
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