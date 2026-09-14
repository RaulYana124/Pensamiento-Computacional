#include <iostream>
using namespace std;

int main() {
    int x = 8;
    int y = 2;

    x += y * 3;
    y = x - y;

    cout << "X = " << x << endl;
    cout << "Y = " << y << endl;
    return 0;
}
