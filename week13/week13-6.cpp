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
    ListNode* reverseList(ListNode* head) {
        vector<int> a;
        while(head){
            a.push_back(head->val);
            head=head->next;
        }
        reverse(a.begin(),a.end());
        ListNode* ans=new ListNode();
        ListNode* now=ans;
        for(auto i:a){
            now->next=new ListNode(i);
            now=now->next;
        }
        return ans->next;
    }
};
