#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll A, B;
    cin >> A >> B;

    vector<int> N(3);
    N.push_back(A);
    N.push_back(B);

    bool flagA = false;
    bool flagB = false;
    bool flagC = false;
    for (int n : N)
    {
        if(n == 1){
            flagA = true;
        }else if(n == 2){
            flagB = true;
        }else if(n == 3){
            flagC = true;
        }
    }

    if(!flagA) cout << "1" << endl;
    if(!flagB) cout << "2" << endl;
    if(!flagC) cout << "3" << endl;

    return 0;
}
