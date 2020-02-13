#include <iostream>

typedef long long ll;

using namespace std;

int main(){
    int x;
    cin >> x;

    int count = x / 100;
    int goal = x % 100;

    if(count * 5 >= goal) cout << 1 << endl;
    else cout << 0 << endl;

    return 0;
}
