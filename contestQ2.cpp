#include<bits/stdc++.h>
using namespace std;
int main()
{
      int t;
      cin >>t;

      while(t--)
      {
        vector<int>vec;
     map<int,int> m;
          int n;
          cin >> n;
long long int arr[n];

          for(int i=0;i<n;i++)
          {
              cin >> arr[i];
          }

          int max1 =INT_MIN;
        for (int i = 0; i < n; i++){
            if (arr[i] > max1)
                max1 = arr[i];
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]==max1)
                m[arr[i]]++;
        }
            int second_largest = INT_MIN;

          for (int i = 0; i < n; ++i)
         {
        if (arr[i] > second_largest)
        {
            if (arr[i] == max1 && m[arr[i]]==1)
                continue;
            second_largest = arr[i];
        }
         }

   // cout << max1 << " " << second_largest << endl;
          int c;
          for(int i=0;i<n;i++)
          {
              c=arr[i]-max1;
              if(arr[i]==max1)
              {
                 c= arr[i]-second_largest;
              }
              vec.push_back(c);
          }


          for(int i=0;i<n;i++)
          {
          cout << vec[i]<< " " ;
          }
          cout << endl;
      }
}
