// A. Palindromic Twist

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

void solve(){
    int n; 
    cin >> n; 

    string s; 
    cin >> s; 

    
    bool flag = true;
    for(int i = 0; i < n/2; i++){

        int left = s[i];
        int right = s[n - i - 1];

        if(left == right) continue;

        if(left == 'a'){
            if(right != 'c'){
                flag = false;
                 break;
            }
        }
        else if(left == 'z'){
            if(right != 'x'){
                flag = false;
                break;
            }
        }

        else if(right == 'a'){
            if(left != 'c'){
                flag = false;
                break;
            }
        }
        else if(right == 'z'){
            if(left != 'x'){
                flag = false;
                break;
            }
        }
        else{
            if((left - 1 != right + 1) && (left + 1 != right - 1)){
                flag = false;
                break;
            } 
        }
    }

    if(flag){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
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