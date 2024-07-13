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
    node(int, node *);
    node(int);
};
node::node(int val, node *ptr)
{
    data = val;
    next = ptr;
}
node::node(int val)
{
    data = val;
    next = NULL;
}
class Queue
{
public:
    node *front;
    node *back;
    Queue();
    Queue(node *, node *);
    void enqueue(int);
    void dequeue();
    int peek();
    bool empty();
    void display();
};
bool Queue::empty()
{
    if (!front)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int Queue::peek()
{
    if (!front)
    {
        cout << "No Element In Queue" << endl;
        return INT_MIN;
    }
    else
    {
        return front->data;
    }
}
void Queue::enqueue(int x)
{
    if (!back)
    {
        node *newnode = new node(x);
        front = newnode;
        back = newnode;
    }
    else
    {
        node *newnode = new node(x);
        back->next = newnode;
        back = newnode;
    }
}
void Queue::dequeue()
{
    if (!front)
    {
        cout << "No Element In Queue" << endl;
        return;
    }
    else
    {
        node *temp = front;
        front = front->next;
        free(temp);
    }
}

Queue::Queue()
{
    front = NULL;
    back = NULL;
}
Queue::Queue(node *fr, node *bk)
{
    front = fr;
    back = bk;
}
void Queue::display()
{
    node *current = front;
    cout << "<<";
    while (current)
    {
        cout << "========";
        current = current->next;
    }
    if (!front)
    {
        cout << "========";
    }
    cout << "<<";
    cout << endl;
    cout << "<<";
    current = front;
    while (current)
    {
        printf("%5d <<", current->data);
        current = current->next;
    }
    if (!front)
    {
        cout << "        ";
    }
    cout << "<<";
    cout << endl;
    cout << "<<";
    current = front;
    while (current)
    {
        cout << "========";
        current = current->next;
    }
    if (!front)
    {
        cout << "========";
    }
    cout << "<<";
    cout << endl;
    cout << endl;
}
int main()
{
    Queue qu;
    qu.enqueue(1);
    qu.enqueue(2);
    qu.enqueue(3);
    qu.enqueue(4);
    qu.enqueue(5);
    qu.enqueue(6);
    qu.display();
    qu.dequeue();
    qu.dequeue();
    qu.dequeue();
    qu.dequeue();
    qu.dequeue();
    qu.dequeue();
    qu.dequeue();
    qu.display();
    cout << qu.peek() << endl;
    cout << qu.empty() << endl;
    return 0;
}