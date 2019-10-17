#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n, x;
    vector<int> d;

    cin >> n;

    for (int i = 0; i < n; i++){
        int input;
        cin >> input;
        d.push_back(input);
    }

    sort(d.begin(), d.end());

    int latest;
    bool first = true;
    x = 0;

    for(int j : d){
        if(first){
            x++;
            first = false;
            latest = j;
        }else{
            if(j > latest){
                x++;
            }
            latest = j;
        }
    }

    cout << x << endl;

    return 0;
}
