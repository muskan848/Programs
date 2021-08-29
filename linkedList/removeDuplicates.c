/*
 * https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/
 *
 * Given the head of a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers   from the original list. Return the linked list sorted as well. 
 *  Input: head = [1,2,3,3,4,4,5]
    Output: [1,2,5]
 *
 * Muskan,1910990665
*/



struct ListNode* deleteDuplicates(struct ListNode* b)
{

    struct ListNode *dummy = malloc(sizeof(struct ListNode));
    dummy->val = -1;
    dummy->next= b;

     struct ListNode *a = dummy;


       while(b!=NULL)
       {
           if(b->next!=NULL && b->val == b->next->val)
           {
              while(b->next!=NULL && b->val == b->next->val)
              {
                  b=b->next;
              }
                 a->next=b->next;
           }
           else
           {
               a=a->next;
           }
               b=b->next;
       }

        return dummy->next;
}
 

