// // // #include <iostream>
// // // using namespace std;

// // // class node
// // // {
// // // public:
// // //     int val;
// // //     node *next;
// // //     node()
// // //     {
// // //         val = 0;
// // //         next = NULL;
// // //     }
// // //     node(int val)
// // //     {
// // //         this->val = val;
// // //         next = NULL;
// // //     }
// // //     node(int val, node *next)
// // //     {
// // //         this->val = val;
// // //         this->next = next;
// // //     }
// // //     node(node *pre, int val, node *next)
// // //     {
// // //         this->val = val;
// // //         this->next = next;
// // //     }
// // // };
// // // class MyLinkedList
// // // {
// // // public:
// // //     node *head;
// // //     MyLinkedList()
// // //     {
// // //         head = nullptr;
// // //     }

// // //     int get(int index)
// // //     {
// // //         node *temp = head;
// // //         int count = 0;
// // //         while (temp)
// // //         {
// // //             if (count == index)
// // //             {
// // //                 return temp->val;
// // //             }
// // //             temp = temp->next;
// // //             count++;
// // //         }
// // //         return -1;
// // //     }

// // //     void prepend(int val)
// // //     {
// // //         node *newNode = new node(val);
// // //         if (head == nullptr)
// // //         {
// // //             head = newNode;
// // //         }
// // //         else
// // //         {
// // //             newNode->next = head;
// // //             head = newNode;
// // //         }
// // //     }

// // //     void append(int val)
// // //     {
// // //         node *newnode = new node(val);
// // //         if (!head)
// // //         {
// // //             newnode->val = val;
// // //             head = newnode;
// // //         }
// // //         else
// // //         {
// // //             node *temp = head;
// // //             while (temp->next)
// // //             {
// // //                 temp = temp->next;
// // //             }
// // //             temp->next = newnode;
// // //         }
// // //     }

// // //     void addAtIndex(int index, int val)
// // //     {
// // //         node *temp = head;
// // //         int count = 0;
// // //         index--;
// // //         if (index == 0)
// // //         {
// // //             this->prepend(val);
// // //             return;
// // //         }
// // //         while (temp)
// // //         {
// // //             if (count == index)
// // //             {
// // //                 break;
// // //             }
// // //             temp = temp->next;
// // //             count++;
// // //         }
// // //         if (count >= index)
// // //         {
// // //             node *newnode = new node(val, temp->next);
// // //             temp->next = newnode;
// // //         }
// // //     }

// // //     void deleteAtIndex(int index)
// // //     {
// // //         node *temp = head;
// // //         int count = 0;
// // //         index--;
// // //         while (temp)
// // //         {
// // //             if (count == index)
// // //             {
// // //                 break;
// // //             }
// // //             temp = temp->next;
// // //             count++;
// // //         }
// // //         if (count >= index && temp->next)
// // //         {
// // //             temp->next = temp->next->next;
// // //         }
// // //     }
// // //     void print()
// // //     {
// // //         node *temp = head;
// // //         while (temp->next)
// // //         {
// // //             cout << temp->val << " ";
// // //             temp = temp->next;
// // //         }
// // //         cout << temp->val << " ";
// // //         cout << endl;
// // //     }
// // // };
// // // int main()
// // // {
// // //     MyLinkedList *list = new MyLinkedList();
// // //     for (int i = 1; i < 8; i++)
// // //     {
// // //         list->append(i);
// // //     }
// // //     list->print();
// // //     // cout << list->get(0);
// // // }

// // #include <bits/stdc++.h>
// // using namespace std;
// // class node
// // {
// // public:
// //     int val;
// //     node *next;
// //     node *down;
// //     node()
// //     {
// //         val = 0;
// //         next = NULL;
// //         down = NULL;
// //     }
// //     node(int val)
// //     {
// //         this->val = val;
// //         next = NULL;
// //         down = NULL;
// //     }
// //     node(int val, node *next)
// //     {
// //         this->val = val;
// //         this->next = next;
// //         this->down = NULL;
// //     }
// // };
// // class MyLinkedList
// // {
// // public:
// //     node *head;
// //     MyLinkedList()
// //     {
// //         head = nullptr;
// //     }
// //     int get(int index)
// //     {
// //         node *temp = head;
// //         int count = 0;
// //         while (temp)
// //         {
// //             if (count == index)
// //             {
// //                 return temp->val;
// //             }
// //             temp = temp->next;
// //             count++;
// //         }
// //         return -1;
// //     }

