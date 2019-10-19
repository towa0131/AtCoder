#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    string s;

    cin >> n >> s;

    char* cstr = new char[s.size() + 1];
    char_traits<char>::copy(cstr, s.c_str(), s.size() + 1);

    int total = 0;
    char latest = '0';
    for (int i = 0; i < s.size(); i++)
    {
        if(latest != cstr[i]){
            total++;
        }
        latest = cstr[i];
    }

    cout << total << endl;

    return 0;
}
