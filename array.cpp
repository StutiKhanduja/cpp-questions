#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int zero=0 , one=0 ,two=0;

    for(int i=0;i<n;i++)
    {
       cin >> a[i];
    }

    for(int i=0;i<n;i++)
    {
       if(a[i]==0)
       {
           zero++;
       }
       else if ( a[i]==1)
       {
           one ++;
       }
       else
       {
           two ++;
       }
    }
   /* for(int i=0;i<zero;i++)
    {
       cout<<0<<" ";
    }
    for(int i=0;i<one;i++)
    {
       cout<<1<<" ";
    }
    for(int i=0;i<two;i++)
    {
       cout<<2<<" ";
    }
    */
    for(int i=0;i<n;i++)
    {
        if(zero>=1)
        {
            cout<<0<<" ";
            zero--;
        }
        else if(one>=1)
        {
            cout<<1<<" ";
            one--;
        }
        else
        {
            cout<<2<<" ";
            two--;
        }
    }
}

