#include<bits/stdc++.h>
using namespace std;
int main()
{
      int t;
      cin>>t;
      for(int ww=1;ww<=t;ww++)
      {
          int count =0;
          int n;
          cin>>n;
          map<int, vector<string>> mymap;
          map<string, vector<int>> mymap2;
          for(int i=0;i<n;i++)
         {
             string name;
             int des,id;
          cin >> name>>des>>id;
          mymap2[name].push_back(des);
          mymap2[name].push_back(id);
          string cpy=to_string(id);
           mymap[des].push_back(name);
           mymap[des].push_back(cpy);
         }


vector<int> ans2;
vector<string> ans1;
int k=0;
         for(auto itr:mymap)
         {
             for(auto c: itr.second)
             {
                 if(k==0)
                    k++;
                    else
                    {
                        k=0;
                        ans1.push_back(c);
                    }

             }
         }
         k=0;
           for(auto itr:mymap2)
         {
             for(auto c: itr.second)
             {
                 if(k==0)
                    k++;
                    else
                    {
                        k=0;
                        ans2.push_back(c);
                    }

             }
         }
         for(int i=0;i<ans1.size();i++)
         {
             int comp=stoi(ans1[i]);
             if(ans2[i]==comp)
                count++;
         }
         cout << "Case #"<<ww<<": "<<count<<endl ;
      }
         return 0;

}

