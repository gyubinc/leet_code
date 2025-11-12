/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    // two-pointer를 이용해보자.
    if (!head) return false;
    if (!head->next) return false;

    struct ListNode* slow = head;
    struct ListNode* fast = head->next;

    while (fast && fast->next){
        if (slow == fast){
            return true;
        }
        slow = slow->next;
        fast = fast->next->next;
    }
    return false;
}