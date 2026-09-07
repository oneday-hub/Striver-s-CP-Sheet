// A. Mahmoud and Ehab and the even-odd game

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    int n; 
    cin >> n; 
    
    if(n % 2 == 0){
        cout << "Mahmoud" << endl;
    }else{
        cout << "Ehab" << endl;
    }
    return 0;
}