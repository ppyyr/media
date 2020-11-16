class Solution {
public:
    ListNode* getKthFromEnd(ListNode* head, int k) {
        ListNode *p = head, *q = head;
        for( int i = 0; i < k; i++){
            if( q != nullptr)
                q = q->next;
            else
                break;
        }
        while( q != nullptr ){
            p = p->next;
            q = q->next;
        }
        return p;
    }
};