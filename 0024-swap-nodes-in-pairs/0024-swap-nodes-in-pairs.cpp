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
    ListNode* swapPairs(ListNode* head) {
        /*
        sentinel - a - b - c - d 이렇게 있따고 생각해보자

        ListNode* temp = a;
        sentinel->next = sentinel->next->next;
        temp->next = sentinel->next->next;
        sentinel->next->next = temp;
        sentinel = sentinel->next->next;
        */
        ListNode* root = new ListNode();
        ListNode* sentinel = root;
        root->next = head;

        while(sentinel && sentinel->next && sentinel->next->next){
            ListNode* temp = sentinel->next;
            sentinel->next = sentinel->next->next;
            temp->next = sentinel->next->next;
            sentinel->next->next = temp;
            sentinel = sentinel->next->next;
        }
        return root->next;


    }
};