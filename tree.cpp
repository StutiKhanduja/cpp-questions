// C++ implementation of the approach
#include <iostream>
#include <queue>
using namespace std;

// A Binary Tree Node
struct Node {
	int data;
	struct Node *left, *right;
};

// Utility function to create a new tree node
Node* newNode(int data)
{
	Node* temp = new Node;
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

// Utility function to print
// the contents of an array
void printArr(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << endl;
}

// Function to return the height
// of the binary tree
int getHeight(Node* root)
{
	if (root->left == NULL && root->right == NULL)
		return 0;

	int left = 0;
	if (root->left != NULL)
		left = getHeight(root->left);

	int right = 0;
	if (root->right != NULL)
		right = getHeight(root->right);

	return (max(left, right) + 1);
}

// Recursive function to update sum[] array
// such that sum[i] stores the sum
// of all the elements at ith level
void calculateLevelSum(Node* node, int level, int sum[])
{
	if (node == NULL)
		return;

	// Add current node data to the sum
	// of the current node's level
	sum[level] += node->data;

	// Recursive call for left and right sub-tree
	calculateLevelSum(node->left, level + 1, sum);
	calculateLevelSum(node->right, level + 1, sum);
}

// Driver code
int main()
{
	// Create the binary tree
	Node* root = newNode(11);
	root->left = newNode(8);
	root->right = newNode(22);
	root->left->left = newNode(5);
	root->left->right = newNode(15);
	root->right->left = newNode(18);
	root->right->right = newNode(30);

	// Count of levels in the
	// given binary tree
	int levels = getHeight(root) + 1;

	// To store the sum at every level
	int sum[levels] = { 0 };
	calculateLevelSum(root, 0, sum);

	// Print the required sums
	printArr(sum, levels);

	return 0;
}
