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
public:
    ListNode* swap(ListNode* head){
        ListNode* first=head;
        ListNode* second=head->next;
        first->next=second->next;
        second->next=first;
        return second;
    }
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr ||head->next==nullptr){
            return head;
        }
        ListNode* temp=head;
        ListNode* dummy=new ListNode(0);
        ListNode* helper=dummy;
        while(temp!=nullptr && temp->next!=nullptr){
            helper->next=swap(temp);
            helper=helper->next->next;
            temp=temp->next;
        }
        return dummy->next;
    }
};