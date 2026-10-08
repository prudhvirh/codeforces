#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include "./template.cpp"
#endif

using namespace std;

void solve() {
    string s; cin >> s;
    int zero = -1, one = -1;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0'){
            zero = i;
            break;
        }
    }
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            one = i;
            break;
        }
    }
    for(int i = 0; i < s.size(); i++){
        if(i == zero || i == one){
            continue;
        }
        cout << s[i];
    }
    cout << "\n";
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