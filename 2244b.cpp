#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include "./template.cpp"
#endif

using namespace std;

void solve() {
    int n; cin >> n;
    stack<int> st;
    int cnt = 0;
    st.push(0);
    int temp;
    bool ans = true;
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(st.top() < temp){
            cnt+=(temp - st.top() - 1);
            st.push(st.top() + 1);
        }
        else if (st.top() >= temp + cnt){
            ans = false;
            continue;
        }
        else{
            int val =  temp + cnt - st.top() - 1;
            cnt = val;
            st.push(st.top() + 1);
        }   
    }
    if(ans == true){
        cout << "YES\n";
        return;
    }
    cout << "NO\n";


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