#include<stdio.h>
struct node
{
    int data;
    struct node *left,*right;
}*root=NULL;

struct node* create_tree();
void Inorder(struct node*);

int main()
{
   root=create_tree();
   Inorder(root);
   return 0;

}
struct node* create_tree()
{
    int x;
    struct node *new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("enter data (-1 for no node) :");
    scanf("%d",&x);
    if(x==-1)
        return 0;
        printf("enter right child of %d \n",x);
    new_node->data=x;
    new_node->left=create_tree();
    printf("enter right child of %d \n",x);
    new_node->right=create_tree();
    return new_node;
}
void Inorder(struct node *head)
{
    if(head==NULL) return;
    Inorder(head->left);
    printf("%d ",head->data);
    Inorder(head->right);
}
