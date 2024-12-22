// 1) Algorithm Create_Node(data)
// 2) Pre: data is an integer value
// 3) Post: A new node with the given data is created and returned
// 4) newNode ← allocate memory for a Node
// 5) newNode->data ← data
// 6) newNode->left ← NULL
// 7) newNode->right ← NULL
// 8) return newNode
// 9) end Create_Node

// 1) Algorithm Insert_Node(root, data)
// 2) Pre: root is the root node of the BST, data is an integer
// 3) Post: A new node with the given data is inserted in the correct position in the tree
// 4) if root = NULL then
// 5)     root ← Create_Node(data)
// 6)     return root
// 7) end if
// 8) if data < root->data then
// 9)     root->left ← Insert_Node(root->left, data)
// 10) else
// 11)     root->right ← Insert_Node(root->right, data)
// 12) end if
// 13) return root
// 14) end Insert_Node

// 1) Algorithm Delete_Node(root, data)
// 2) Pre: root is the root node of the BST, data is the integer to delete
// 3) Post: Node with the specified data is deleted and the tree is updated
// 4) if root = NULL then
// 5)     return NULL
// 6) end if
// 7) if data < root->data then
// 8)     root->left ← Delete_Node(root->left, data)
// 9) else if data > root->data then
// 10)     root->right ← Delete_Node(root->right, data)
// 11) else
// 12)     if root->left = NULL then
// 13)         temp ← root->right
// 14)         free(root)
// 15)         return temp
// 16)     else if root->right = NULL then
// 17)         temp ← root->left
// 18)         free(root)
// 19)         return temp
// 20)     end if
// 21)     temp ← Find_Min(root->right)
// 22)     root->data ← temp->data
// 23)     root->right ← Delete_Node(root->right, temp->data)
// 24) end if
// 25) return root
// 26) end Delete_Node

// 1) Algorithm Inorder_Traversal(root)
// 2) Pre: root is the root node of the BST
// 3) Post: Nodes are visited in in-order (left, root, right) and printed
// 4) if root = NULL then
// 5)     return
// 6) end if
// 7) Inorder_Traversal(root->left)
// 8) print root->data
// 9) Inorder_Traversal(root->right)
// 10) end Inorder_Traversal

// 1) Algorithm Preorder_Traversal(root)
// 2) Pre: root is the root node of the BST
// 3) Post: Nodes are visited in pre-order (root, left, right) and printed
// 4) if root = NULL then
// 5)     return
// 6) end if
// 7) print root->data
// 8) Preorder_Traversal(root->left)
// 9) Preorder_Traversal(root->right)
// 10) end Preorder_Traversal

// 1) Algorithm Postorder_Traversal(root)
// 2) Pre: root is the root node of the BST
// 3) Post: Nodes are visited in post-order (left, right, root) and printed
// 4) if root = NULL then
// 5)     return
// 6) end if
// 7) Postorder_Traversal(root->left)
// 8) Postorder_Traversal(root->right)
// 9) print root->data
// 10) end Postorder_Traversal

// 1) Algorithm Count_Nodes(root)
// 2) Pre: root is the root node of the BST
// 3) Post: Returns the total number of nodes in the tree
// 4) if root = NULL then
// 5)     return 0
// 6) end if
// 7) return 1 + Count_Nodes(root->left) + Count_Nodes(root->right)
// 8) end Count_Nodes

// 1) Algorithm Count_Internal_Nodes(root)
// 2) Pre: root is the root node of the BST
// 3) Post: Returns the count of internal nodes (nodes with at least one child)
// 4) if root = NULL then
// 5)     return 0
// 6) end if
// 7) if root->left ≠ NULL or root->right ≠ NULL then
// 8)     return 1 + Count_Internal_Nodes(root->left) + Count_Internal_Nodes(root->right)
// 9) else
// 10)     return 0
// 11) end if
// 12) end Count_Internal_Nodes

// 1) Algorithm Count_External_Nodes(root)
// 2) Pre: root is the root node of the BST
// 3) Post: Returns the count of external nodes (leaf nodes)
// 4) if root = NULL then
// 5)     return 0
// 6) end if
// 7) if root->left = NULL and root->right = NULL then
// 8)     return 1
// 9) else
// 10)     return Count_External_Nodes(root->left) + Count_External_Nodes(root->right)
// 11) end if
// 12) end Count_External_Nodes

// 1) Algorithm Find_Height(root)
// 2) Pre: root is the root node of the BST
// 3) Post: Returns the height of the tree
// 4) if root = NULL then
// 5)     return 0
// 6) end if
// 7) leftHeight ← Find_Height(root->left)
// 8) rightHeight ← Find_Height(root->right)
// 9) return max(leftHeight, rightHeight) + 1
// 10) end Find_Height

