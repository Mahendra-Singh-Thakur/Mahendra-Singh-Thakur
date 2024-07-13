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

    int data;
    node *next;

    node(int value, node *ptr)
    {
        data = value;
        next = ptr;
    }
};


class LinkedList
{
public:
    node *head;

    LinkedList()
    {
        head = NULL;
    }

    void append(int data)
    {
        if (head == NULL)
        {
            node *newNode = new node(data, NULL);

            head = newNode;
        }
        else
        {
            // node *newNode = new node(data, head);
            // head = newNode;
            node *newNode = new node(data, NULL);
            node *current = head;
            while (current->next)
            {
                current = current->next;
            }
            current->next = newNode;
        }
    }
    void makeCycle(int x)
    {
        node *temp1 = head;
        node *temp2 = NULL;
        int count = 0;
        while (temp1->next != NULL)
        {
            if (count == x - 1)
            {
                temp2 = temp1;
            }
            count++;
            temp1 = temp1->next;
        }
        temp1->next = temp2;
    }
    void reverse()
    {

        node *Previous = NULL;
        node *current = head;
        node *NextPtr = NULL;
        while (current != NULL)
        {
            NextPtr = current->next;
            current->next = Previous;
            Previous = current;
            current = NextPtr;
        }
        head = Previous;
        // cout<< head <<endl;
    }
    int check = 1;
    bool checkCycle()
    {
        node *fast = NULL;
        node *slow = NULL;
        if ((head != NULL) && (head->next != NULL))
        {
            slow = head->next;
            if (head->next->next != NULL)
            {
                fast = head->next->next;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
        while ((fast != NULL) && (fast->next != NULL) && (fast->next->next != NULL))
        {
            if (fast == slow)
            {
                if (check == 0)
                {
                    return 1;
                }
                cout << "CYCLE IS PRESENT" << endl;
                cout << "You want to remove <ENTER = 1> IF not <ENTER = 0>  :  ";
                cin >> check;
                if (check == 1)
                {
                    fast = head;
                    while (fast->next != slow->next)
                    {
                        fast = fast->next;
                        slow = slow->next;
                    }
                    slow->next = NULL;
                    cout << "CYCLE REMOVED SUCCESSFULLY" << endl;
                }
                else
                {
                    return 1;
                }
                return 0;
            }

            slow = slow->next;
            fast = fast->next->next;
        }
        return 0;
    }
    void convertIntoEvenOdd()
    {
        // display();
        if (!head)
        {
            return;
        }
        else if (!(head->next))
        {
            return;
        }
        node *odd = head;
        node *even = head->next;
        node *oddlist = odd;
        node *oddtemp = odd;
        node *evenlist = even;
        node *eventemp = even;
        while (1)
        {
            if (!(odd->next->next))
            {
                break;
            }
            else
            {
                odd = odd->next->next;
            }
            if (!(even->next->next))
            {
                oddtemp->next = odd;
                oddtemp = oddtemp->next;
                break;
            }
            else
            {
                even = even->next->next;
            }
            oddtemp->next = odd;
            oddtemp = oddtemp->next;
            eventemp->next = even;
            eventemp = eventemp->next;
        }
        oddtemp->next = NULL;
        eventemp->next = oddlist;
        head = evenlist;

        // node*odd=head;
        // node*even=head->next;
        // node*evenstart=even;
        // while(odd->next!=NULL&even->next!=NULL)
        // {
        //     odd->next=even->next;
        //     odd=odd->next;
        //     even->next=odd->next;
        //     even=even->next;
        // }
        // odd->next=evenstart;
        // if(odd->next==NULL)
        // {
        //     even->next=NULL;
        // }
    }
    void appendKNodeFromFront(int n)
    {
        node *temp = head;
        node *NextPtr;
        node *PrePtr;
        int count = 1;
        while (temp != nullptr)
        {
            if (count == n)
            {
                NextPtr = temp->next;
                PrePtr = temp;
                temp->next = nullptr;
                temp = NextPtr;
                break;
            }
            temp = temp->next;
            count++;
        }
        node *oldHead = head;
        head = temp;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = oldHead;
        while (temp != PrePtr)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        display();
    }
    void display()
    {
        node *current = head;
        while (current)
        {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "NULL" << endl;
    }
    node *reverseByrecursion(node *curr)
    {
        if (curr == NULL || curr->next == NULL)
        {
            head->next = NULL;
            head = curr;
            return curr;
        }
        return (reverseByrecursion(curr->next)->next = curr);
    }
    int findMiddle()
    {
        node *fast = head;
        node *slow = head;
        while ((fast != NULL) && (fast->next != NULL))
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow->data;
    }
};
node *reverseKNode(node *head, int k)
{
    if (head == NULL)
    {
        return head;
    }
    node *Previous = NULL;
    node *current = head;
    node *NextPtr = NULL;
    int count = 0;
    while ((k > count) && (current != NULL))
    {
        NextPtr = current->next;
        current->next = Previous;
        Previous = current;
        current = NextPtr;
        count++;
    }
    // head = Previous;
    head->next = reverseKNode(NextPtr, k);
    return Previous;
}
int main()
{
    LinkedList list1;
    int size = 10;
    cout << "size = ";
    cin >> size;
    for (int i = 1; i <= size; i++)
    {
        list1.append(i);
    }
    list1.display();
    int x = 0;
    cout << "x = ";
    cin >> x;
    if ((x < size) && (x > 2))
    {
        cout << "Cycle =" << list1.checkCycle() << endl;
        list1.makeCycle(x);
        cout << "Cycle =" << list1.checkCycle() << endl;
    }
    else
    {
        cout << "EXEED Linked list size" << endl;
    }
    list1.appendKNodeFromFront(1%size);
    list1.convertIntoEvenOdd();
    list1.display();
    list1.reverse();
    list1.display();
    list1.reverseByrecursion(list1.head);
    cout << "list1.findMiddle() = " << list1.findMiddle() << endl;
    // newlist.display();
    list1.display();
    LinkedList newlist;
    newlist.head = reverseKNode(list1.head, 8);
    newlist.display();

    return 0;
}