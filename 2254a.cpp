#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include "./template.cpp"
#endif

using namespace std;

void solve() {
    vector<int> a(3);
    for(int i = 0; i < 3; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int cnt = 0;
    if ((a[0] == a[1]) || (a[1] == a[2])){
        cout << cnt << "\n";
        return;
    }
    while(a[1] != a[2]){
        cnt++;
        a[0]++;
        a[2]--;
        sort(a.begin(), a.end());
        if ((a[0] == a[1]) || (a[1] == a[2])){
            break;
        }
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