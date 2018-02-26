#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
    string str1 = "hello";
    string str2 = str1 + str1;
    cout << "string1 " << str1 << endl;
    cout << "string2 " << str2 << endl;

    // C-style
    char *str_c1 = "hello";
    char *str_c2 = "hello";
    char *str_c3 = (char*)malloc(sizeof(str_c1) * 5);
    strcat(str_c3, str_c2);
    printf("str3 = %s\n");

    strcat(str_c3, str_c2);
    printf("str3 = %s\n");
    str_c3 = strcat(str_c3, str_c2);
    printf("str3 = %s\n");
    return 0;
}


