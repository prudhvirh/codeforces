#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include "./template.cpp"
#endif

using namespace std;

void solve() {
    int n; cin >> n;
    vector<long long> v(n,0);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 1; i < n; i++){
        v[i]+=v[i - 1];
    }
    for(int i = 1; i <= n; i++){
        long long temp = (long long) (i) * (i + 1LL)/2;
        if(v[i - 1] < temp){
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