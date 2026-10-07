#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include "./template.cpp"
#endif

using namespace std;

void solve() {
    int n,k; cin >> n >> k;
    string s; 
    unordered_set<char> us; 
    for(int i = 0; i < n; i++){
        cin >> s;
        us.insert(toupper(s[0]));
    }
    bool ans = true;
    for(int i = 0;i < k; i++){
        cin >> s;
        for(char c: s){
            if(us.find(c) == us.end()){
                ans = false;
            }
        }
    }
    if(ans == false){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    return;

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