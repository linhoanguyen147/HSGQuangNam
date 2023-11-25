#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 5 + 1e6;
int n, a[maxn], res, l[maxn], r[maxn];
long long p[maxn];
//unordered_map<long long, int > r,l;
void compress(int *a) {
    set<int> s(a+1,a+n+1);
    vector<int > b(s.begin(),s.end());
    int i;
    for (int i = 1; i <= n; ++i) a[i] = lower_bound(b.begin(),b.end(),a[i]) - b.begin() + 1;
}
signed main() {
    #define task "ZERO"
    if (fopen(task".inp","r")) {
        freopen(task".inp","r",stdin);
        freopen(task".out","w",stdout);
    }
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i =1 ; i <=n;++i) cin >> a[i], p[i] = p[i-1] + a[i];
    for (int i = n; i ;--i) if (p[i] == 0) {
        res = max(res,i);
        //cout << r << endl;
        break;
    }
    compress(p);
    for (int i = 1; i <= n; ++i) if (p[i]) {
        int sum = p[i];
        if (!l[sum]) l[sum] = i;
        //if (l[sum] != i) cout << sum << ' ' << l[sum] << endl;
        r[sum] = i;
       //res = max(i - l[sum], res);
    }
    for (int i = 0; i <= n; ++i) {
        int sum = p[i];
        if (l[sum] != i) cout << sum << ' ' << l[sum] << ' ' << r[sum] << '\n';
        //r[sum] = i;
       res = max(r[sum] - l[sum], res);
    }

    cout << res;
    return 0;
}
