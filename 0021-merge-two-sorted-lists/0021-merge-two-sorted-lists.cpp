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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//ek dummy node create karenge aur ek pointer jo hameha uske next ke point karega
        ListNode * result=new ListNode(-1);
        ListNode* tail=result;
        //list me koi bhi null ho sakta hai
        while(list1!=NULL&&list2!=NULL)
        {
           if(list1->val<=list2->val)
           {
              tail->next=list1;
              list1=list1->next;
           }
           else {
             tail->next=list2;
             list2=list2->next;
           }
           tail=tail->next;
        }//copy karne ke liye hai jo bach gya
        if(list1!=NULL) tail->next=list1;
        else tail->next=list2;
        return result->next;//result ke next ko hi return karenge kyunki next se hi list start hai
    }    
};