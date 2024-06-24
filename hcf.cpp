#include<bits/stdc++.h>
using namespace std;

    int hcf(int x,int y)
    {
    stack<int>s1;
    for(int i=0;i<50;i++)
    {
        if(x%i==0 && y%i==0)
        {
        s1.push(i);
        }

    }
    return s1.top();
    }

int main()
{
    int x1,x2;
    cout << "enter x"<<endl;
    cin>>x1;
    cout<< "enter y"<<endl;
    cin>>x2;
    cout << "hfc " << hcf(x1,x2);
    return 0;
}
