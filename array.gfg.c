#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[n];
    for(int i=0;i<n;i++)
    {

    cin << a[i];
    }


    int sum=0;
    int leftsum=0;
    int rightsum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    for(int i=0;i<n;i++)
    {
        leftsum += a[i];
        rightsum=sum-leftsum
        if(leftsum=rightsum)
        {

            cout << i;
        }

    }
    cout << " -1";
}

