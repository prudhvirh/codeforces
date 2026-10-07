#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include "./template.cpp"
#endif

using namespace std;

void solve() {
    int n,a = 0,b = 0;
    int temp;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(temp == 1){a++;}
        else{b++;}
    }
    if(a >= b){
        cout << "Bessie\n";
    }
    else{
        cout << "Elsie\n";
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