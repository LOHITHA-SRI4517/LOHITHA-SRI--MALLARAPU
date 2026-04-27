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
