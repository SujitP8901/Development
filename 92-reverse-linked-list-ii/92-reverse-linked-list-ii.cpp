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
    void reverse(ListNode* head, ListNode* tail)
    {
        ListNode* curr = head;
        ListNode* forward = NULL;
        ListNode* prev = NULL;
        
        while(prev != tail)
        {
            forward = curr->next;
            
            curr->next = prev;
            
            prev = curr;
            curr = forward;
        }
    }
    
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp1 = head;
        int iCnt = 1;
        ListNode* prev = NULL;
        ListNode* forward = NULL;
        
        while(iCnt != left)
        {
            prev = temp1;
            temp1 = temp1->next;
            iCnt++;
        }
        
        ListNode* temp2 = head;
        iCnt = 1;
        while(iCnt != right)
        {
            temp2 = temp2->next;
            iCnt++;
        }
        
        forward = temp2->next;
        
        reverse(temp1, temp2);
        
        if(prev != NULL)
        {
            prev->next = temp2;
        }
        else
        {
            head = temp2;
        }
        temp1->next = forward;
        
        return head;
        
    }
};