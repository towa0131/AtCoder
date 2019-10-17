#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int number;
        cin >> number;
        a.push_back(number);
    }

    int success = 0;
    while(true){
        for(auto& m : a){
            if((m % 2) == 0){
                m /= 2;
            }else{
                cout << success << endl;
                return 0;
            }
        }
        success++;
    }

    return 0;
}
