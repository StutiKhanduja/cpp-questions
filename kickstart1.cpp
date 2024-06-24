#include<bits/stdc++.h>
using namespace std;
int main()
{
      int t;
      while(t--)
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
         mymap.psuh
