#include <iostream>
#include <algorithm>
#include <string>
#include <list>
#include <vector>
#include <map>
#include <cctype>
using namespace std;

int main()
{
    vector<int> arr;
    for(int i=1; i < 11; i++){
        arr.push_back(i);
    }

    for(auto it = arr.begin(); it != arr.end(); ++it){
        (*it) *= 2;
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}