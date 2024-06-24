#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N = 5;
    int K = 2;
    vector<int> arr = { 12, 3, 5, 7, 19 };
    vector <int>vec;
    map<int, int> mp;

    for (int i = 0; i < N; i++) {
        mp[arr[i]] += 1;
    }
    int count =0;
    for(auto itr :mp)
    {
    count ++;
    if(count ==K)
    {
     return itr.first;
    }

    return -1;

}
}
