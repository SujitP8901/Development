/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
private:
    int linkedListLength(ListNode* head)
    {
        ListNode* temp = head;
        int iCnt = 0;
        
        while(temp != NULL)
        {
            iCnt++;
            temp = temp->next;
        }
        
        return iCnt;
    }
    
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len1 = linkedListLength(headA);
        int len2 = linkedListLength(headB);
        ListNode* temp1 = NULL;
        ListNode* temp2 = NULL;
        ListNode* ansNode = NULL;
        int diff = 0;
        
        if(len1 > len2)
        {
            diff = len1-len2;
            temp1 = headA;
            temp2 = headB;
        }
        else
        {
            diff = len2-len1;
            temp1 = headB;
            temp2 = headA;
        }
        
        while(diff--)
        {
            temp1 = temp1->next;
        }
        
        while((temp1 != NULL) && (temp2 != NULL))
        {
            if(temp1 == temp2)
            {
                ansNode = temp1;
                break;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return ansNode;
    }
};