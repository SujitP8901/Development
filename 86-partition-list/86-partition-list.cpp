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
    ListNode* partition(ListNode* head, int x) {
        ListNode* lessX = new ListNode(-1);
        ListNode* greaterX = new ListNode(-1);
        
        ListNode* newn = NULL;
        
        ListNode* lessXTail = lessX;
        ListNode* greaterXTail = greaterX;
        
        ListNode* temp = head;
        ListNode* ans = NULL;
        
        while(temp != NULL)
        {
            newn = new ListNode(temp->val);
            if(temp->val < x)
            {
                lessXTail->next = newn;
                lessXTail = newn;
            }
            else
            {
                greaterXTail->next = newn;
                greaterXTail = newn;
            }
            
            temp = temp->next;
        }
        
        lessXTail->next = greaterX->next;
        
        delete greaterX;
        
        ans = lessX->next;
        
        delete lessX;
        
        return ans;
    }
};