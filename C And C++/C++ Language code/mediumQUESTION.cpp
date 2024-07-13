#include <iostream>
using namespace std;

class node
{
public:
    int val;
    node *next;
    node()
    {
        val = 0;
        next = NULL;
    }
    /*******************************************************************************/
    node *deletenode(node *pointer1, node *pointer2)
    {
        pointer1->next = pointer2->next;
        return pointer1->next;
    }

    node *HELPER(node *head)
    {
        if (head->next->next->next == NULL)
        {
            if (head->next->val < head->next->next->val)
            {
                return deletenode(head, head->next);
            }
            return head->next;
        }
        struct node *last = HELPER(head->next);
        if (head->next->val < last->val)
        {
            return deletenode(head, head->next);
        }
        else
        {
            return head->next;
        }
    }
    node *removeNodes(node *head)
    {
        if (head->val < (HELPER(head))->val)
        {
            return deletenode(head, head);
        }
        else
        {
            return head;
        }
    }
    node *swapend(node *head)
    {
        node *temp;
        temp = head->next;
        head->next->next = head;
        head->next = NULL;
        return temp;
    }
    node *swapmid(node *head, node *returnNode)
    {
        node *temp;
        temp = head->next;
        head->next->next = head;
        head->next = returnNode;
        return temp;
    }
    node *helper(node *head)
    {
        if (head->next == NULL)
        {
            return head;
        }
        if (head->next->next == NULL)
        {
            return swapend(head);
        }
        struct node *lastptr = helper(head->next->next);
        return swapmid(head, lastptr);
    }
    /*******************************************************************************/
    node *removeElements(node *head, int val)
    {
        if (head == NULL)
        {
            return NULL;
        }
        struct node *last = removeElements(head->next, val);
        if (head->val == val)
        {
            head->next = last;
            return last;
        }
        else
        {

            head->next = last;
            return head;
        }
    }
    node *reverseList(node *head)
    {
        if (head == nullptr || head->next == nullptr)
        {
            return head;
        }
        struct node *lastnodeptr;
        lastnodeptr = reverseList(head->next);
        head->next->next = head;
        head->next = nullptr;
        return lastnodeptr;
    }
    void print(node *head)
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
    }

    node *swapPairs(node *head)
    {
        if (head == NULL)
        {
            return head;
        }
        else if (head->next == NULL)
        {
            return head;
        }
        else if (head->next->next == NULL)
        {
            return swapend(head);
        }
        else
        {
            return helper(head);
        }
    }
};

int main()
{
    node *head = NULL;
    int check = 8;
    do
    {
        node *newnode;
        newnode = new node;
        newnode->val = check;
        newnode->next = head;
        head = newnode;
        check--;
    } while (check);
    node *temp;
    head->print(head);
    cout << endl;
    cout << "removeElements : ";
    temp = head->removeElements(head, 5);
    head->print(temp);
    cout << endl;
    cout << "swapPairs : ";
    temp = head->swapPairs(temp);
    head->print(temp);
    cout << endl;
    cout << "reverseList : ";
    temp = head->reverseList(temp);
    head->print(temp);
    cout << endl;
    cout << "removeNodes : ";
    temp = head->removeNodes(temp);
    head->print(temp);
    cout << endl;
    return 0;
}