class Solution {
public:
    ListNode* myreverse(ListNode* l1) {
        vector<int> a;
        while(l1){
            a.push_back(l1->val);
            l1=l1->next;
        }
        ListNode*ans=new ListNode();
        ListNode*now=ans;
        int n=a.size();
        for(int i=n-1;i>=0;i--){
            now->next=new ListNode(a[i]);
            now=now->next;
        }
        return ans->next;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=myreverse(l1);
        l2=myreverse(l2);
        ListNode*ans=new ListNode();
        ListNode*now=ans;
        int carry=0;
        int here;
        while(l1||l2||carry){
            if(l1&&l2)here=l1->val+l2->val+carry;
            else if(l1)here=l1->val+carry;
            else if(l2)here=l2->val+carry;
            else here=carry;
            carry=here/10;
            now->next=new ListNode(here%10);
            now=now->next;
            if(l1)l1=l1->next;
            if(l2)l2=l2->next;
        }
        return myreverse(ans->next);
    }
};