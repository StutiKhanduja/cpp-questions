#include<bits/stdc++.h>
using namespace std;
int main()
{
      int t;
      cin >>t;

      while(t--)
      {
          int d;
          int n;
          string s;
         cin>>n;
         cin>>s;
         sort(s.begin() ,s.end());
          d=s[n-1]-'a';
          cout << d+1 << endl;
      }
      return 0;
}
