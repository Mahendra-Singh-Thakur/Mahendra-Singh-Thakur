#include <iostream>
#include <climits>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;
class node
{
public:
    node *left;
    int data;
    node *right;
    node(int val)
    {
        left = NULL;
        data = val;
        right = NULL;
    }
};
void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
node *maketree1(node *root, int n, int x)
{
    if (n + 1 == x)
    {
        return NULL;
    }
    root->left = maketree1(root->left, n, x++);
    cin >> root->data;
    root->right = maketree1(root->right, n, x++);
}
node *maketree(int n)
{
    if (n == 0)
    {
        return nullptr;
    }

    int inputData;
    cin >> inputData;
    node *newNode = new node(inputData);
    // newNode->data = inputData;

    int leftSize = n / 2;
    int rightSize = n - leftSize - 1;

    newNode->left = maketree(leftSize);
    newNode->right = maketree(rightSize);

    return newNode;
}
int main()
{
    int n = 2;
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    node *newroot = maketree(7);
    // preorder(newroot);
    preorder(newroot);
    cout << endl;
    inorder(newroot);
    cout << endl;
    postorder(newroot);
    return 0;
}