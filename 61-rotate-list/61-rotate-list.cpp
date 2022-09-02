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
    int countNodes(ListNode* head)
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
    ListNode* rotateRight(ListNode* head, int k) {
        int length = countNodes(head);
        ListNode* temp = head;
        int traverse = 0;
        
        if(head == NULL)
            return head;
        
        if(k >= length)
        {
            k = k % length;
        }
        
        traverse = length - k;
        
        if(traverse % length == 0)
        {
            return head;
        }
        
        while(traverse != 1)
        {
            temp = temp->next;
            traverse--;
        }
        
        ListNode* temp2 = temp->next;
        ListNode* temp3 = temp2;
        
        temp->next = NULL;
        
        while(temp3->next != NULL)
        {
            temp3 = temp3->next;
        }
        
        temp3->next = head;
        
        return temp2;
    }
};