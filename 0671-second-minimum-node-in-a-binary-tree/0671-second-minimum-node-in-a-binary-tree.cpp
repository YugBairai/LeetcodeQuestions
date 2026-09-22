/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void ans(TreeNode* root, vector<int>& arr) {
        if (root == NULL)
            return;

        arr.push_back(root->val);

        ans(root->left, arr);
        ans(root->right, arr);
    }

    int findSecondMinimumValue(TreeNode* root) {

        if (root == NULL)
            return -1;

        vector<int> arr;

        ans(root, arr);

        sort(arr.begin(), arr.end());

        int minimum = arr[0];

        for (int i = 1; i < arr.size(); i++) {

            if (arr[i] != minimum) {
                return arr[i];
            }
        }

        return -1;
    }
};