#include <bits/stdc++.h>

using namespace std;
int n, c ,res;
string s;
long long f[1000005] = {1};
signed main() {
    #define task "SUBSTR"
    if (fopen(task".inp","r")) {
        freopen(task".inp","r",stdin);
        freopen(task".out","w",stdout);
    }
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> s;
    for (int i = 0; i < (int) s.size(); ++i) {
        c += (s[i] == '1');
        if (c >= n) res += f[c - n];
        ++f[c];
    }
    cout << res;
    return 0;
}
