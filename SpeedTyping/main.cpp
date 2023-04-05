#include <iostream>

using namespace std;

int main() {
    int t, x;
    int delete_times = 0;
    string provide_str, type_str;
    int provide_size, type_size;
    cin >> t;
    for(x = 1; x <= t; x++){
        cin >> provide_str >> type_str;

        provide_size = (int)(provide_str).size();
        type_size = (int)(type_str).size();

        if(type_size > provide_size){
            //traverse from right to left type_str, start from type_str[0]
            int provide_ptr = 0;
            for(int type_ptr = 0; type_ptr < type_size; type_ptr++){
                //traverse from right to left provide_str, start from provide_str[0]
                if (type_str[type_ptr] == provide_str[provide_ptr]) {
                    provide_ptr++;
                }else{
                    delete_times++;
                }
            }
            if(delete_times >= type_size){
                cout << "Case #" << x << ": " << "IMPOSSIBLE" << endl;
                break;
            }
            cout << "Case #" << x << ": " << delete_times << endl;
        }else{
            cout << "Case #" << x << ": " << "IMPOSSIBLE" << endl;
        }
    }
    return 0;
}
