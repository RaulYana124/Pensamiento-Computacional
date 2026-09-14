#include <iostream>
using namespace std;

int main() {
    int a = 7;
    int b = 3;
    int c = a * 2 + b % 2;

    a = a + b * 3 - c / 2;
    b = b + a / 2;

    cout << "A = " << a << endl;
    cout << "B = " << b << endl;
    cout << "C = " << c << endl;
    return 0;
}