// //     void prepend(int val)
// //     {
// //         node *newNode = new node(val);
// //         if (head == nullptr)
// //         {
// //             head = newNode;
// //         }
// //         else
// //         {
// //             newNode->next = head;
// //             head = newNode;
// //         }
// //     }

// //     void append(int val)
// //     {
// //         node *newnode = new node(val);
// //         if (!head)
// //         {
// //             newnode->val = val;
// //             head = newnode;
// //         }
// //         else
// //         {
// //             node *temp = head;
// //             while (temp->next)
// //             {
// //                 temp = temp->next;
// //             }
// //             temp->next = newnode;
// //         }
// //     }

// //     void addAtIndex(int index, int val)
// //     {
// //         node *temp = head;
// //         int count = 0;
// //         index--;
// //         if (index == 0)
// //         {
// //             this->prepend(val);
// //             return;
// //         }
// //         while (temp)
// //         {
// //             if (count == index)
// //             {
// //                 break;
// //             }
// //             temp = temp->next;
// //             count++;
// //         }
// //         if (count >= index)
// //         {
// //             node *newnode = new node(val, temp->next);
// //             temp->next = newnode;
// //         }
// //     }

// //     void deleteAtIndex(int index)
// //     {
// //         node *temp = head;
// //         int count = 0;
// //         index--;
// //         while (temp)
// //         {
// //             if (count == index)
// //             {
// //                 break;
// //             }
// //             temp = temp->next;
// //             count++;
// //         }
// //         if (count >= index && temp->next)
// //         {
// //             temp->next = temp->next->next;
// //         }
// //     }
// //     void print()
// //     {
// //         node *temp = head;
// //         while (temp)
// //         {
// //             cout << temp->val << " ";
// //             temp = temp->next;
// //         }
// //         cout << endl;
// //     }
// //     node *findnodeval(int val)
// //     {
// //         node *temp = head;
// //         while (temp)
// //         {
// //             if (temp->val == val)
// //             {
// //                 return temp;
// //             }
// //             temp = temp->next;
// //         }
// //     }
// // };
// // int main()
// // {
// //     MyLinkedList *list = new MyLinkedList();
// //     for (int i = 1; i <= 5; i++)
// //     {
// //         list->append(i);
// //     }
// //     // list->print();
// //     MyLinkedList *temp = new MyLinkedList();
// //     for (int i = 6; i <= 8; i++)
// //     {
// //         temp->append(i);
// //     }
// //     // temp->print();
// //     list->head->down = temp->head;

// //     node *nodeval;
// //     nodeval = list->findnodeval(4);
// //     temp->head = NULL;
// //     for (int i = 9; i <= 10; i++)
// //     {
// //         temp->append(i);
// //     }
// //     // temp->print();
// //     nodeval->down = temp->head;
// //     nodeval = list->findnodeval(1);
// //     temp->head = NULL;
// //     for (int i = 11; i <= 15; i++)
// //     {
// //         temp->append(i);
// //     }
// //     // temp->print();
// //     nodeval->down->next->down = temp->head;
// //     nodeval = list->findnodeval(4);
// //     temp->head = NULL;
// //     for (int i = 16; i <= 20; i++)
// //     {
// //         temp->append(i);
// //     }
// //     // temp->print();
// //     nodeval->down->next->down = temp->head;
// //     free(temp);
// //     list->print();
// //     queue<node *> qu;
// //     vector<int> v;
// //     qu.emplace(list->head);
// //     while (qu.size())
// //     {
// //         node *temp = qu.front();
// //         while (temp)
// //         {
// //             v.push_back(temp->val);
// //             if (temp->down)
// //             {
// //                 qu.push(temp->down);
// //             }
// //             temp = temp->next;
// //         }
// //         qu.pop();
// //     }
// //     for (int i : v)
// //     {
// //         cout << i << " ";
// //     }
// // }
// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *left, *right;

//     Node() : val(0), left(NULL), right(NULL) {}
//     Node(int x) : val(x), left(NULL), right(NULL) {}
// };

