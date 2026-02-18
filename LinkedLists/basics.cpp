// LENGTH
class Solution
{
public:
    int getCount(Node *head)
    {
        // Code here
        int count = 0;
        Node *temp = head;
        while (temp != nullptr)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }
};


// insert at end
class Solution
{
public:
    Node *insertAtEnd(Node *head, int x)
    {
        // Code here
        Node *newNode = new Node(x);
        if (head == nullptr)
        {
            return newNode;
        }
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = nullptr;
        return head;
    }
};


// insert at head
class Solution
{
public:
    ListNode *insertAtHead(ListNode *&head, int X)
    {
        // your code goes here
        ListNode *newHead = new ListNode(X);
        newHead->next = head;
        head = newHead;
        return newHead;
    }
};

// insert node before given node

Node *insertBeforeKey(Node *head, int key, int newData)
{

    // If the list is empty
    if (head == nullptr)
    {
        return nullptr;
    }

    // Special case: if the key is at the head
    if (head->data == key)
    {
        Node *new_node = new Node(newData);
        new_node->next = head;
        return new_node;
    }

    // Initialize current and previous pointers
    Node *curr = head;
    Node *prev = nullptr;

    // Traverse the list to find the key
    while (curr != nullptr && curr->data != key)
    {
        prev = curr;
        curr = curr->next;
    }

    // If the key was found
    if (curr != nullptr)
    {
        Node *new_node = new Node(newData);
        prev->next = new_node;
        new_node->next = curr;
    }

    return head;
}


// delete head
class Solution
{
public:
    ListNode *deleteHead(ListNode *&head)
    {
        // your code goes here
        if (!head || !head->next)
        {
            delete head;
            return nullptr;
        }
        ListNode *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
};