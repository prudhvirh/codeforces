#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include "./template.cpp"
#endif

using namespace std;

void solve() {
    vector<int> a(101,0);
    vector<int> ans;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int temp; cin >> temp;
        a[temp]++;
    }
    for(int i = 100; i >= 1; i--){
        if(a[i] == 0){continue;}
        int temp = a[i];
        while(a[i]--){
            ans.push_back(i);
        }
        for(int j = i - 1; j >= 1; j--){
            int temp1 = min(temp,a[j]);
            while(temp1--){
                ans.push_back(j);
                a[j]--;
            }
        }
    }
    for(int i : ans){
        cout << i << " ";
    }
    cout << "\n";
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