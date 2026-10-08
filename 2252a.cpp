#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include "./template.cpp"
#endif

using namespace std;

void solve() {
    int n; cin >> n;
    unordered_map<int,int> um;
    int temp;
    long long sum = 0;
    int maxfreq = 0;
    int maxvalue = 0;
    for(int i = 0; i < n; i++){
        cin >> temp;
        um[temp]++;
        if(um[temp] > maxfreq){
            maxfreq = um[temp];
            maxvalue = temp;
        }
        sum+=temp;
    }

   if(maxfreq <= n - maxfreq + 1){
        cout << sum << "\n";
        return;
   }
   cout << sum - (2*maxfreq - n - 2)*1LL*maxvalue << "\n";

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