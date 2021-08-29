/*
 * https://leetcode.com/problems/linked-list-cycle-ii/
 * Given a linked list, return the node where the cycle begins. If there is no cycle, return null.
 * pos is not passed as a parameter.
 * Input: head = [3,2,0,-4], pos = 1
   Output: tail connects to node index 1
   Explanation: There is a cycle in the linked list, where tail connects to the second node.
 
 * Muskan,191090665
*/   


struct ListNode *detectCycle(struct ListNode *head)
{
        int temp=0;

    struct ListNode* slow =head;
    struct ListNode* fast =head;

    while(fast!=NULL && fast->next!=NULL)
    {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
               temp=1;
                break;
            }
    }

    if(temp==0)
    {
       return NULL;
    }

    slow=head;


    while(slow!=fast)
    {
        slow=slow->next;
        fast=fast->next;
    }

    return slow;
}
