#include <iostream>

using namespace std;

class base {

private:
    int real;
    int imag;
public:

    base(int a=0, int b=0) {
        real = a;
        imag = b;
    }
    base operator + (base &obj) {
        base res;
        res.real = obj.real + real;
        res.imag = obj.imag + imag;
        return res;
    }
    void print() {
        cout << "real " << real << "  image " << imag << endl;
    }
};


int main() {
    base b1(3, 8);
    base b2(1, 2);
    base b3 = b1 + b2;

    b1.print();
    b2.print();
    b3.print();

    //cout << "b1: " << b1.real << "  " << b1.imag << endl;
    //cout << "b2: " << b2.real << "  " << b2.imag << endl;
    //cout << "b3: " << b3.real << "  " << b3.imag << endl;
    return 0;
}
