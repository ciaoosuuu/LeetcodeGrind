/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int res{0};
        depth(root, res);
        return res;
    }

private:
    int depth(TreeNode* node, int& res) {
        if (node == nullptr) return 0;
        int left = depth(node->left, res);
        int right = depth(node->right, res);
        res = max(res, left + right);
        return max(left, right) + 1;
    }
};
