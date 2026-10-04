#include <iostream>
#include <sstream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string name, word;
    getline(cin, name);

    stringstream ss(name);
    while (ss >> word) {
        cout << (char)toupper(word[0]) << ".";
    }
    cout << endl;
    return 0;
}