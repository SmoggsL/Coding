#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
public:                                    // 2
    TreeNode* searchBST(TreeNode* root, int val) {
        if (val < root->val) return searchBST(root->left,val);
        if (val > root->val) return searchBST(root->right,val);
        if (val == root->val)
        {
            if (root != NULL)  
            {
                TreeNode* n = root->left;
                while (n) 
                {
		            cout << n->val << " ";
		            n = n->right;
	            }
            }
        }
    }
};
