// A. Diverse Substring

#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

void solve(){
    int n; 
    cin >> n; 

    string s; 
    cin >> s; 

    string t = "";

   for(int i = 0; i < n - 1; i++){
    if(s[i] != s[i + 1]){
        cout << "YES" << endl << s[i] << s[i + 1];
        return;
    }
   }
   cout << "NO" << endl;
    
}
int main() {
    fast_io;
    solve();
    
    return 0;
}