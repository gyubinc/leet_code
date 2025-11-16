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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // 구현을 보면 일단 마지막 번호를 1번으로 세고 있음
        // sentinel과 그 뒤에 n번 뒤 노드를 가지고 있음
        // 만약 fast가 마지막에 돌아가면 lazy는 n-1회 전진하고 그 다다음으로 뛰어넘어감
        ListNode* sentinel = new ListNode();
        sentinel->next = head;
        ListNode* lazy = sentinel;
        ListNode* fast = sentinel;
        for (int i=0; i<n; i++){
            if (fast){
                fast = fast->next;
            }
        }
        while (fast->next){
            fast = fast->next;
            lazy = lazy->next;
        }

        lazy->next = lazy->next->next;

        return sentinel->next;
    }
};