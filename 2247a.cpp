#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include "./template.cpp"
#endif

using namespace std;

void solve() {
    int n; cin >> n;
    int temp, a = 0, b = 0;
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(temp == 1){
            a++;
        }
        else{
            b++;
        }
    }
    if(abs(a - b)%4 == 0){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
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