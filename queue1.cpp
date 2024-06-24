#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n;
    cin >> n;
    int arr[10000];
    int start =-1;
    int end =-1;
    for(int i=1; i<=n; i++)
    {

        if(i%2==0)
        {
            if(start== -1 && end== -1)
            {
                start ++;
                end ++;
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
        cout << arr[i]<< endl;
    return 0;

}
