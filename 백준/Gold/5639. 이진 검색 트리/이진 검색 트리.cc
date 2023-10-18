#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
struct BTreeNode
{
    int data = 0;
    struct BTreeNode* left = nullptr;
    struct BTreeNode* right = nullptr;
};

void insertTree(BTreeNode& a, int value)
{
    if (a.data == 0)
    {
        a.data = value;
    }
    else if (a.data > value)
    {
        if (a.left == NULL)
            a.left = new BTreeNode();
        insertTree(*a.left, value);
    }
    else if (a.data < value)
    {
        if (a.right == NULL)
            a.right = new BTreeNode();
        insertTree(*a.right, value);
    }
}

void Print(BTreeNode& t)
{
    if (t.left != nullptr)
        Print(*t.left);
    if (t.right != nullptr)
        Print(*t.right);
    cout << t.data << "\n";
}

int main()
{
    BTreeNode root;
    int input = 0;

    while (cin >> input)
    {
        insertTree(root, input);
    }
    Print(root);
}