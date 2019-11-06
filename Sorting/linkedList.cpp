#include <iostream>
using namespace std;

struct node
{

    int data;
    struct node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    };
};

class LinkedList
{
private:
    node *head, *tail;

public:
    LinkedList()
    {
        head = NULL;
        tail = NULL;
    };

    void addNode(int n)
    {
        node *temp = new node(n);

        if (head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = tail->next;
        }
    };

    void traversal()
    {
        node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }

    node *returnHead()
    {
        return head;
    }

    void traversalRecursion(node *head)
    {
        if (head == NULL)
        {
            cout << "END OF LIST" << endl;
        }
        else
        {
            cout << head->data << endl;
            traversalRecursion(head->next);
        }
    }

    void del(node *before_del)
    {
        node *temp = before_del->next;
        before_del->next = temp->next;
        delete temp;
    };
};

int main()
{
    LinkedList list;
    list.addNode(5);
    list.addNode(6);
    cout << "Traversal" << endl;
    list.traversal();
    node *temp = list.returnHead();
    cout << "Deletion" << endl;
    list.del(temp);
    cout << "Recursion" << endl;
    list.traversalRecursion(temp);
    return 0;
};