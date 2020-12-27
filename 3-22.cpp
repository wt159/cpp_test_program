#include <algorithm>
#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    string text = "hello world!";
    for(auto it = text.begin(); it != text.end() && !isspace(*it); ++it){
        *it = toupper(*it);
    }
    cout << text << endl;
    return 0;
}
