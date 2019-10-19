#include <iostream>

using namespace std;

int main(){
    int a, b;

    cin >> a >> b;

    int c = a - b * 2;

    if(c >= 0){
        cout << c << endl;
    }else{
        cout << 0 << endl;
    }
    return 0;
}
