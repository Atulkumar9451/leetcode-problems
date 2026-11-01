/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {

       if(head == nullptr || head->next == nullptr) return head;

       ListNode* mid = getMid(head);

       ListNode * rightHead = mid->next;

       mid->next = nullptr;

       ListNode* sortLeft =  sortList(head);

       ListNode* sortRight =  sortList(rightHead);

        return merge (sortLeft, sortRight);
         

    }



    ListNode * getMid(ListNode* head)
    {
        ListNode* slow = head;

        ListNode* fast = head->next;
        while(fast!=nullptr && fast->next!=nullptr)
        {
            slow = slow->next;
            fast= fast->next->next;

        }

        return slow;
    }

    ListNode * merge(ListNode * sortLeft , ListNode * sortRight)
    {
        ListNode* dummy = new ListNode(-1);

        ListNode * curr = dummy;

        while(sortLeft!=nullptr && sortRight!=nullptr)
        {
            if(sortLeft->val<=sortRight->val)
            {
               curr->next = sortLeft;
               sortLeft=sortLeft->next;
               
            }

            else
            {
                curr->next = sortRight;
                sortRight = sortRight->next;

            } 

            curr=curr->next;

        }

        if(sortLeft!=nullptr) curr->next = sortLeft;

        if(sortRight!=nullptr) curr->next = sortRight;

         return dummy->next;

    }
};