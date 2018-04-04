#include <iostream>

using namespace std;

class base1 {
public:
    base1() {
        cout << "base1 called" << endl;
    };
};


class base2 {
public:
    base2() {
        cout << "base2 called" << endl;
    };
};

class chld : public base1, public base2 {
public:
    chld() {
        cout << "child called" << endl;
    };
};

int main() {
    base1 *b1 = new(base1);
    chld *c1 = new(chld);
    return 0;
}