// class Tree
// {
// private:
//     Node *root;
//     int count;
//     vector<int> arr;
//     int getNextValue()
//     {
//         if (count < arr.size())
//         {
//             return arr[count++];
//         }
//         cout << "Fallback in case count exceeds the array size" << endl;
//         return -1;
//     }
//     Node *createTree()
//     {
//         int x = getNextValue();
//         if (x == -1)
//         {
//             return NULL;
//         }
//         Node *newNode = new Node(x);
//         newNode->left = createTree();
//         newNode->right = createTree();
//         return newNode;
//     }
//     void preorder(Node *node)
//     {
//         if (!node)
//             return;
//         cout << node->val << " ";
//         preorder(node->left);
//         preorder(node->right);
//     }
//     void inorder(Node *node)
//     {
//         if (!node)
//             return;
//         inorder(node->left);
//         cout << node->val << " ";
//         inorder(node->right);
//     }
//     void postorder(Node *node)
//     {
//         if (!node)
//             return;
//         postorder(node->left);
//         postorder(node->right);
//         cout << node->val << " ";
//     }
//     int height(Node *node)
//     {
//         if (!node)
//         {
//             return 0;
//         }
//         return (max(height(node->left), height(node->right)) + 1);
//     }
//     int sizee(Node *node)
//     {
//         if (!node)
//         {
//             return 0;
//         }
//         return (sizee(node->left) + sizee(node->right) + 1);
//     }
//     int maximum(Node *node)
//     {
//         if (!node)
//         {
//             return INT_MIN;
//         }
//         int left = maximum(node->left);
//         int right = maximum(node->right);
//         return max(node->val, max(left, right));
//     }
//     int minium(Node *node)
//     {
//         if (!node)
//         {
//             return INT_MAX;
//         }
//         return min(node->val, min(minium(node->left), minium(node->right)));
//     }
//     void levelprint(Node *node, int level)
//     {
//         if (!node)
//         {
//             return;
//         }
//         else if (level == 1)
//         {
//             cout << node->val << " ";
//         }
//         else
//         {
//             levelprint(node->left, level - 1);
//             levelprint(node->right, level - 1);
//         }
//     }
//     void levelOrdered(Node *node)
//     {
//         int height = this->heightoftree();
//         for (int i = 1; i <= height; i++)
//         {
//             levelprint(node, i);
//         }
//     }
//     void TraversalwithQueue(Node *node)
//     {
//         if (!node)
//             return;

//         queue<Node *> qu;
//         qu.push(node);
//         qu.push(NULL);

//         while (!qu.empty())
//         {
//             Node *current = qu.front();
//             qu.pop();

//             if (!current)
//             {
//                 if (!qu.empty())
//                 {
//                     qu.push(NULL);
//                     cout << endl;
//                 }
//             }
//             else
//             {
//                 cout << current->val << " ";
//                 if (current->left)
//                     qu.push(current->left);
//                 if (current->right)
//                     qu.push(current->right);
//             }
//         }
//     }
//     void addZEROatLastNode(Node *temp, int heightOfTree)
//     {
//         Node *root = temp;
//         int presentHeightTree = 0;
//         if (root == nullptr)
//         {
//             return;
//         }
//         queue<Node *> que;
//         que.push(root);
//         que.push(nullptr);
//         while (!que.empty())
//         {
//             Node *node = que.front();
//             que.pop();
//             if (node != nullptr)
//             {
//                 if (node->left)
//                 {
//                     que.push(node->left);
//                 }
//                 else
//                 {
//                     if (presentHeightTree < heightOfTree)
//                     {
//                         Node *tem = new Node();
//                         node->left = tem;
//                         que.push(node->left);
//                     }
//                 }
//                 if (node->right)
//                 {
//                     que.push(node->right);
//                 }
//                 else
//                 {
//                     if (presentHeightTree < heightOfTree)
//                     {
//                         Node *tem = new Node();
//                         node->right = tem;
//                         que.push(node->right);
//                     }
//                 }
//             }
//             else if (!que.empty())
//             {
//                 que.push(nullptr);
//                 presentHeightTree++;
//             }
//         }
//     }
//     void Structure(Node *node, int depth)
//     {
//         if (node)
//         {
//             Structure(node->right, depth + 1);
//             if (node->val == 0)
//             {
//                 cout << string(9 * depth, ' ') << "|" << string(5, '~') << " " << "-  " << endl;
//             }
//             else
//             {
//                 cout << string(9 * depth, ' ') << "|" << string(5, '~') << " " << node->val << "  " << endl;
//             }
//             Structure(node->left, depth + 1);
//         }
//     }
//     int solve(int l, Node *root)
//     {
//         if (!root)
//             return 0;
//         if (l && !root->left && !root->right)
//         {
//             return root->val;
//         }
//         int le = solve(1, root->left);
//         int r = solve(0, root->right);
//         return le + r;
//     }

