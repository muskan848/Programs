/*
 * https://leetcode.com/problems/remove-nth-node-from-end-of-list/
 * Given the head of a linked list, remove the nth node from the end of the list and return its head.
 * Input: head = [1,2,3,4,5], n = 2
   Output: [1,2,3,5]

 * Muskan,1910990665
*/

struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
{
        if(head->next==NULL )return NULL;

        struct ListNode* a=head;
        struct ListNode* b=head;

       while(n--)
       {
           b=b->next;
       }

        if(b==NULL)
        {
           return head->next;
        }

        while(b->next!=NULL)
        {
                a=a->next;
                b=b->next;
        }

        a->next = a->next->next;


        return head;
}



