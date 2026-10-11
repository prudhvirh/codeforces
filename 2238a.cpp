#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include "./template.cpp"
#endif

using namespace std;

void solve() {
    int n,c; cin >> n >> c;
    vector<int> a(n,0);
    vector<int> b(n,0);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i]; 
    }
    int cnt1 = 0;
    for(int i = 0; i < n; i++){
        if(a[i] >= b[i]){
            cnt1+=abs(a[i] - b[i]);
        }
        else{
            cnt1 = -1;
            break;
        }
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int cnt2 = c; 
    for(int i = 0; i < n; i++){
        if(a[i] < b[i]){
            cout << -1 << "\n";
            return;
        }
        cnt2+=abs(b[i] - a[i]);
    }
    if(cnt1 == -1){
        cout << cnt2 << "\n";
        return;
    }
    cout << min(cnt1, cnt2) << "\n";


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