Node *addTwoNumbers(Node *l1, Node *l2)
{
    // Write your code here.
     Node *ptr = new Node(-1);     //new list;
     Node *temp = ptr;
        
        int c = 0;
        //traversing both list till one of the list not reaches NULL
        while (l1 != NULL ||  l2 != NULL || c )
        {
            int sum = 0;
            // if l1  is not null
            // add l1-> value to sum
            if(l1 != NULL)
            {
                sum += l1->data;
                l1 = l1 -> next;
            }
            
            // if l2  is not null
            // add l2-> value to sum
            if(l2 != NULL)
            {
                sum += l2->data;
                l2 = l2 -> next;
            }
            
            // add carry to sum
            sum += c;
            // carry is updated by sum/10 because for 18 , 
            // 18 / 10 is 1 which is the carry
            c = sum/10;
            // add sum% 10 to new node as it containg the sum
            Node *node = new Node(sum%10);
            temp -> next = node;
            temp = temp -> next;
        }
        return ptr -> next;
}