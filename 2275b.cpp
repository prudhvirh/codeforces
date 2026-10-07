#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include "./template.cpp"
#endif

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    stack<int> st;
    set<int> st1;
    for(int i = 1; i <= n; i++) {
        st1.insert(i);
    }
    for(int i = 0; i < n; i++) {
        if(s[i] == '1'){
            st.push(i + 1);
        }
        else if(s[i] == '2'){
            if(!st.empty()) {
                st1.erase(st.top());
                st.pop();
            }
            else{
                st1.erase(i + 1);
            }
        }
        else{
            st1.erase(i + 1);
        }
    }
    cout << st1.size() << "\n";
    for(auto it : st1) {
        cout << it << " ";
    }
    cout << "\n";
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