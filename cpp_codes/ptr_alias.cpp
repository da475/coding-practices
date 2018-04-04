#include <iostream>

using namespace std;

void func(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 5;
    int b = 8;
    printf("a=%d, b=%d\n", a, b);
    func(a, b);
    printf("a=%d, b=%d\n", a, b);
    return  0;
}
