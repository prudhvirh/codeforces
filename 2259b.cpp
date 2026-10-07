#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include "./template.cpp"
#endif

using namespace std;

void solve() {
    int n; cin >> n;
    int a = 0, b = 0, c = 0;
    for(int i = 0; i < n; i++){
        int temp; cin >> temp;
        if(temp % 2 == 1){
            a++;
        }
        else if(temp % 4 == 2){
            b++;
        }
        else if(temp % 4 == 0){
            c++;
        }
    }
    cout << max({a,b,c}) << "\n";
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