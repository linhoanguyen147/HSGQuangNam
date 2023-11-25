#include <bits/stdc++.h>
using namespace std;

signed main() {
    #define task "MULT"
    if (fopen(task".inp","r")) {
        freopen(task".inp","r",stdin);
        freopen(task".out","w",stdout);
    }
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        long long n, x;
        cin >> n >> x;
        cout << x / n << '\n';
    }
    return 0;
}
