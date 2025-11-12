/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* sentinel = (struct ListNode*)malloc(sizeof(struct ListNode));
    sentinel->val = 0;
    sentinel->next = head;

    while (head){
        if(head->next){
            while (head->next && head->next->val == head->val){
                head->next = head->next->next;
            }
        }
        head = head->next;
    }

    return sentinel->next;
}