#include<bits/stdc++.h>
using namespace std;
int main ()
{
     int t ;
     cin >> t;
     while(t--)
     {
         int n;
         cin >> n;
         string s1,s2;
         cin >> s1>>s2;
         int count =0;
         for(int i=0;i<n;i++)
         {
             if(s1[i]=='R' && (s2[i]=='G' || s2[i]=='B' ))
             {
                 count ++;
             }
             else if(s2[i]=='R' && (s1[i]=='G' || s1[i]=='B' ))
             {
                 count ++;
             }
         }
         if(count >0)
         {

             cout << "NO" << endl;
         }
         else
         {
             cout << "YES"<< endl;
         }
    }

}
