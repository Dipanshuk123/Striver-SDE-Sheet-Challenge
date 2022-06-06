LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
     if (head == NULL || head->next == NULL) 
    {
        return head;
    }
    // Write your code here
    LinkedListNode<int> *p= NULL, *curr = head , *n = head->next;
    while(curr!=NULL){
        curr->next =p;
        p=curr;
        curr=n;
        if(n!=NULL){
            n=n->next;
        }
    }
    return p;
}