#include <iostream>
#include <vector>

using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

TreeNode* sortedArrayToBSTHelper(vector<int>& nums, int left, int right) {
    if (left > right) return nullptr; 

    int mid = left + (right - left) / 2; 
    TreeNode* root = new TreeNode(nums[mid]); 

    root->left = sortedArrayToBSTHelper(nums, left, mid - 1);  
    root->right = sortedArrayToBSTHelper(nums
