#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> fruits = {
        "apple",
        "lemon",
        "kiwi",
    };

    for ( auto const &x : fruits ) {
        cout << x << endl;
    }
}

