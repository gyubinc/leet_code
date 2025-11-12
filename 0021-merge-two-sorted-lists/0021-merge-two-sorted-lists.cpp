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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode();
        ListNode* sentinel = new ListNode();
        ans = sentinel;

        while (list1 || list2){
            if (list1 && list2){
                if (list1->val > list2->val){
                    sentinel->next = new ListNode(list2->val);
                    list2 = list2->next;
                    sentinel = sentinel->next;
                }else{
                    sentinel->next = new ListNode(list1->val);
                    list1 = list1->next;
                    sentinel = sentinel->next;
                }
            }else if (list1){
                sentinel->next = list1;
                break;
            }else if (list2){
                sentinel->next = list2;
                break;
            }
        }
        return ans->next;
    }
};