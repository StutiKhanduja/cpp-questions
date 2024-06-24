#include<bits/stdc++.h>
using namespace std;

struct node
    {
       public:
       int val;
     node *next;
    };

    node* curr=NULL;
    node* prev=NULL;
    node* banao=NULL;
    node* start=NULL;
    node* last=NULL;
     void insert(int numb)
     {
         banao=new node();
         banao-> val =numb;
         banao->next=NULL;

         if(start==NULL)
         {

        start=banao;
        last=banao;
         }
         else{

            last->next=banao;
            last=banao;
         }
     }
     void reverse(node *head)
     {
          node*curr =head;
         node* prev =NULL;
         while(curr!=NULL)
         {

             node *temp=curr->next;
             curr->next=prev;
             prev=curr;
             curr=temp;
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
    print(start);
         return 0;
     }


