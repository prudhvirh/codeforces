#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include "./template.cpp"
#endif

using namespace std;

void solve() {
    int n; cin >> n;
    int a = 0, b = 0, temp;
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(temp >= 3){a++;}
        else if(temp == 2){b++;}
    }
    if( a >= 1 || b >= 2){
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