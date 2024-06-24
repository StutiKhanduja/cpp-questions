
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

class node
{
    public:
    int val;
    node *next;
};

node* kro=NULL;
node* strt=NULL;
node* last=NULL;

void insert(int numb)
{
    kro = new node();
    kro->val=numb;
    kro->next=NULL;
    if(strt==NULL)
    {
        strt=kro;
        last=kro;
    }
    else
    {
        last->next=kro;
        last=kro;
    }
}

void print(node* cpy)
{
    while(cpy!=NULL)
    {
        cout<<cpy->val<<" ";
        cpy=cpy->next;
    }
}

int main()
{

    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    print(strt);
    return 0;
}
