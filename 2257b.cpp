#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include "./template.cpp"
#endif

using namespace std;

void solve() {
    int n,m; cin >> n >> m;
    vector<int> a(n),b(m);
    int temp1,temp2;
    cin >> temp1;
    int cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < n - 1; i++){
        cin >> temp2;
        cnt1+= (temp1 - temp2 + 1);
        temp1 = temp2;
    }
    cnt1 += temp1;
    cin >> temp1;
    for(int i = 0; i < m - 1; i++){
        cin >> temp2;
        cnt2+= (temp1 - temp2 + 1);
        temp1 = temp2;
    }
    cnt2+= temp1;
    if (cnt1 >= cnt2){
        cout << 1 << "\n";
    }
    else{
        cout << 2 << "\n";
    }
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