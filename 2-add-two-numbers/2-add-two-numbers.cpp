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
    void InsertNode(ListNode*& head, ListNode*& tail, int value)
    {
        ListNode* newn = new ListNode(value);
        
        if(head == NULL)
        {
            head = newn;
            tail = newn;
        }
        else
        {
            tail->next = newn;
            tail = newn;
        }
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ansHead = NULL;
        ListNode* ansTail = NULL;
        
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        
        int carry = 0, sum = 0, value = 0, no1 = 0, no2 = 0;
        
        while(temp1 != NULL || temp2 != NULL || carry != 0)
        {
            if(temp1 != NULL)
            {
                no1 = temp1->val;
                temp1 = temp1->next;
            }
            else
            {
                no1 = 0;
            }
            
            if(temp2 != NULL)
            {
                no2 = temp2->val;
                temp2 = temp2->next; 
            }
            else
            {
                no2 = 0;
            }
            
            sum = no1 + no2 + carry;
            
            value = sum % 10;
            carry = sum / 10;
            
            InsertNode(ansHead, ansTail, value);
                
        }
        
        return ansHead;
    }
};