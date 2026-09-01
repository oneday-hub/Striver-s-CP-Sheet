#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    int h1, m1, h2, m2;
    char c;
    cin >> h1 >> c >> m1;
    cin >> h2 >> c >> m2;

    int t1 = h1 * 60 + m1;
    int t2 = h2 * 60 + m2;

    int tt = (t1 + t2) /2;
    int h3 = tt / 60;
    int m3 = tt % 60;

    if(h3 < 10){
        cout << "0";
    }
    cout << h3 << ":";

    if(m3 < 10){
        cout << "0";
    }
    cout << m3;
    return 0;
}