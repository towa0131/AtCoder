#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    string s;

    cin >> n >> s;

    string a = s.substr(0, n / 2);

    if(a + a == s){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}
