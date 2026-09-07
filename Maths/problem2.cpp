// A. LCM Problem

#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){
    int l, r; 
    cin >> l >> r; 

    if(2*l <= r){
        cout << l << " " << 2*l << endl;
    }else{
        cout << -1 << " " << -1 << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}