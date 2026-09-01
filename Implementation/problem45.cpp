// A. Shuffle Hashing

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    string p, h;
    cin >> p;
    cin >> h;

    unordered_map<char, int> mp;

    for (char ch : p) {
        mp[ch]++;
    }

    int k = p.size();
    int m = h.size();

    for (int i = 0; i + k <= m; i++) {

        unordered_map<char, int> temp;

         for (int j = i; j < i + k; j++) {
            temp[h[j]]++;
        }

        if (mp == temp) {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
}

int main() {
    fast_io;

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}