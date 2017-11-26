Node* Insert(Node *head,int data){
        // Creates a temp to hold the last node and set last's data and next
    Node *last = new Node;

    last->data = data;
    last->next = NULL;

    // If the linked list is empty then set head = last
    if (head == NULL) {
        head = last;
    } 
    else {
        // Creates a temp node and sets it to head
        Node *temp = new Node;

        temp = head ; 

        // Uses temp to find the last node
        while (temp->next != NULL) {
            temp = temp->next;
        }

        // Appends the last node with last
        temp->next = last;
    }

    // Returns head of linked list
    return head;
}
// insert at the start of the list ; 
Node Insert(Node head,int x) {
    Node node = new Node();
    node.data = x;
    node.next = head;
    return node;
}

Node* InsertNth(Node *head, int data, int position)
{
    Node *add = new Node;
    add->data = data;
    add->next = NULL;
    
    if(head == NULL)
        head = add;
    else if(position == 0)
    {
        add->next = head;
        head = add;
    }
    else
    {
        Node *cur = head;
        int d = 1;
        while(cur != NULL)
        {
            if(d == position)
            {
                add->next = cur->next;
                cur->next = add;
                break;
            }
            cur = cur->next;
            d++;
        }
    }
    return head;
}