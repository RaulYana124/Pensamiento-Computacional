#include <iostream>
using namespace std;

int main() {
    int x = 5;

    ++x;
    int y = x * x;
    x--;

    cout << "X = " << x << endl;
    cout << "Y = " << y << endl;
    return 0;
}
