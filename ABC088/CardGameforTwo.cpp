#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n;
    vector<int> a;

    cin >> n;

    for (int i = 0; i < n; i++){
        int input;
        cin >> input;
        a.push_back(input);
    }

    sort(a.begin(), a.end(), greater<int>());

    int alice = 0;
    int bob = 0;
    
    // TRUE = ALICE, FALSE = BOB
    bool turn = true;

    for(int j : a){
        if(turn){
            alice += j;
            turn = false;
        }else{
            bob += j;
            turn = true;
        }
    }

    cout << alice - bob << endl;

    return 0;
}
