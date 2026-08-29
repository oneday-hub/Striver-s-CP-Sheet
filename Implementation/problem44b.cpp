#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
void solve(){
     int n; 
    cin >> n; 

    string s; 
    cin >> s; 

    for(int i = 0; i < n/2; i++){
        int d = abs(s[i] - s[n - i - 1]);
        if(d != 0 && d != 2){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
int main() {
    fast_io;
    int t; 
    cin >> t; 

    while(t--){
        solve();
    }
    return 0;
} 