// public:
//     Tree(const vector<int> &inputArr) : root(NULL), count(0), arr(inputArr) {}
//     void buildTree()
//     {
//         root = createTree();
//     }

//     void preorderTraversal()
//     {
//         cout << "PreorderTraversal : ";
//         preorder(root);
//     }
//     void inorderTraversal()
//     {
//         cout << "InorderTraversal : ";
//         inorder(root);
//     }
//     void postorderTraversal()
//     {
//         cout << "PostorderTraversal : ";
//         postorder(root);
//     }
//     int heightoftree()
//     {
//         height(root);
//     }
//     int sizeoftree()
//     {
//         sizee(root);
//     }
//     int maxintree()
//     {
//         maximum(root);
//     }
//     int minintree()
//     {
//         minium(root);
//     }
//     void levelOrderedTraversal()
//     {
//         cout << "levelOrderedTraversal : ";
//         levelOrdered(root);
//     }
//     void printTreeStructure()
//     {
//         Node *temp = root;
//         addZEROatLastNode(temp, (this->heightoftree() - 1));
//         Structure(temp, 0);
//     }
//     void levelOrderedTraversalwithQueue()
//     {
//         cout << "levelOrderedTraversalWithQueue : " << endl;
//         TraversalwithQueue(root);
//     }
//     int sumOfLeftLeaves()
//     {
//         cout << "sumOfLeftLeaves : ";
//         return solve(0, root);
//     }
// };

// int main()
// {
//     vector<int> inputArr = {2, 4, 7, -1, -1, -1, 1, 8, -1, -1, 3, -1, -1};
//     Tree t1(inputArr);
//     t1.buildTree();
//     t1.preorderTraversal();
//     cout << endl;
//     t1.inorderTraversal();
//     cout << endl;
//     t1.postorderTraversal();
//     cout << endl;
//     cout << "Height of Node : " << t1.heightoftree() << endl;
//     cout << "size of Node : " << t1.sizeoftree() << endl;
//     cout << "maximum in Node : " << t1.maxintree() << endl;
//     cout << "minimum in Node : " << t1.minintree() << endl;
//     t1.levelOrderedTraversal();
//     cout << endl;
//     t1.levelOrderedTraversalwithQueue();
//     cout << endl;
//     cout << t1.sumOfLeftLeaves();
//     cout << endl;
//     t1.printTreeStructure();
//     cout << endl;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &v, int low, int mid, int high)
{
    vector<int> temp;
    int left = low, right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (v[left] <= v[right])
        {
            temp.emplace_back(v[left]);
            left++;
        }
        else
        {

            temp.emplace_back(v[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.emplace_back(v[left]);
        left++;
    }
    while (right <= high)
    {
        temp.emplace_back(v[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        v[i] = temp[i - low];
    }
}
void ms(vector<int> &v, int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int mid = (low + high) / 2;
    ms(v, low, mid);
    ms(v, mid + 1, high);
    merge(v, low, mid, high);
}
int fun(vector<int> &v, int low, int high)
{
    // for (int i = low; i <= high; i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    int left = low, right = high;
    int pivot = v[low];
    while (left < right)
    {
        while (v[left] <= pivot && left <= high - 1)
        {
            left++;
        }
        while (v[right] > pivot && right >= low + 1)
        {
            right--;
        }
        if (left < right)
        {
            swap(v[left], v[right]);
        }
    }
    swap(v[low], v[right]);
    return right;
}
void qs(vector<int> &v, int low, int high)
{
    if (low < high)
    {
        int pos = fun(v, low, high);
        cout << pos << endl;
        cout << "qs(v, low, pos - 1) : " << low << " " << pos - 1 << endl;
        qs(v, low, pos - 1);
        cout << "qs(v, pos + 1, high) : " << pos + 1 << " " << high << endl;
        qs(v, pos + 1, high);
    }
}
int main()
{
    system("cls");
    vector<int> v{4, 6, 2, 5, 7, 9, 1, 3};
    // for (int i : v)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    // ms(v, 0, v.size() - 1);
    qs(v, 0, v.size() - 1);
    cout << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    return 0;
}