// Generating tree by traversal
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    Node *lchild;
    int data;
    Node *rchild;
    Node(){};
    Node(int data);
};
Node::Node(int data)
{
    lchild = nullptr;
    this->data = data;
    rchild = nullptr;
}
class Tree
{
public:
    Node *root;
    Tree();
    void Preorder(Node *p);
    void Inorder(Node *p);
    void Postorder(Node *p);
    Node *generateFromTraversal(int inorder[], int preorder[], int inStart, int inEnd);
};

Tree::Tree()
{
    root = nullptr;
}
void Tree::Preorder(Node *p)
{
    if (p)
    {
        cout << p->data << ", " << flush;
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}

void Tree::Inorder(Node *p)
{
    if (p)
    {
        Inorder(p->lchild);
        cout << p->data << ", " << flush;
        Inorder(p->rchild);
    }
}

void Tree::Postorder(Node *p)
{
    if (p)
    {
        Postorder(p->lchild);
        Postorder(p->rchild);
        cout << p->data << ", " << flush;
    }
}
int searchInorder(int inArray[], int inStart, int inEnd, int data)
{
    for (int i = inStart; i <= inEnd; i++)
    {
        if (inArray[i] == data)
        {
            return i;
        }
    }
    return -1;
}

Node *Tree::generateFromTraversal(int *inorder, int *preorder, int inStart, int inEnd)
{
    static int preIndex = 0;

    if (inStart > inEnd)
    {
        return nullptr;
    }

    Node *node = new Node(preorder[preIndex++]);

    if (inStart == inEnd)
    {
        return node;
    }

    int splitIndex = searchInorder(inorder, inStart, inEnd, node->data);
    node->lchild = generateFromTraversal(inorder, preorder, inStart, splitIndex - 1);
    node->rchild = generateFromTraversal(inorder, preorder, splitIndex + 1, inEnd);

    return node;
}

int main()
{

    Tree bt;

    int preorder[] = {4, 7, 9, 6, 3, 2, 5, 8, 1};
    int inorder[] = {7, 6, 9, 3, 4, 5, 8, 2, 1};

    Node *T = bt.generateFromTraversal(inorder, preorder, 0, sizeof(inorder) / sizeof(inorder[0]) - 1);
    bt.Preorder(T);

    return 0;
}