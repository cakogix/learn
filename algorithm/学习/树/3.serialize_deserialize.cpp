#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define MAX_NODE 10
#define KEY(n)(n ? n->key : -1)

typedef struct Node
{
    int key;
    Node *lchild,*rchild;
}Node;

Node *getNewNode(int key){
    Node *p=(Node*)malloc(sizeof(Node));
    p->key=key;
    p->lchild=p->rchild=NULL;
    return p;
}

Node * insert(Node * root,int key){
    if(root==NULL)return getNewNode(key);
    if(rand()%2)root->lchild=insert(root->lchild,key);
    else root->rchild=insert(root->rchild,key);
    return root;
}

Node *getRandomBinaryTree(int n){
    Node *root=NULL;
    for(int i=0;i<n;i++){
        root=insert(root,rand()%100);
    }
    return root;
}

void clear(Node *root){
    if(root==NULL)return;
    clear(root->lchild);
    clear(root->rchild);
    free(root);
    return;
}

char buff[1000];
int len=0;
void __serialize(Node * root){
    if(root==NULL)return ;
    len+=sprintf(buff+len,"%d",root->key);
    if(root->lchild==NULL&&root->rchild==NULL) return;
    len+=sprintf(buff+len,"(");
    __serialize(root->lchild);
    if(root->rchild!=NULL){
        len+=sprintf(buff+len,","); 
        __serialize(root->rchild);
    }
    len+=sprintf(buff+len,")");
    return ;
}

void serialize(Node *root){
    memset(buff,0,sizeof(buff));
    len=0;
    __serialize(root);
    return ;
}



void printf(Node *root){
    printf("%d(%d, %d)\n",KEY(root),KEY(root->lchild),KEY(root->rchild));
    return;
}

void output(Node *root){
    if(root==NULL)return;
    printf(root);
    output(root->lchild);
    output(root->rchild);
    return;
}

int main(){
    srand(time(0));
    Node *root=getRandomBinaryTree(MAX_NODE);
    
    serialize(root);
    output(root);
    printf("buff: %s\n",buff);
    return 0;
}