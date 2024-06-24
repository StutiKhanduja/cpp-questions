struct Node
{
int data ;
Node*left;
Node*right;
}

Node* hello ( int data )
{
   Node*node = new Node();
   node->data= data;
   node->left = NULL;
   node->right= NULL;
}
vector<int> levelOrder(Node* node)
    {
        vector<int> vec;
        if(node==NULL)
        {
            return;
        }
      vec.push_back(node);
      levelOrder(node->left);
      levelOrder(node->right);
    }
    return vec;
};
