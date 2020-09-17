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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(0);
        ListNode* p=l1, * q=l2, * curr=dummyHead;
        int carry=0;
        while (p!=NULL || q!=NULL){
            int x=(p!=NULL)?p->val:0;
            cout<<"x:"<<x<<endl;
            int y=(q!=NULL)?q->val:0;
            cout<<"y:"<<y<<endl;
            int sum = carry+x+y;
            carry=sum/10;
            if(p!=NULL)p=p->next;
            if(q!=NULL)q=q->next;
            curr->next=new ListNode(sum%10);
            curr=curr->next;
        }
        if(carry)
            curr->next=new ListNode(1);
        return dummyHead->next;
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
    // ListNode *l1=new ListNode(2);
    // l1->next=new ListNode(4);
    // l1->next->next=new ListNode(3);
    // ListNode *l2=new ListNode(5);
    // l2->next=new ListNode(6);
    // l2->next->next=new ListNode(4);
    ListNode *r=sl.addTwoNumbers(l1,l2);
    while(r!=NULL)
    {
        cout<<"val:"<<r->val<<endl;
        r=r->next;
    }
}
