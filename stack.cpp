#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n;
    cin >> n;
    int arr[10000];
    int end =-1;
    for(int i=1; i<=n; i++)
    {

        if(n%i==0)
        {

                end++;
                arr[end]=i;
        }
    }
    for(int i=0; i<=end; i++)
    {

        cout << arr[i]<< endl;
    }
    return 0;

}
