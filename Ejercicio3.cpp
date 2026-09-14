#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 10;

    a += 3;
    b -= a;

    cout << "A = " << a << endl;
    cout << "B = " << b << endl;

    return 0;
}
