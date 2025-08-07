#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left_child, *right_child;
};

struct node* createNode(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Memory allocation failed");
        return NULL;
    }
    newNode->data = data;
    newNode->left_child = NULL;
    newNode->right_child = NULL;

    return newNode;
}

void inorder(struct node *root) {
    if (root != NULL) {
        inorder(root->left_child);
        printf("%d ", root->data);
        inorder(root->right_child);
    }
}

void preorder(struct node *root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left_child);
        preorder(root->right_child);
    }
}

void postorder(struct node *root) {
    if (root != NULL) {
        postorder(root->left_child);
        postorder(root->right_child);
        printf("%d ", root->data);
    }
}

struct node* searchNode(int data, struct node *root) {
    if (root == NULL) {
        return NULL;
    }
    if (root->data == data) {
        return root;
    }
    struct node* foundNode = searchNode(data, root->left_child);
    if (foundNode == NULL) {
        foundNode = searchNode(data, root->right_child);
    }
    return foundNode;
}

void insertNode(struct node *parent, struct node *child) {
    if (parent == NULL) {
        printf("Parent node not found.\n");
        return;
    }
    if (parent->left_child == NULL) {
        parent->left_child = child;
    } else if (parent->right_child == NULL) {
        parent->right_child = child;
    } else {
        printf("Both children of node %d are already occupied.\n", parent->data);
    }
}


struct node* deleteNode(struct node *root, int key) {
    if (root == NULL) {
        return NULL;
    }

    if (root->data == key) {

        if (root->left_child == NULL && root->right_child == NULL) {
            free(root);
            return NULL;
        }

        if (root->left_child == NULL) {
            struct node *temp = root->right_child;
            free(root);
            return temp;
        }
        if (root->right_child == NULL) {
            struct node *temp = root->left_child;
            free(root);
            return temp;
        }

        printf("Node with two children deletion not supported in this implementation.\n");
        return root;
    }

    root->left_child = deleteNode(root->left_child, key);
    root->right_child = deleteNode(root->right_child, key);
    return root;
}


int main() {
    struct node *root = createNode(1);

    int choice, data, parentData;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert a node\n");
        printf("2. Delete a node\n");
        printf("3. Search for a node\n");
        printf("4. Display tree (Inorder, Preorder, Postorder)\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data for the new node: ");
                scanf("%d", &data);
                printf("Enter parent node data: ");
                scanf("%d", &parentData);
                struct node *parentNode = searchNode(parentData, root);
                insertNode(parentNode, createNode(data));
                break;

            case 2:
                printf("Enter data of the node to delete: ");
                scanf("%d", &data);
                root = deleteNode(root, data);
                break;

            case 3:
                printf("Enter data to search: ");
                scanf("%d", &data);
                struct node *found = searchNode(data, root);
                if (found) {
                    printf("Node with data %d found.\n", data);
                } else {
                    printf("Node with data %d not found.\n", data);
                }
                break;

            case 4:
                printf("Inorder: ");
                inorder(root);
                printf("\nPreorder: ");
                preorder(root);
                printf("\nPostorder: ");
                postorder(root);
                printf("\n");
                break;

            case 5:
                exit(0);

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
