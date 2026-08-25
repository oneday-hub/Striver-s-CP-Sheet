// A. Lucky Sum of Digits

#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n; 
    cin >> n; 
    int ans = 0;
    int cntseven = n/7;

    while(cntseven >= 0){
        int remaining = n - cntseven * 7;
        if(remaining % 4 == 0){
            int cntfour = remaining/4;

            cout << string(cntfour, '4');
            cout << string(cntseven, '7');
            cout << endl;

            return;
        }
        cntseven--;
    }
    cout << -1 << endl;
}

int main() {
    solve();   
    return 0;
}