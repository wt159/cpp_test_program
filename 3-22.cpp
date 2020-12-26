#include <algorithm>
#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    string text = "hello world!";
    for(auto it = text.cbegin(); it != text.cend() && !isspace(*it); ++it){
        *it = toupper(*it);
        cout << *it << endl;
    }
    cout << text << endl;
    return 0;
}
