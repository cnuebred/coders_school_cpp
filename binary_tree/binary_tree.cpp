#include <iostream>

using namespace std;

struct treeNode
{
    int value;              /* value of the node */
    struct treeNode* left;  /* pointer to the left child node */
    struct treeNode* right; /* pointer to the right child node */
};


bool is_bst(treeNode* root, int min, int max)
{
    cout << root->value << endl;
    cout << min << endl;
    cout << max << endl;
    if (root==NULL)     /* An empty tree is a BST */
        return true;   
    /* Check if this node violates the min/max constraint */
    if (root->value< min || root->value > max)
        return false;
    /* Validate the subtrees recursively, adjusting the min or max values */
    return is_bst(root->left, min, root->value-1) &&  /* The left subtree must be <= root->value */
           is_bst(root->right, root->value+1, max);   /* The right subtree must be > root->value */
}
/* write helper functions above this line only */
bool validate_bst(treeNode* root)
{   
    cout << root << endl;
    return(is_bst(root, root->left->value, root->right->value));
}

int main(){
    treeNode* root = new treeNode{80, nullptr, nullptr};
    if(validate_bst(root))
        cout << "no ok" << endl;
    return 0;
}