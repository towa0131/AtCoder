#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    vector<int> di;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        di.push_back(tmp);
    }

    int total = 0;
    for (int x = 0; x < di.size(); x++){
        if(x >= di.size()){
            break;
        }

        for (int y = x + 1; y < di.size(); y++)
        {
            total += di[x] * di[y];
        }
    }

    cout << total << endl;

    return 0;
}
