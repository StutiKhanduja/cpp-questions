#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
  int n;
  cin>>n;
  string s = to_string(n);
  int sum=0;
  int count=0;
  while(s.size() != 1)
  {
      if(n!=0)
      {
      int a=n%10;
       sum = sum +a;
      n=n/10;
      }
      else
      {
          s=to_string(sum);
          n=sum;
          sum=0;
          count++;
      }
  }
  cout << count <<endl;
  return 0;
}
