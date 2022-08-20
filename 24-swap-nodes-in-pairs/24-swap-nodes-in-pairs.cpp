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
private:
    void solve(ListNode* curr, ListNode* forward)
    {
        if(curr == NULL || forward == NULL)
        {
            return;
        }
        
        swap(curr->val, forward->val);
        
        if(forward->next != NULL)
        {
            curr = forward->next;
            forward = curr->next;
            
            solve(curr, forward);
        }
        else
        {
            return;
        }
        
    }
    
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL)
        {
            return head;
        }
            
        ListNode* curr = head;
        ListNode* forward = head->next;
        
        solve(curr, forward);
        
        return head;
    }
};