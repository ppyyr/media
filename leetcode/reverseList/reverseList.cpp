class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* cur = NULL, *next = head;
        while(next != nullptr) {
            ListNode* t = next->next;
            next->next = cur;
            cur = next;
            next = t;
        }
        return cur;
    }
};