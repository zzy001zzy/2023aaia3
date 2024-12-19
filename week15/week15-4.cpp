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
        return myreverse(l1);
    }
};