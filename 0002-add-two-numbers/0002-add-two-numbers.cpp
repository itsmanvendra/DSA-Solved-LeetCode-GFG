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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
          ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        int carry = 0;
        ListNode* n = new ListNode(0);
        ListNode* head1 = n;
        ListNode* tail1 = n;
        while(temp1 != NULL && temp2 != NULL){
            int x  = temp1->val + temp2->val;
            x = x+carry;
            carry = x/10;
            x = x%10;
            ListNode* p = new ListNode(x);
            tail1->next = p;
            tail1 = tail1->next;
            temp1 = temp1->next;
            temp2 = temp2->next;


        }
        while(temp1 == NULL && temp2 != NULL){
            int x = temp2->val;
            x = x+carry;
            carry = x/10;
            x = x%10;
            ListNode* p = new ListNode(x);
            tail1->next = p;
            tail1 = tail1->next;
            temp2 = temp2->next;
        }
        while(temp1 != NULL && temp2 == NULL){
            int x = temp1->val;
            x = x+carry;
            carry = x/10;
            x = x%10;
            ListNode* p = new ListNode(x);
            tail1->next = p;
            tail1 = tail1->next;
            temp1 = temp1->next;
        }
        if(temp1 == NULL && temp2 == NULL && carry != 0){
            ListNode* p = new ListNode(carry);
            tail1->next = p;
            tail1 = tail1->next;
        }
        return head1->next;
        
    }
    
};