#include <stdio.h>
#include <stdlib.h>
typedef struct TreeNode {
 int val;
 struct TreeNode *left;
 struct TreeNode *right;
} TreeNode;
TreeNode* sortedArrayToBST(int* nums, int numsSize) {
 if (numsSize == 0) return NULL;
 
 TreeNode* root = (TreeNode*) malloc(sizeof(TreeNode));
 root->val = nums[numsSize / 2];
 
 int leftSize = numsSize / 2;
 int rightSize = numsSize - leftSize - 1;
 root->left = sortedArrayToBST(nums, leftSize);
 root->right = sortedArrayToBST(nums + numsSize / 2 + 1, rightSize);
 return root;
}
