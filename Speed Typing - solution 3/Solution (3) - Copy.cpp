#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define subnb true
#define Lnb true
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;

void solve(int tcase) {
    string s, t;
    cin >> s >> t;
    int r = 0;
    int res = sz(t) - sz(s);
    rep(i, 0, sz(s)) {
        while(r < sz(t) && t[r] != s[i]) r++;
        if(r == sz(t)) {
            res = -1;
            break;
        }
        r++;
    }
    cout << "Case #" << tcase << ": " << (res == -1 ? "IMPOSSIBLE" : to_string(res)) << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    rep(t, 1, T + 1) {
        solve(t);
    }
}
