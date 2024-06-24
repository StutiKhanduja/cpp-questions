#include<bits/stdc++.h>
using namespace std;
int main()
{
      int t;
      cin >>t;
      while(t--)
      {
          int n;
          cin>>n;
          string s;
          string res;
        cin >> s;

          for(int i=n-1;i>=0;i--)
          {
              if(s[i]=='0')
              {
                  string num;
                  num+=s[i-2];
                  num+=s[i-1];
                  int x=stoi(num);
                  i=i-2;
                  res +=('a'+x-1) ;
              }
              else
                {
                 res +=(s[i]-1+'a');
              }
          }
          reverse(res.begin(),res.end());
          cout << res;
      }
      return 0;
}
