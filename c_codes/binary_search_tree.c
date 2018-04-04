#include <stdio.h>
#include <stdlib.h>

#define MAXELE 10

struct TREE {
    int value;
    struct TREE *left;
    struct TREE *right;
};

struct TREE * HEAD = NULL;

void print_ele(struct TREE * node) {
    if(node == NULL) return;

    printf("%d\n", node->value);
    print_ele(node->left);
    print_ele(node->right);

    return;
}

struct TREE * search_element(struct TREE * node, int val) {
    if(node == NULL) return NULL;
    if(node->value != val) return NULL;
    else return node;

    if(node->value > val) return(search_element(node->left, val));
    else return(search_element(node->right, val));

}

void add_element(struct TREE * node, int val) {
    if(node == NULL) return;

    if(node->value > val) {
        if(node->left == NULL) {
            struct TREE * new_node = (struct TREE *)malloc( sizeof(node) );
            node->left = new_node;
            new_node->value = val;
            new_node->left = new_node->right = NULL;
        }
        else {
            add_element(node->left, val);
        }
    }
    else {
        if(node->right == NULL) {
            struct TREE * new_node = (struct TREE *)malloc( sizeof(node) );
            node->right = new_node;
            new_node->value = val;
            new_node->left = new_node->right = NULL;
        }
        else {
            add_element(node->right, val);
        }
    }
}

int main() {
    int data = 100;
    struct TREE * n1 = (struct TREE *)malloc( sizeof(struct TREE) );
    HEAD = n1;
    HEAD->value = 12;
    HEAD->left = HEAD->right = NULL;


    while(data != -1) {
        printf("Enter the number to insert\n");
        scanf("%d", &data);
        if(data == -1) break;
        else if (data == 0) {
            printf("\nThe tree:\n");
            print_ele(HEAD);
        }
        else add_element(HEAD, data);
    }

//    data = 1;

/*
    while(data != -1) {
        printf("Enter the number to free\n");
        scanf("%d", &data);
        if(data == -1) break;
        else if (data == 0) print_ele();
        else free_ele(data);
    }
*/
    return 0;
}


