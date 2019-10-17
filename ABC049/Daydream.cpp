#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

void find(string &, const string, const int, int &);
bool compare(int, int);

int main(){

    string s = "";
    int length = 0;

    cin >> s;

    int length_s = s.length();

    find(s, "eraser", 6, length);
    find(s, "erase", 5, length);
    find(s, "dreamer", 7, length);
    find(s, "dream", 5, length);


    if(compare(length, length_s)){
        cout << "YES" << endl;
        return 0;
    }

    cout << "NO" << endl;
    return 0;
}

bool compare(int lengthA, int lengthB){
    if(lengthA == lengthB){
        return true;
    }
    return false;
}

void find(string &str, const string substr, const int size, int &length){
    int subStrSize = substr.size();
    int pos = str.find(substr);

    while (pos != string::npos) {
        length += size;
        str.replace(pos, size, "");
        pos = str.find(substr);
    }
}
