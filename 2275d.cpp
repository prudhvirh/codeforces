#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include "./template.cpp"
#endif

using namespace std;
int sgn(long long val) {
    return (0LL < val) - (val < 0LL);
}
void solve() {
    int n; long long k;
    cin >> n >> k;
    vector<long long> ans; 
    vector<long long> temp; 

    for(int i = 0; i < n; i++) {
        int a,b,c;
        cin >> a >> b >> c;
        if(max({sgn(b - c), sgn(a - c), sgn(a - b)} ) == 1){
            ans.push_back(a + b + c);
        }
        else{
            temp.push_back(a + b + c);  
        }
    }
    sort(ans.begin(), ans.end());
    for(int i = 0; i < (int)ans.size() - 1; i++) {
        long long gap = ans[i + 1] - ans[i];
        if(gap == 0) continue;
        if(k/(i + 1) >= gap){
            k -= gap * (i + 1);
            ans[i] += gap * (i + 1);
        }
        else{
            temp.push_back(ans[i]);
            ans[i] += k/(i + 1);
            sort(temp.begin(), temp.end());
            cout << temp[0] << "\n";
            return;
        }
    }
    debug(temp);
    if(ans.size() == 0){
        sort(temp.begin(), temp.end());
        cout << temp[0] << "\n";
        return;  
    }
    temp.push_back(ans.back() + (k/(int)ans.size()));
    sort(temp.begin(), temp.end());
    cout << temp[0] << "\n";

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