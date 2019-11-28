#include <iostream>

using namespace std;

int main(){

    int a;
    int count = 0;

    cin >> a;

    for (int i = 0; i <= a; i++){
        if(i % 2 != 0){
            count++;
        }
    }

    cout << (float) count / (float)a << endl;

    return 0;
}
