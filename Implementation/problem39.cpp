#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
void solve(){
    ll n; 
    cin >> n; 

    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    ll ans = 0;
    ll prev = a[n - 1];

    ans += prev;

    for(int i = n - 2; i >= 0; i--){
        ll curr = min(a[i], prev - 1);

        curr = max(0LL, curr);
        ans += curr;
        prev = curr;
    }
    cout << ans << endl;
}
int main() {
    fast_io;
    
    solve();
    return 0;
}