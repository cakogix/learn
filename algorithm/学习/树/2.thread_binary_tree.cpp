#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define MAX_NODE 10
typedef struct Node
{
    int key;
    int ltag,rtag;// 1:thread,0:edge
    Node *lchild,*rchild;
}Node;

Node *getNewNode(int key){
    Node *p=(Node *)malloc(sizeof(Node));
    p->key=key;
    p->ltag=p->rtag=0;
    p->lchild=p->rchild=NULL;
    return p;
}

Node *insert(Node *root,int key){
    if(root==NULL)
    return getNewNode(key);
    if(rand()%2)root->lchild=insert(root->lchild,key);
    else root->rchild=insert(root->rchild,key);
    return root;
}

void clear(Node *root){
    if(root==NULL)
    return ;
    if(root->ltag==0)clear(root->lchild);
    if(root->rtag==0)clear(root->rchild);
    free(root);
    return ;
}

void preOrder(Node *root){
    if(root==NULL)
    return ;
    printf("%d ",root->key);
    if(root->ltag==0)
    preOrder(root->lchild);
    if(root->rtag==0)
    preOrder(root->rchild);
}

void inOrder(Node * root){
    if(root==NULL)
    return ;
    if(root->ltag==0)
    inOrder(root->lchild);
    printf("%d ",root->key);
    if(root->rtag==0)
    inOrder(root->rchild);
}

void postOrder(Node *root){
    if(root==NULL)
    return ;
    if(root->ltag==0)
    postOrder(root->lchild);
    if(root->rtag==0)
    postOrder(root->rchild);
    printf("%d ",root->key);
}


Node *preNode=NULL;
Node *inOrderRoot=NULL;
void __buildInOrderThread(Node * root){
    if(root==NULL)
    return ;
    if(root->ltag==0)__buildInOrderThread(root->lchild);
    if(inOrderRoot==NULL)inOrderRoot=root;
    if(root->lchild==NULL){
        root->lchild=preNode;
        root->ltag=1;
    }
    if(preNode&&preNode->rchild==NULL){
        preNode->rchild=root;
        preNode->rtag=1;
    }
    preNode=root;
    if(root->rtag==0)__buildInOrderThread(root->rchild);
}

void buildInOrderThread(Node *root){
    __buildInOrderThread(root);
    preNode->rchild=NULL;
    preNode->rtag=1;
    return;
}

Node * getNext(Node * root){
    if(root->rtag==1)return root->rchild;
    root=root->rchild;
    while(root->ltag==0)root=root->lchild;
    return root;
}

int main(){
    srand(time(0));
    Node * root=NULL;
    for(int i=0;i<MAX_NODE;i++){
        root=insert(root,rand()%100);
    }
    buildInOrderThread(root);
    preOrder(root);
    printf("\n");
    inOrder(root);
    printf("\n");
    postOrder(root);
    printf("\n");


    Node *node=inOrderRoot;
    while(node){
        printf("%d ",node->key);
        node=getNext(node);
    }

    printf("\n");
    clear(root);
    return 0;
}