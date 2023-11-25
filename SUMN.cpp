#include <bits/stdc++.h>
using namespace std;

signed main() {
    #define task "SUMN"
    if (fopen(task".inp","r")) {
        freopen(task".inp","r",stdin);
        freopen(task".out","w",stdout);
    }
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s;
    cin >> s;
    int res = 0;
    for (char c: s) res += c - '0';
    cout << res;
    return 0;
}
