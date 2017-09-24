#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char* argv[]) {
    if (argc > 1) {
        for (int i = 1; i < argc; ++i) {
            cout << "Hello " << argv[i] << "!" << endl;
        }
    } else {
        cout << "Hello, World!" << endl;
    }
    return 0;
}