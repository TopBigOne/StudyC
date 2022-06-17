//树的先序遍历 Preorder traversal
void preorder(Node *node)
{

    if (node != NULL)

    {

        printf("%d ", node->data);

        inorder(node->left);

        inorder(node->right);
    }
}

