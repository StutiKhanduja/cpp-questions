#include <bits/stdc++.h>
using namespace std;
int main()
{
    int val;
    vector<int> nums;
    cin >> val;
    for(int i=0;i<4;i++)
    {

        cin >> nums[i];
    }
        vector<int>vec;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=val)
            {
                vec.push_back(nums[i]);
            }
        }
        cout << vec.size();


};

