#include <iostream>
#include <algorithm>
#include <string>
#include <list>
#include <vector>
#include <map>
using namespace std;

bool isEqu(const int *arr1, int numSize1, const int *arr2, int numSize2)
{
    if(numSize1 != numSize2)
        return false;
    for(int i = 0; i < numSize2; i++){
        if(arr1[i] != arr2[i]){
            return false;
        }
    }
    return true;
}

bool isEqu(vector<int> &arr1, vector<int> &arr2)
{
    if(arr1.size() != arr2.size()){
        return false;
    }
    for(int i=0; i<arr1.size(); i++){
        if(arr1[i] != arr2[i]){
            return false;
        }
    }
    return true;
}

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int b[10] = {1,2,3,2,5,6,7,8,9,10};
    cout << isEqu(a, 10, b, 10) << endl;

    vector<int> a1(begin(a), end(a));
    vector<int> a2(begin(b), end(b));
    cout << isEqu(a1, a2) << endl;
    return 0;
}