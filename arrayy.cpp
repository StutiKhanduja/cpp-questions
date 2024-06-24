#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>nums;
        int min =INT_MAX, mid = INT_MAX;
        for(int i = 0; i< nums.size(); i++) {
            if (nums[i] < min) {
                min = nums[i];
                cout << min << endl;
            }
            if (nums[i] > min && nums[i] < mid){
                mid = nums[i];
                cout << mid << endl;
            }
            if (nums[i] > mid) {
                cout << true;
            }
        }
        return false;
    }


