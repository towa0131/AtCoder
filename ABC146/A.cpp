#include <iostream>
#include <vector>

using namespace std;

int main(){
    string s;
    cin >> s;

    vector<string> date = {
        "SUN",
        "MON",
        "TUE",
        "WED",
        "THU",
        "FRI",
        "SAT",
        "SUN"
    };

    int n = 0;
    bool flag = false;
    for(string d : date){
        if (flag) n++;
        if(d == s) flag = true;
    }

    cout << n << endl;

    return 0;
}
