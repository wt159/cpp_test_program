#include <algorithm>
#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    string str = "hello cpp";
    for(auto &c:str)
        c = 'X';
    cout << str << endl;

    for(char &c:str)
        c = 'h';
    cout << str << endl;
    return 0;
}
