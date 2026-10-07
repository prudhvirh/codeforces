#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include "./template.cpp"
#endif

using namespace std;

void solve() {
    int cnt = 0, first = 1, last = 1, n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        if(i == 0){
            first = temp;
        }
        last = temp;
        if(temp == 0){
            cnt++;
        }
    }
    if(cnt < 2){
        cout << -1 << "\n";
        return;
    }
    cout << first + last << "\n";

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