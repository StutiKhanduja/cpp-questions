#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n;
    cin >> n;
    int arr[10000];
    int start =-1;
    int end =-1;
    int check=0;
   for(int i=2;i<=n;i++)// to check all nos from 1 to n to find if they are prime or not
{
    check=0;
    for(int j=2;j<=sqrt(i);j++)// to individually check if this no i is prime or not
    {
        if(i%j==0)
            check++;
    }
    if(check==0)
    {
        if(start==-1 && end==-1)
        {
            start++;
            end++;
            arr[end]=i;
        }
        else
        {
            end++;
            arr[end]=i;
        }
    }
}
    for(int i=start; i<=end; i++)
    {
        cout << arr[i]<<" ";
    }
    return 0;

}

