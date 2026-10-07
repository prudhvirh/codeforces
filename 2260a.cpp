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
        if(first == 1){
            first = temp;
        }
        last = temp;
        if(temp == 0){
            cnt++;
        }
    }
    if(first + last == 0){
        cout << 0 << "\n";
        return;
    }
    else if (first + last == 1){
        if(cnt >= 1){
            cout << 1 << "\n";
            return;
        }
        else{
            cout << -1 << "\n" ;
        }
    }

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