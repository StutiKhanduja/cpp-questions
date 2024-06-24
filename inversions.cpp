#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i=0;i<n;i++)
    {

    cin >>A[i];
     }
       int count =0;
for(int i=0;i<n;i++)
{
    int a=i+1;
    for(int j=a;j<n;j++)
    {
        if (A[i]>A[j] && i<j)
         {

            count ++;

        }
        a++;
    }
}
cout << count;
return 0;

}
