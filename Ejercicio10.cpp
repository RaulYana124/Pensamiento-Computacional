#include <iostream>
using namespace std;

int main() {
    int a = 7;
    int b = 3;
    int c = ++a + b--;

    cout << "A = " << a << endl;
    cout << "B = " << b << endl;
    cout << "C = " << c << endl;
    return 0;
}
