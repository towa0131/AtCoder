#include <iostream>
#include <vector>
#include <string>
#include <map>

typedef long long ll;

using namespace std;

int main(){
    int n, z = 0;
    string s;
    map<string, int> ans;
    cin >> n >> s;

    for (int i = 0; i <= 9; i++){
        for (int j = 0; j <= 9; j++){
            for (int k = 0; k <= 9; k++){
                int pos1 = s.find_first_of(to_string(i));
                if(pos1 == string::npos) continue;
                string s2 = s.substr(pos1 + 1, s.size() - pos1);
                int pos2 = s2.find_first_of(to_string(j));
                if(pos2 == string::npos) continue;
                string s3 = s2.substr(pos2 + 1, s2.size() - pos2);
                int pos3 = s3.find_first_of(to_string(k));
                if(pos3 == string::npos) continue;

                string pass = to_string(i) + to_string(j) + to_string(k);
                z++;
            }
        }
    }

    cout << z << endl;

    return 0;
}
