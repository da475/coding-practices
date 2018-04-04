#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#define MAXELE 10

using namespace std;

struct queue {
    int key;
    int value;
    struct queue *next;
    struct queue *prev;
} queue;

class lru_cache {
    private:
        struct queue * HEAD;;

    public:
    int cache_size;
    void create_cache() {
        if (cache_size <= 0) return;

        struct queue * n1 = (struct queue *)malloc( sizeof(queue) );
        if (n1 == NULL) return;

        cout << "alloc head" << endl;
        HEAD = n1;
        HEAD->value = 0;
        HEAD->next = NULL;
        HEAD->prev = NULL;
    
        struct queue *new_node = NULL;
        struct queue *prev_node = HEAD;

        for (int i=0; i<cache_size-1; i++) {
            cout << "alloc node " << i+1 << endl;
            new_node = (struct queue *)malloc( sizeof(queue) );

            if (!new_node) return;

            new_node->key = 0;
            new_node->value = 0;

            new_node->next = NULL;
            new_node->prev = prev_node;
            prev_node->next = new_node;
            prev_node = new_node;
        }
        return;
    }

    void print_ele();

/*
    void print_ele() {
        if(HEAD == NULL) return;    
        printf("\nThe linked list:\n");
        struct queue * n1 = HEAD;
        while(n1 != NULL) {
            cout << "key: " << n1->key << "  value: " << n1->value << endl;
            n1 = n1->next;
        }
        return;
    }
*/
};

void lru_cache::print_ele() {
    if(HEAD == NULL) return;    
        
    printf("\nThe linked list:\n");
    struct queue * n1 = HEAD;
     
    while(n1 != NULL) {
        cout << "key: " << n1->key << "  value: " << n1->value << endl;
        n1 = n1->next;
    }
       
    return;
}

/*
int add_ele(int key, int val) {

    // when it is the first element
    if (HEAD == NULL) {
        printf("adding first element %d\n", val);
        struct queue * n1 = (struct queue *)malloc( sizeof(queue) );
        if (n1 == NULL) return -1;

        HEAD = n1;
        HEAD->vale = val;
        HEAD->ptr = NULL;
        return 0;
    }
    else {
        printf("adding an element %d\n", val);

        struct queue * n_new = (struct queue *)malloc( sizeof(queue) );
        if (n_new == NULL) return -1;

        // special case when HEAD needs to be changed
        if(HEAD->vale > val) {
            n_new->ptr = HEAD;      // point the new queue to HEAD
            n_new->vale = val;      // set the value
            HEAD = n_new;           // make new the new HEAD
            return 0;
        }

        struct queue * n1 = HEAD;
        // reach to the last element or break
        // whenever larger element is found
        while(n1->ptr != NULL) {
            // check for the next queue->val from the current queue
            // because we want to stop at the queue which is just
            // smaller than the new queue
            if( (n1->ptr != NULL) && ((n1->ptr)->vale > val) ) break;
            n1 = n1->ptr;
        }

        // after reaching here, n1 is the queue after which
        // a new queue needs to be inserted

        n_new->ptr = n1->ptr;   // point the next queue to the new queue
        n1->ptr = n_new;        // point the new queue to the previous queue
        n_new->vale = val;      // set the value
        return 0;
    }
}

void free_ele(int val) {
    if(!HEAD) return;
    printf("deleting an element %d\n", val);


    // check if HEAD needs to be freed
    if(HEAD->vale == val) {
        struct queue *n1 = HEAD;
        HEAD = n1->ptr;
        free(n1);
        printf("HEAD changed\n");
        return;
    }

    // keep traversing the linked list to find the queue
    // which needs to be freed
    // If found, break from the loop and n1 is the queue which 
    // points to the queue to be freed
    // If not found, then n1->ptr would be null
    struct queue *n1 = HEAD;
    while(n1->ptr != NULL) {
        if((n1->ptr) && ((n1->ptr)->vale == val)) break;
        n1 = n1->ptr;
    }

    // this means the last element was reached
    if(n1->ptr == NULL) {
        printf("Couldn't find the queue\n");
        return;
    }
    
    struct queue * delqueue = n1->ptr;
    n1->ptr = delqueue->ptr;
    free(delqueue);
    return;

}
*/

int main() {
    int data = 1;
    lru_cache L0;
    L0.cache_size = 4;
    L0.create_cache();
    L0.print_ele();
    return 0;
/*
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
*/
}


