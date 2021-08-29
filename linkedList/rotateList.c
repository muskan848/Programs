/*
 * https://leetcode.com/problems/rotate-list/
 * Given the head of a linked list, rotate the list to the right by k places.
 * Input: head = [1,2,3,4,5], k = 2
   Output: [4,5,1,2,3]

 * Muskan,1910990665
*/

struct ListNode* rotateRight(struct ListNode* head, int k)
{

        if(head == NULL || k == 0) {
        return head;}

        struct ListNode* p=head;
        int c=1;

         while(p->next!=NULL)
         {
             p=p->next;
             c++;
         }

        p->next=head;
        k=k%c;

        for(int i=0;i<c-k;i++)
        {
           p=p->next;
        }

    head = p->next;
    p->next = NULL;
    return head;
}
