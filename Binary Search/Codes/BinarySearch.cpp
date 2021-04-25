#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> v, int element)
{
    sort(v.begin(), v.end());
    int left = 0, right = v.size() - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (v[mid] == element)
        {
            return 1;
            break;
        }
        if (v[mid] < element)
            left = mid+1;
        else
            right = mid-1;
    }
    return 0;
}

int main()
{
    vector<int> vec{4, 8, 9, 10, 45};
    int element = 10;
    int result = binarySearch(vec, element);

    if( result )
        cout<<"The element is found!";
    else
        cout<<"The element is not found!";
}