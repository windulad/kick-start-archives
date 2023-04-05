#include <bits/stdc++.h>

using namespace std;

void solve(int tcase) {
    string s;           //supplied string
    string t;           //typed string
    cin >> s >> t;

    int r = 0;

    int s_size, t_size;
    t_size = (int)(t).size();
    s_size = (int)(s).size();

    int res = t_size - s_size;

    for(int i = 0; i < s_size; ++i){
        while(r < t_size && t[r] != s[i]) r++;
        if(r == t_size){
            res = -1;
            break;
        }
        r++;
    }
    cout << "Case #" << tcase << ": " << (res == -1 ? "IMPOSSIBLE" : to_string(res)) << '\n';

}

int main() {
    int T;
    cin >> T;

    for(int t = 1; t < (T + 1); ++t) {
        solve(t);
    }
}
