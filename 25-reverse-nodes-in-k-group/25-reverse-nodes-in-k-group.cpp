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
    void reverse(ListNode* head, ListNode* tail)
    {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = NULL;
        
        while(prev != tail)
        {
            forward = curr->next;
            
            curr->next = prev;
            
            prev = curr;
            curr = forward;
        }
    }
    
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        int iCnt = 1;
        ListNode* temp = head;
        ListNode* newHead = head;
        ListNode* newTail = head;
        ListNode* forward = NULL;
        ListNode* finalHead = head;
        ListNode* prevTail = NULL;
        
        while(iCnt != k)
        {
            iCnt++;
            finalHead = finalHead->next;
        }
        
        iCnt = 1;
        while(temp != NULL)
        {
            if(iCnt == k)
            {
                forward = temp->next;
                newTail = temp;
                reverse(newHead, newTail);
                if(prevTail != NULL)
                {
                    prevTail->next = newTail;
                }
                prevTail = newHead;
                newHead->next = forward;
                temp = forward;
                newHead = temp;
                iCnt = 1;
            }
            else
            {
                iCnt++;
                temp = temp->next;
            }
        }
        return finalHead;
    }
};