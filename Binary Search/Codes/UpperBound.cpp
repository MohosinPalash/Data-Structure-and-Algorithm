#include <bits/stdc++.h>
#define INF 100000000
using namespace std;

int upperBound(vector<int> v, int element)
{
    sort(v.begin(), v.end());
    int left = 0, right = v.size() - 1;
    int ans = INF;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (v[mid] <= element)
            left = mid+1;
        else
        {
            ans = min (ans, mid);
            right = mid-1;
        }
    }
    return ans;
}

int main()
{
    vector<int> vec{4, 8, 9, 9, 10, 45};
    int element = 9;
    int result = upperBound(vec, element);

    cout<< "Uppere Bound of "<<element<<" = "<< result; 
}