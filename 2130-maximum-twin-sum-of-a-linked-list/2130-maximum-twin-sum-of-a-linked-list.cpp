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
private :
    ListNode* findMiddle(ListNode* head)
    {
        ListNode* fast = head;
        ListNode* slow = head;
        
        while((fast != NULL) && (fast->next != NULL))
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return slow;
    }
    
    ListNode* reverse(ListNode* head)
    {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = NULL;
        
        while(curr != NULL)
        {
            forward = curr->next;
            
            curr->next = prev;
            
            prev = curr;
            curr= forward;
        }
        
        return prev;
    }

public:
    int pairSum(ListNode* head) {
        ListNode* middle = findMiddle(head);
        
        ListNode* revMiddle = reverse(middle);
        
        ListNode* temp1 = head;
        ListNode* temp2 = revMiddle;
        
        int maxSum = 0, sum = 0;
        
        while(temp2 != NULL)
        {
            sum = (temp1->val) + (temp2->val);
            
            if(sum > maxSum)
            {
                maxSum = sum;
            }
            
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        
        return maxSum;
    }
};