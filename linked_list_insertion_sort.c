#include <stdio.h>
#include <stdlib.h>

#define MAXELE 10

struct node {
    int vale;
    struct node *ptr;
} node;

struct node * HEAD = NULL;

int add_ele(int val) {

    // when it is the first element
    if (HEAD == NULL) {
        printf("adding first element %d\n", val);
        struct node * n1 = (struct node *)malloc( sizeof(node) );
        if (n1 == NULL) return -1;

        HEAD = n1;
        HEAD->vale = val;
        HEAD->ptr = NULL;
        return 0;
    }
    else {
        printf("adding an element %d\n", val);

        struct node * n_new = (struct node *)malloc( sizeof(node) );
        if (n_new == NULL) return -1;

        // special case when HEAD needs to be changed
        if(HEAD->vale > val) {
            n_new->ptr = HEAD;      // point the new node to HEAD
            n_new->vale = val;      // set the value
            HEAD = n_new;           // make new the new HEAD
            return 0;
        }

        struct node * n1 = HEAD;
        // reach to the last element or break
        // whenever larger element is found
        while(n1->ptr != NULL) {
            // check for the next node->val from the current node
            // because we want to stop at the node which is just
            // smaller than the new node
            if( (n1->ptr != NULL) && ((n1->ptr)->vale > val) ) break;
            n1 = n1->ptr;
        }

        // after reaching here, n1 is the node after which
        // a new node needs to be inserted

        n_new->ptr = n1->ptr;   // point the next node to the new node
        n1->ptr = n_new;        // point the new node to the previous node
        n_new->vale = val;      // set the value
        return 0;
    }
}

void free_ele(int val) {
    if(!HEAD) return;
    printf("deleting an element %d\n", val);


    // check if HEAD needs to be freed
    if(HEAD->vale == val) {
        struct node *n1 = HEAD;
        HEAD = n1->ptr;
        free(n1);
        printf("HEAD changed\n");
        return;
    }

    // keep traversing the linked list to find the node
    // which needs to be freed
    // If found, break from the loop and n1 is the node which 
    // points to the node to be freed
    // If not found, then n1->ptr would be null
    struct node *n1 = HEAD;
    while(n1->ptr != NULL) {
        if((n1->ptr) && ((n1->ptr)->vale == val)) break;
        n1 = n1->ptr;
    }

    // this means the last element was reached
    if(n1->ptr == NULL) {
        printf("Couldn't find the node\n");
        return;
    }
    
    struct node * delnode = n1->ptr;
    n1->ptr = delnode->ptr;
    free(delnode);
    return;

}

void print_ele() {
    if(HEAD == NULL) return;    
    printf("\nThe linked list:\n");
    struct node * n1 = HEAD;
    while(n1 != NULL) {
        printf("%d\n", n1->vale);
        n1 = n1->ptr;
    }
    return;
}

int main() {
    int data = 1;

    while(data != -1) {
        printf("Enter the number\n");
        scanf("%d", &data);
        if(data == -1) break;
        else if (data == 0) print_ele();
        else add_ele(data);
    }

    data = 1;

    while(data != -1) {
        printf("Enter the number to free\n");
        scanf("%d", &data);
        if(data == -1) break;
        else if (data == 0) print_ele();
        else free_ele(data);
    }
    return 0;
}


