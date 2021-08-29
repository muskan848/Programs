/*
 * https://leetcode.com/problems/reverse-linked-list-ii/
 * Given the head of a singly linked list and two integers left and right where left <= right, reverse the nodes of 
   list from position left to position right, and return the reversed list.
 * Input: head = [1,2,3,4,5], left = 2, right = 4
   Output: [1,4,3,2,5]

 * Muskan,1910990665
*/

struct ListNode* reverse(struct ListNode* head,int c,int right)
{
    struct ListNode* current = head;
    struct ListNode* temp = head;

    struct ListNode* prev = NULL;
    struct ListNode* next = NULL;

       while(current!=NULL && c!=right )
          {
               next=current->next;
               current->next=prev;
               prev=current;
               current=next;
               c++;
          }
        temp->next=current;
        return prev;
}

struct ListNode* reverseBetween(struct ListNode* head, int left, int right)
{
        if(left==right)
        {
          return head;
        }

        if(left==1)
        {
          return reverse(head,0,right);
        }

   int c=1;
   struct ListNode* temp = head;
   struct ListNode* temp1 = NULL;


    while(c!=left-1 && temp!=NULL)
    {
        c++;
        temp=temp->next;
    }
       temp1=temp;

      temp1->next = reverse(temp->next,c,right);

      return head;
}


  

