#include<bits/stdc++.h>
using namespace std;


  
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    
    ListNode* reverseLinkedList (ListNode* head) 
    {
        // add your logic here
        ListNode* prev;
        ListNode* cur;
        prev = NULL;
        cur = head;
        ListNode* succ = NULL;
        if(head == NULL)
        {
            return head;
        }
        while(cur != NULL)
        {
            succ = cur -> next;
            cur -> next = prev;
            prev = cur;
            cur = succ;
        }
        head = prev;
        return head;

    }
    
    ListNode* removeNodes(ListNode* head) 
    {
        
       
        if(head == NULL)
        {
            return head;
        }
        
        ListNode* store = reverseLinkedList(head);
        ListNode* temp = new ListNode(store -> val);
        ListNode* rescur = temp;
        
        while(store -> next != NULL)
        {
           if(store -> val > store -> next -> val)
           {
               store -> next = store -> next -> next;
           }
            else
            {
                store = store -> next;
                rescur -> next = new ListNode(store -> val);
                rescur = rescur -> next;
            }
        }
        ListNode* res = reverseLinkedList(temp);
        return res;
    }
    
};
