#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define MAX_NODE 10

typedef struct node
{
    int key;
    Node *lchild,*rchild;
}Node;

Node *getNewNode(int key){
    Node *p=(Node *)malloc(sizeof(Node));
    p->key=key;
    p->lchild=p->rchild=NULL;
    return p;
}

void clear(Node *root){
    if(root==NULL){
        return ;
    }
    clear(root->lchild);
    clear(root->rchild);
    free(root);
    return;
}

Node *insert(Node* root ,int key){
    if(root==NULL){
        return getNewNode(key);
    }
    if(rand()%2==1)root->lchild=insert(root->lchild,key);
    else root->rchild=insert(root->rchild,key);
    
}

Node * queue[MAX_NODE+5];
int head,tail;

void bfs(Node * root){
    head=tail=0;
    queue[tail++]=root;
    while(head<tail){
        Node * node=queue[head];
        printf("%d ",node->key);
        if(node->lchild)
        queue[tail++]=node->lchild;
        if(node->rchild)
        queue[tail++]=node->rchild;
        head++;
    }
    return;
}

void dfs(Node *root){
    if(root==NULL)
    return;
    if(root->lchild)
    dfs(root->lchild);
    if(root->rchild)
    dfs(root->rchild);
    printf("%d ",root->key);
}

int main(){
    srand(time(0));
    Node *root=NULL;
    for(int i=0;i<=MAX_NODE;i++){
        root=insert(root,rand()%100);
    }
    bfs(root);
    dfs(root);
    return 0;
}