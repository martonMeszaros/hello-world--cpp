#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string name;
    cout << "Please enter your name!" << endl;
    getline(cin, name);
    cout << "Hello " << name << "!" << endl;
    return 0;
}