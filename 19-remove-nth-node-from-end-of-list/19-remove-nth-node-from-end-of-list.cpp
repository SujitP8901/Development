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
    int CountNodes(ListNode* head)
    {
        int iCnt = 0;
        while(head != NULL)
        {
            iCnt++;
            head = head->next;
        }
        
        return iCnt;
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == NULL)
        {
            return NULL;
        }
        
        int totalNodes = CountNodes(head);
        
        if(totalNodes == n)
        {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        
        int dis = totalNodes - n - 1; 
        
        ListNode* temp = head;
        
        while(dis != 0)
        {
            temp = temp->next;
            dis--;
        }
        
        ListNode* target = temp->next;
        
        temp->next = target->next;
        
        delete target;
        
        return head;       
        
    }
};