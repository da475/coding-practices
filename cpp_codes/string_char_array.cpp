#include <iostream>

using namespace std;

int main() {
    char char_array[5] = "hell";
    char *char_str = "hello";
    string str1 = "hello";
    //printf("array %s\n", char_array);
    //printf("str %s\n", char_str);
    //printf("str2 %s\n", str1);

    cout << "array " << char_array << endl;
    cout << "char ptr " << char_str << endl;
    cout << "string " << str1 << endl;

    string str2 = str1 + str1;

    return 0;
}


