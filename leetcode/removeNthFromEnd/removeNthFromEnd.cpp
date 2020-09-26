#include <iostream>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* p = dummy;
        ListNode* q = dummy;
        while(n--) p = p -> next;
        while(p->next) {
            p = p->next;
            q = q->next;
        }
        q->next = q->next->next;
        return dummy->next;
    }
};

int main(int argc, char** argv) {
    ListNode *head = new ListNode(1);
    ListNode *index = head;
    index->next = new ListNode(2); index = index->next;
    index->next = new ListNode(3); index = index->next;
    index->next = new ListNode(4); index = index->next;
    index->next = new ListNode(5); 
    Solution sl;
    index = sl.removeNthFromEnd(head,2);
    while(index){
        cout << " " << index->val << endl;
        index = index->next;
    }
}