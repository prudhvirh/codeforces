#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include "./template.cpp"
#endif

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n,0);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(n%2 == 1){
        cout << "NO\n";
        return;
    }
    int minx = 1e9;
    int maxx = 1;
    for(int i = 0; i < n; i+=2){
        if(a[i] <= a[i + 1]){
            cout << "NO\n";
            return;
        }
        minx = min(minx,a[i]);
        maxx = max(maxx,a[i + 1]);
    }
    if(minx <= maxx + 1){
        cout << "NO\n";
        return; 
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