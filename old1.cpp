#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> fruits;
    fruits.push_back("apple");
    fruits.push_back("lemon");
    fruits.push_back("kiwi");

    vector<string>::iterator it = fruits.begin();
    while ( it != fruits.end() ) {  
        cout << *it << endl;
        it++;
    }
}

