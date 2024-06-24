#include<bits/stdc++.h>
using namespace std;
int main()
{
      int t;
      cin >>t;

      while(t--)
      {
           int a,b,c;
      cin >> a>>b>>c;
      int d1,d2;
      d1 = a - 1;
    d2 = abs(b - c) + c - 1;
    int ans = 0;
    if (d1 < d2)
        ans += 1;
     else if (d1 > d2)
        ans += 2;
        else{
            ans+=3;
        }
    cout << ans<<endl;
      }
      return 0;
}
