#include <iostream> // includes cin to read from stdin and cout to write to stdout

using namespace std; // since cin and cout are both in namespace std, this saves some text

void solve(int x, int n, int m){
    cin >> n >> m; // read n and then m.
    cout << "Case #" << x << ": " << (n + m) << " " << (n * m) << endl;
    // cout knows that n + m and n * m are ints, and prints them accordingly.
    // It also knows "Case #", ": ", and " " are strings and that endl ends the line.
}

int main(){
    int t, val1, val2;
    cin >> t;
    for(int i = 1; i <= t; i++){
        solve(i, val1, val2);
    }
}