#include <iostream>
#include <string>

using namespace std;

int main()
{

    try {
        int a=4;
        char c=2;
        //throw c;

        if(a>20)
            throw 20;
        //else
            //throw 10;

        cout << "end of try" << endl;
    }

    catch (int i) {cout << "int exception " << i << endl;}
    catch (char c) {cout << "char exception " << c << endl;}

    return 0;
}
