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
    int countNodes(ListNode* head)
    {
        int iCnt = 0;
        ListNode* temp = head;
        
        while(temp != NULL)
        {
            iCnt++;
            temp = temp->next;
        }
        return iCnt;
    }
public:
    ListNode* swapNodes(ListNode* head, int k) {
        int totalNodes = countNodes(head);
        int iCnt = 1;
        
        ListNode* pos1 = head;
        ListNode* pos2 = head;
        
        while(iCnt != k)
        {
            pos1 = pos1->next;
            iCnt++;
        }
        
        iCnt = 1;
        
        while(iCnt != (totalNodes-k+1))
        {
            pos2 = pos2->next;
            iCnt++;
        }
        
        swap(pos1->val, pos2->val);
        
        return head;
    }
};