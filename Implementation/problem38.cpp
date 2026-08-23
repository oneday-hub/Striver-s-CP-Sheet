#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    string s; 
    cin >> s; 
    
    int n = s.size();
    bool valid = true;
    for(int i = 1; i < n; i++){
        if(islower(s[i])){
            valid = false;
            break;
        }
    }

    if(valid){
        for(char &c : s){
            if(islower(c)){
                c = toupper(c);
            }else{
                c = tolower(c);
            }
        }
    }
    cout << s << endl;
}

int main() {
    fast_io;

    solve();

    return 0;
}