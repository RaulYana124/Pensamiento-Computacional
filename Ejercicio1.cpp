#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 4;

    x = x + y;
    y = x - y;
    x = x - y;

    cout << "X = " << x << endl;
    cout << "Y = " << y << endl;

    return 0;
}
