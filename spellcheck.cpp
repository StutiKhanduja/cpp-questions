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
         string s ;
         cin >> s;
         int count;
         sort(s.begin(),s.end());

         for(int i=0;i<n;i++)
         {
             if(n>5)
             {
                 break;
             }
             else if(s[0]=='T'|| s[1]=='i' || s[2]=='m'|| s[3]=='r' || s[4]=='u' )
             {
                 count ++;

             }
         }
         if(count ==5)
         {
             cout << "YES" << endl;
         }
         else{
            cout <<"NO" << endl;
         }
     }
}
