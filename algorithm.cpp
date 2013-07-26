// export 'CXXFLAGS=-std=c++11'
// make algorithm
// ./algorithm

#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

class FtpAccount
{
public:
    FtpAccount(
        string const &name,
        string const &encrypted_pwd,
        string const &home_dir)
    {
        name_ = name;
        encrypted_pwd_ = encrypted_pwd;
        home_dir_ = home_dir;
    }
    bool operator<(FtpAccount const &rhs) const
    {
        return name_ < rhs.name_;
    }
    string toString() const
    {
        ostringstream st;
        st << name_ << ", " << encrypted_pwd_ << ", " << home_dir_;
        return st.str();
    }
private:
    string name_;
    string encrypted_pwd_;
    string home_dir_;
};

ostream &operator<<(ostream &os, FtpAccount const &account)
{
    os << account.toString();
    return os;
}

int main()
{
    vector<FtpAccount> list1 = {
        { "user2", "GvPnrPn4FxugM", "/virtual/ssl" },
        { "user9", "UlousE0fTIyqA", "/virtual" },
    };

    vector<FtpAccount> list2 = {
        { "user3", "ig.RcDBD7TLsA", "/service/light_fileshare" },
        { "user1", "2IaKplkKq/cvM", "/virtual/www" },
        { "user2", "GvPnrPn4FxugM", "/virtual/ssl" },
        { "user0", "UlousE0fTIyqA", "/virtual" },
    };

    // list1 をソート
    sort(list1.begin(), list1.end());

    // list2 をソート
    cout << boolalpha;
    cout << "is_sorted: " << is_sorted(list2.cbegin(), list2.cend()) << endl;
    sort(list2.begin(), list2.end());
    cout << "is_sorted: " << is_sorted(list2.cbegin(), list2.cend()) << endl;

    // 引き算
    // v = list2 - list1
    vector<FtpAccount> v;
    set_difference(
        list2.cbegin(), list2.cend(),
        list1.cbegin(), list1.cend(),
        back_inserter(v)
        );

    // 引き算の結果を印字
    for ( auto const &x : v ) {
        cout << x << endl;
    }
}

