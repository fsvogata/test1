#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> pref;
    pref[26] = "京都府";
    pref[27] = "大阪府";
    pref[28] = "兵庫県";

    map<int, string>::iterator it = pref.begin();
    while ( it != pref.end() ) {
        cout << it->first << ", " << it->second << endl;
        it++;
    }
}

