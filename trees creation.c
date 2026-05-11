#include<stdio.h>
#include<stdlib.h>

struct trees {
    struct trees *left, *right;
    int data;	
};

struct trees* create() {
    struct trees *newnode = NULL;
    int a;
    printf("\nENTER DATA (0 for no node): ");
    scanf("%d", &a);
    if (a == 0) {
        return NULL;
    }
    newnode = (struct trees*)malloc(sizeof(struct trees));
    newnode->data = a;
    printf("\nENTER LEFT CHILD OF %d:", a);
    newnode->left = create();
    printf("\nENTER RIGHT CHILD OF %d:", a);
    newnode->right = create();
    return newnode;
}
void preorder(struct trees *root){
    if(root == NULL) return;
    printf("\t%d", root->data);
    preorder(root->left);
    preorder(root->right);
}
void inorder(struct trees *root){
    if(root == NULL) return;
    inorder(root->left);
    printf("\t%d", root->data);
    inorder(root->right);
}
void postorder(struct trees *root){
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    printf("\t%d", root->data);
}
int main(){
    struct trees *root;
    root = create();
    printf("\nPREORDER: ");
    preorder(root);
	printf("\nINORDER: ");4
    inorder(root);
    printf("\nPOSTORDER: ");
    postorder(root);
    return 0;
}
