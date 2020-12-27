#include <iostream>
#include <algorithm>
#include <string>
#include <list>
#include <vector>
#include <map>
using namespace std;

unsigned test1;
static unsigned test2;

int main()
{
    unsigned scores[11];
    unsigned grade;

    for(auto it : scores)
        cout << it;
    cout << endl;
    cout << grade << endl;
    cout << test1 << " " << test2 << endl;

    return 0;
}