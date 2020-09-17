#include<cstdio>
#include<iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

using namespace std;

class Method {
public:
    static ListNode* intoListNode(int* sl, size_t arr_size) {
        ListNode* head = new ListNode(0);
        ListNode* p = head;
        for(int i=0;i<arr_size;i++){
            p->next=new ListNode(sl[i]);
            p=p->next;
        }
        return head->next;
    }
};

class Solution {
public:
    int c;
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==nullptr && l2==nullptr && c==0)return nullptr;
        l1 = l1!=nullptr ? (c += l1->val, l1->next) : l1;
        l2 = l2!=nullptr ? (c += l2->val, l2->next) : l2;
        ListNode *cur = new ListNode(0);
        cur->val = c%10;
        c /= 10;
        cur->next = addTwoNumbers(l1,l2);
        return cur;
    }
};

int main(int argc, char *argv[])
{
    Solution sl;
    int sl1[] = {2,4,5};
    int sl2[] = {5,6,4};
    ListNode *l1=Method::intoListNode(sl1, 3);
    ListNode *l2=Method::intoListNode(sl2, 3);
    cout<<"start"<<endl;
    sl.c=0;
    ListNode *r=sl.addTwoNumbers(l1,l2);
    while(r!=NULL)
    {
        cout<<"val:"<<r->val<<endl;
        r=r->next;
    }
}
