#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> pref = {
        { 26, "京都府" },
        { 27, "大阪府" },
        { 28, "兵庫県" },
    };

    for ( auto const &kv : pref ) {
        cout << kv.first << ", " << kv.second << endl;
    }
}

