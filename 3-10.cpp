#include <algorithm>
#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Please input string:";
    cin >> str;
    string str1;
    for(char c:str){
        if(!ispunct(c)){
            str1 += c;
        }
    }
    cout << str1 << endl;

    return 0;
}
