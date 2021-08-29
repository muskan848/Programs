/*
 * https://leetcode.com/problems/palindrome-linked-list/
 * Given the head of a singly linked list, return true if it is a palindrome.
 * Input: head = [1,2,2,1]
   Output: true
 * 
 * Muskan,1910990665
*/

struct ListNode* Reverse(struct ListNode* head)
{
    struct ListNode* current = head;
    struct ListNode* prev = NULL;
    struct ListNode* next = NULL;

    while(current != NULL)
    {
       next = current->next;
       current->next = prev;
       prev = current;
       current = next;
    }
        return prev;
}

bool isPalindrome(struct ListNode* head)
{
  struct ListNode* slow = head;
  struct ListNode* fast = head;

      while(fast->next!=NULL && fast->next->next!=NULL)
      {
         slow = slow->next;
         fast = fast->next->next;
      }

      struct ListNode* ans = Reverse(slow->next);

      while(ans!=NULL)
      {
          if(head->val != ans->val)
          {
                  return false;
          }
           head = head->next;
           ans = ans->next;
      }
    return true;
}




