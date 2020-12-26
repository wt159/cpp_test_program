#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string s1;
    while(getline(cin, s1))
    {
        if(s1.size() > 10)
        {
            cout << s1 << endl;
            break;
        }
    }

    return 0;
}