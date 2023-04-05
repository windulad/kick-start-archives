#include <iostream>

using namespace std;

void solve(int t_case) {
    string provide_str, type_str;
    cin >> provide_str >> type_str;

    int provide_size, type_size;
    provide_size = (int)(provide_str).size();
    type_size = (int)(type_str).size();

    int delete_times = type_size - provide_size;

    int provide_ptr;
    int type_ptr = 0;

    for(provide_ptr = 0; provide_ptr < provide_size; provide_ptr++){
        while((type_ptr < type_size) && (type_str[type_ptr] != provide_str[provide_ptr])){
            type_ptr++;
        }
        if (type_ptr == type_size) {
            delete_times = -1;
            break;
        }
        type_ptr++;
    }
    if(delete_times == -1){
        cout << "Case #" << t_case << ": " << "IMPOSSIBLE" << endl;
    }else{
        cout << "Case #" << t_case << ": " << delete_times << endl;
    }
}

int main(){
    int T;
    cin >> T;

    for(int t = 1; t <= T; t++) {
        solve(t);
    }
}