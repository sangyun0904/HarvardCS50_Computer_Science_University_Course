#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *left;
    struct node *right;
} 
node;

node* insert_tree(node *tree, int number);
void inorder(node *tree);
bool search(node *tree, int number);

int main(void) {
    node *tree = NULL;

    tree = insert_tree(tree, 2);
    insert_tree(tree, 1);
    insert_tree(tree, 3);
    printf("BST inorder : ");
    inorder(tree);
    printf("end\n");
    if (search(tree, 3))
    {
        printf("3 is in the BST!\n");
    }
    else
    {
        printf("3 is NOT int the BST\n");
    }
}

node* new_node(int number) 
{
    node *leaf = malloc(sizeof(node));
    leaf->number = number;
    leaf->left = NULL;
    leaf->right = NULL;

    return leaf;
}

node* insert_tree(node *tree, int number)
{
    if (tree == NULL)
    {
        tree = new_node(number);
    }
    else if (number < tree->number)
    {
        if (tree->left == NULL)
        {
            tree->left = new_node(number);
        }
        else 
        {
            insert_tree(tree->left, number);
        }
    }
    else if (number >= tree->number)
    {
        if (tree->right == NULL) 
        {
            tree->right = new_node(number);
        }
        else 
        {
            insert_tree(tree->right, number);
        }
    }
    return tree;
}

void inorder(node *tree)
{
    if (tree == NULL)
    {
        return;
    }
    inorder(tree->left);
    printf("%i -> ", tree->number);
    inorder(tree->right);
}

bool search(node *tree, int number)
{
    if (tree == NULL)
    {
        return false;
    }
    else if (number < tree->number)
    {
        return search(tree->left, number);
    }
    else if (number > tree->number)
    {
        return search(tree->right, number);
    }
    else if (number == tree-> number)
    {
        return true;
    }

    return false;
}