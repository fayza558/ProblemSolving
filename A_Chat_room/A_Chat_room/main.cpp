
#include <iostream>
#include <string>

int main() {
    using namespace std;
    string s;
    cin >> s;

    string hello = "hello";
    int j = 0;

    for (int i = 0; i < s.size(); ++i) {

        if (s[i] == hello[j]) {
            ++j;
        }

        if (j == hello.size()) {
            cout << "YES" << endl;
            return 0;
        }
    }


    cout << "NO" << endl;

    return 0;
}


