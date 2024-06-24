#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cin >> arr[i];
    }

     int i, j, small;

    for (i = 0; i < n-1; i++)
    {
        small = i;

        for (j = i+1; j < n; j++)
        if (arr[j] < arr[small])
            small = j;
    int temp = arr[small];
    arr[small] = arr[i];
    arr[i] = temp;
    }

   int sum =0;
    for (i = n-2; i < n ; i++)
    {
        sum = sum +arr[i];
    }
    cout << sum;
    return 0;
}