// 1) Algorithm Find_Smallest(root)
// 2) Pre: root is the root node of the BST
// 3) Post: Returns the smallest node in the tree
// 4) current ← root
// 5) while current->left ≠ NULL do
// 6)     current ← current->left
// 7) end while
// 8) return current->data
// 9) end Find_Smallest

// 1) Algorithm Find_Largest(root)
// 2) Pre: root is the root node of the BST
// 3) Post: Returns the largest node in the tree
// 4) current ← root
// 5) while current->right ≠ NULL do
// 6)     current ← current->right
// 7) end while
// 8) return current->data
// 9) end Find_Largest



#include <stdio.h>
#include <stdlib.h>

// Node structure for the binary search tree
struct Node {
    int data;
    struct Node *left, *right;
};

// Create a new node with the given data
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Insert a node into the binary search tree
struct Node* insert(struct Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }
    if (data < root->data) {
        root->left = insert(root->left, data);
    } else {
        root->right = insert(root->right, data);
    }
    return root;
}

// Find the node with the minimum value in the tree
struct Node* findMin(struct Node* root) {
    while (root && root->left != NULL) {
        root = root->left;
    }
    return root;
}

// Delete a node from the binary search tree
struct Node* deleteNode(struct Node* root, int data) {
    if (root == NULL) {
        return root;
    }
    
    // Search for the node to be deleted
    if (data < root->data) {
        root->left = deleteNode(root->left, data);
    } else if (data > root->data) {
        root->right = deleteNode(root->right, data);
    } else {
        // Node to be deleted found
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }
        
        // Node has two children, find the inorder successor
        struct Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}



// Traversal – In-order (left, root, right)
void inorderTraversal(struct Node* root) {
    if (root == NULL) {
        return;
    }
    inorderTraversal(root->left);
    printf("%d ", root->data);
    inorderTraversal(root->right);
}

// Traversal – Pre-order (root, left, right)
void preorderTraversal(struct Node* root) {
    if (root == NULL) {
        return;
    }
    printf("%d ", root->data);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

// Traversal – Post-order (left, right, root)
void postorderTraversal(struct Node* root) {
    if (root == NULL) {
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d ", root->data);
}

// Count total number of nodes
int countNodes(struct Node* root) {
    if (root == NULL) {
        return 0;
    }
    return 1 + countNodes(root->left) + countNodes(root->right);
}

// Count number of internal nodes (nodes with at least one child)
int countInternalNodes(struct Node* root) {
    if (root == NULL) {
        return 0;
    }
    if (root->left != NULL || root->right != NULL) {
        return 1 + countInternalNodes(root->left) + countInternalNodes(root->right);
    }
    return 0;
}

// Count number of external nodes (leaf nodes)
int countExternalNodes(struct Node* root) {
    if (root == NULL) {
        return 0;
    }
    if (root->left == NULL && root->right == NULL) {
        return 1;
    }
    return countExternalNodes(root->left) + countExternalNodes(root->right);
}

// Find the height of the tree
int height(struct Node* root) {
    if (root == NULL) {
        return 0;
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;
}

// Find the smallest node in the tree
int findSmallest(struct Node* root) {
    struct Node* current = root;
    while (current && current->left != NULL) {
        current = current->left;
    }
    return current->data;
}

// Find the largest node in the tree
int findLargest(struct Node* root) {
    struct Node* current = root;
    while (current && current->right != NULL) {
        current = current->right;
    }
    return current->data;
}

// Main function to test the operations
int main() {
    struct Node* root = NULL;
    
    // Insert nodes
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);
    
    // In-order traversal
    printf("In-order traversal: ");
    inorderTraversal(root);
    printf("\n");
    
    // Pre-order traversal
    printf("Pre-order traversal: ");
    preorderTraversal(root);
    printf("\n");
    
    // Post-order traversal
    printf("Post-order traversal: ");
    postorderTraversal(root);
    printf("\n");
    
    // Count total number of nodes
    printf("Total number of nodes: %d\n", countNodes(root));
    
    // Count internal nodes
    printf("Number of internal nodes: %d\n", countInternalNodes(root));
     
    // Count external nodes
    printf("Number of external nodes: %d\n", countExternalNodes(root));
    
    // Find the height of the tree
    printf("Height of the tree: %d\n", height(root));
    
    // Find the smallest node
    printf("Smallest node: %d\n", findSmallest(root));
    
    // Find the largest node
    printf("Largest node: %d\n", findLargest(root));
    
    // Delete a node
    printf("Deleting node 20\n");
    root = deleteNode(root, 20);
    
    // In-order traversal after deletion
    printf("In-order traversal after deletion: ");
    inorderTraversal(root);
    printf("\n");
printf("~Ashish Kumar Gupta \n CS-DS-2A \n 2301641540057");
    
    return 0;
}
