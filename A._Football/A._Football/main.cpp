#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cntr1 = 0;
    int cntr2 = 0;
    char reference;
    string reference_word, other_word;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (i == 0) {
            reference = s[0];
            reference_word = s;
        }
        if (s[0] == reference) {
            cntr1++;
        } else {
            other_word = s;
            cntr2++;
        }
    }

    if (cntr1 > cntr2) {
        cout << reference_word << endl;
    } else {
        cout << other_word << endl;
    }

    return 0;
}

