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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>tmp;

        while(head){
            tmp.push_back(head->val);
            head = head->next;
        }

        vector<int>cp;

        int n = tmp.size();

        for(int i = 1; i < n - 1; i++){
            if(tmp[i] > tmp[i - 1] && tmp[i] > tmp[i + 1]){
                cp.push_back(i);
            }
            else if(tmp[i] < tmp[i - 1] && tmp[i] < tmp[i + 1]){
                cp.push_back(i);
            }
        }

        int m = cp.size();

        if(m < 2) return {-1, -1};

        int minDist = INT_MAX;

        int maxDist = cp[m - 1] - cp[0];

        for(int i = 1; i < m; i++){
            minDist = min(minDist,
                cp[i] - cp[i - 1]);
        }

        return {minDist, maxDist};
    }
};