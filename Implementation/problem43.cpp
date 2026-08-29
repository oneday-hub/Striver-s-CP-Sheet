// problem : B. Rooms and Staircases

#include <bits/stdc++.h>
using namespace std;

//  
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
void solve(){
    int n; 
    cin >> n; 

    string s; 
    cin >> s;
    int ans = 0;
    if(s[0] == '1' || s[n - 1] == '1'){
        cout << 2 * n << endl;
        return;
    }
    for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            ans += 2;
        }else{
            ans += 1;
        }
    }
    cout << ans << endl;
    
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