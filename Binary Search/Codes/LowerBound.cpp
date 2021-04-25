#include <bits/stdc++.h>
#define INF 100000000
using namespace std;

int lowerBound(vector<int> v, int element)
{
    sort(v.begin(), v.end());
    int left = 0, right = v.size() - 1;
    int ans = INF;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (v[mid] >= element)
        {
            ans = min (ans, mid);
            right = mid-1;
        }
        else
            left = mid+1;
    }
    return ans;
}

int main()
{
    vector<int> vec{4, 8, 9, 9, 10, 45};
    int element = 9;
    int result = lowerBound(vec, element);

    cout<< "Lower Bound of "<<element<<" = "<< result; 
}