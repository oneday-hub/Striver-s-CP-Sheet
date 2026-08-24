// question : A. City Day

#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);


void solve(){
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int d = 0; d < n; d++){
        bool flag = true;

        // left
        for(int j = max(0, d - x);j < d; j++){
            if(a[d] > a[j]){
                flag = false;
                break;
            }
        }
        // right
        if(flag){
            for(int j = d + 1; j <= min(n - 1, d + y); j++){
                if(a[d] > a[j]){
                    flag = false;
                    break;
                }
            }
        }
        if(flag){
            cout << d + 1 << endl;
            break;
        }
    }
    
}
int main() {
    fast_io;
    solve();
    
    return 0;
}