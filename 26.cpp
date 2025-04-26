#include <bits/stdc++.h>
using namespace std;

class ListNode
{
    public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void print(ListNode* head){
    while(head != NULL){
        cout << head->val << " ";
        head=head->next;
    }
    return;
}

bool isPalindrome(ListNode*& head)
{
    if (head->next == NULL)
    {
        return true;
    }
    if (head->next->next == NULL)
    {
        return bool(head->val == head->next->val);
    }

    ListNode *slow = head;
    ListNode *fast = head->next;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    ListNode *oh = slow->next;
    // reverse other half
    // move till oh is not NULL and return false if any elem did not match
    // else return true;

    // now write reverse ll logic for this
    ListNode *prev = NULL;
    ListNode *curr = oh;
    ListNode *nex = curr->next;

    while (curr != NULL)
    {
        // cout << prev-> val << " " << curr->val << " " << nex->val << endl;
        nex = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nex;
    }
    cout << "oh: " << oh->val << endl;
    slow->next = prev;
    ListNode *p1 = head;
    ListNode *p2 = slow->next;

    while (p2 != NULL)
    {
        if (p1->val != p2->val)
        {
            return false;
        }
        p1 = p1->next;
        p2 = p2->next;
    }

    return true;
}

ListNode* sortList(ListNode*& head) {
    if(head == NULL || head->next == NULL){
        return head;
    }
    ListNode* s = head;
    ListNode* e = head;

    ListNode* curr = head->next;
    ListNode* temp;
    while(curr!=NULL){
        temp = curr->next;
        if(curr->val <=s->val){
            // insert at head
            e=curr->next;
            curr->next = s;
            s=curr;
            head = s;
        }else if(curr->val>=e->val){
            e=e->next;
        }else{
            ListNode* i = s;
            while(i->next->val<=curr->val){
                i=i->next;
            }
            curr->next = i->next;
            i->next = curr;
        }
        curr=temp;
    }
    e->next = NULL;
    return head;

}

int main()
{
    ListNode* n4 = new ListNode(3);
    ListNode* n3 = new ListNode(2,n4);
    ListNode* n2 = new ListNode(4,n3);
    // ListNode* n1 = new ListNode(4,n2);
    // bool ans = isPalindrome(n1);
    // cout << ans << endl;
    sortList(n2);
    print(n2);

    return 0;
}