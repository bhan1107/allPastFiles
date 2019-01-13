#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 1000
struct node
{
    int key;
    struct node *left, *right;
};


struct node *newNode(int item)
{
    struct node *temp =  (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

/* A utility function to insert a new node with given key in BST */
struct node* insert(struct node* node, int key)
{
    if (node == NULL) return newNode(key);
    
    if (key < node->key)
        node->left  = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    
    return node;
}

int Total_Depth(struct node* node, int depth)
{
    if (node==NULL){
        return 0;}
    else{
        return depth + Total_Depth(node->left, depth+1) + Total_Depth(node->right, depth+1);
    }
    
}

struct node* searchPath(struct node* node, int key)
{
    if (node == NULL)
        return newNode(key);
    if (key == node->key)
        printf("%d\n", node->key);
    //if empty recurse
    if (key < node->key){
        printf("%d\n", node->key);
        node->left  = searchPath(node->left, key);
    }
    else if (key > node->key){
        printf("%d\n", node->key);
        node->right = searchPath(node->right, key);
    }
    /* return the (unchanged) node pointer */
    return node;
}

int Max_Depth(struct node* node)
{
    if (node==NULL)
        return 0;
    else
    {
        int lDepth = Max_Depth(node->left);
        int rDepth = Max_Depth(node->right);
        
        if (lDepth > rDepth)
            return(lDepth+1);
        else return(rDepth+1);
    }
}

int main()
{
    struct node *root = NULL;
    int j = 0;
    srand(time(NULL));
    
    int array[N];
    
    for (int i = 0; i < N; i++) {
        array[i] = i;
    }
    
    for (int k = 0; k < N; k++) {
        int temp = array[k];
        int randomIndex = rand() % N;
        array[k]           = array[randomIndex];
        array[randomIndex] = temp;
    }
    
    for (j = 0; j < N; j++){
        root = insert(root, array[j]);
    }
    
    printf("Max depth is %d\n", Max_Depth(root));
    printf("Total Depth is %d\n", Total_Depth(root, 1));
    
    return 0;
}
