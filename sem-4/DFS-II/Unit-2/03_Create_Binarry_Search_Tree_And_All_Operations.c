#include<stdio.h>
#include<stdlib.h>

struct tree{
    int info;
    struct tree *left_root;
    struct tree *right_root;
};

struct tree *root = NULL;
int item;

// Function declarations
void create_tree();
void display_tree();
struct tree* insert(struct tree *node, int value);
void inorder(struct tree *node);
void preorder(struct tree *node);
void postorder(struct tree *node);
struct tree* delete_node(struct tree *node, int value);
struct tree* find_min(struct tree *node);
void search_tree();
void delete_tree();
void replace_tree();

int main(){
    int j; // used for switch case
    
    while(1){
        printf("\n========== Binary Search Tree Menu ==========");
        printf("\n 1. Create/Insert Node");
        printf("\n 2. Display Tree (All Traversals)");
        printf("\n 3. Inorder Traversal");
        printf("\n 4. Preorder Traversal");
        printf("\n 5. Postorder Traversal");
        printf("\n 6. Search Node");
        printf("\n 7. Delete Node");
        printf("\n 8. Replace/Update Node");
        printf("\n 9. Exit");
        printf("\n=============================================");
        printf("\nChoose Option: ");
        scanf("%d", &j);
        
        switch(j){
            case 1:
                create_tree();
                break;
            
            case 2:
                display_tree();
                break;
            
            case 3:
                printf("\n Inorder Traversal: ");
                inorder(root);
                printf("\n");
                break;
            
            case 4:
                printf("\n Preorder Traversal: ");
                preorder(root);
                printf("\n");
                break;
            
            case 5:
                printf("\n Postorder Traversal: ");
                postorder(root);
                printf("\n");
                break;
            
            case 6:
                search_tree();
                break;
            
            case 7:
                delete_tree();
                break;
            
            case 8:
                replace_tree();
                break;
            
            case 9:
                printf("\n Exiting program...\n");
                exit(0);
                
            default:
                printf("\n Invalid Choice! Please try again.\n");
                break;        
        }
    }    
}

void create_tree(){
    printf("\nEnter Element: ");
    scanf("%d", &item);
    
    root = insert(root, item);
    printf("Node inserted successfully!\n");
}

struct tree* insert(struct tree* node, int value){
    if(node == NULL){
        struct tree *newnode = (struct tree*)malloc(sizeof(struct tree));
        newnode->info = value;
        newnode->left_root = NULL;
        newnode->right_root = NULL;
        return newnode;
    }
    
    if(value < node->info)
        node->left_root = insert(node->left_root, value);
        
    else if(value > node->info)
        node->right_root = insert(node->right_root, value);
    
    else
        printf("Duplicate value! Node not inserted.\n");
        
    return node;
}

void display_tree(){
    if(root == NULL){
        printf("\n Tree is empty!\n");
        return;
    }
    else{
    	printf("\n========== Tree Traversals ==========");
    
 	    printf("\n Inorder Traversal   (Left-Root-Right): ");
    	inorder(root);
    
    	printf("\n Preorder Traversal  (Root-Left-Right): ");
    	preorder(root);
    
    	printf("\n Postorder Traversal (Left-Right-Root): ");
    	postorder(root);
    
    	printf("\n=====================================\n");
	}
}

// Inorder: Left -> Root -> Right
void inorder(struct tree *node){
    if(node != NULL){  
        inorder(node->left_root);
        printf("%d ", node->info);  
        inorder(node->right_root);
    }
}

// Preorder: Root -> Left -> Right
void preorder(struct tree *node){
    if(node != NULL){
        printf("%d ", node->info);
        preorder(node->left_root);
        preorder(node->right_root);
    }
}

// Postorder: Left -> Right -> Root
void postorder(struct tree *node){
    if(node != NULL){
        postorder(node->left_root);
        postorder(node->right_root);
        printf("%d ", node->info);
    }
}

// Search function
void search_tree(){
    if(root == NULL){
        printf("\n Tree is empty!\n");
        return;
    }
    else{
    	int search_value;
    	printf("\nEnter value to search: ");
    	scanf("%d", &search_value);
    
    	struct tree *current = root;
    	int found = 0;
    
    	while(current != NULL){
        	if(search_value == current->info){
            	printf("\n Value %d FOUND in the tree!\n", search_value);
            	found = 1;
            	break;
        	}
        	else if(search_value < current->info){
            	current = current->left_root;
        	}
        	else{
            	current = current->right_root;
        	}
    	}
    
    	if(!found){
        	printf("\n Value %d NOT FOUND in the tree!\n", search_value);
    	}
	}
}

// Find minimum value node (used in deletion)
struct tree* find_min(struct tree *node){
    while(node->left_root != NULL){
        node = node->left_root;
    }
    return node;
}

// Delete node function
struct tree* delete_node(struct tree *node, int value){
    if(node == NULL){
        return node;
    }
    
    // Search for the node to delete
    if(value < node->info){
        node->left_root = delete_node(node->left_root, value);
    }
    else if(value > node->info){
        node->right_root = delete_node(node->right_root, value);
    }
    else{
        // Node found - now delete it
        
        // Case 1: Node with no children (leaf node)
        if(node->left_root == NULL && node->right_root == NULL){
            free(node);
            return NULL;
        }
        
        // Case 2: Node with one child
        else if(node->left_root == NULL){
            struct tree *temp = node->right_root;
            free(node);
            return temp;
        }
        else if(node->right_root == NULL){
            struct tree *temp = node->left_root;
            free(node);
            return temp;
        }
        
        // Case 3: Node with two children
        else{
            // Find inorder successor (minimum in right subtree)
            struct tree *temp = find_min(node->right_root);
            
            // Copy the inorder successor's data to this node
            node->info = temp->info;
            
            // Delete the inorder successor
            node->right_root = delete_node(node->right_root, temp->info);
        }
    }
    return node;
}

void delete_tree(){
    if(root == NULL){
        printf("\n Tree is empty! Nothing to delete.\n");
        return;
    }
    else{
    	int delete_value;
    	printf("\nEnter value to delete: ");
    	scanf("%d", &delete_value);
    
    	// First check if value exists
    	struct tree *current = root;
    	int found = 0;
    
    	while(current != NULL){
        	if(delete_value == current->info){
            	found = 1;
            	break;
        	}
        	else if(delete_value < current->info){
            	current = current->left_root;
        	}
        	else{
            	current = current->right_root;
        	}
    	}
    
    	if(!found){
        	printf("\n Value %d NOT FOUND in the tree! Cannot delete.\n", delete_value);
        	return;
    	}
    
    	root = delete_node(root, delete_value);
    	printf("\n Value %d deleted successfully!\n", delete_value);
	}    
}

// Replace/Update function
void replace_tree(){
    if(root == NULL){
        printf("\n Tree is empty! Nothing to replace.\n");
        return;
    }
    else{
    	int old_value, new_value;
    	printf("\nEnter value to replace: ");
    	scanf("%d", &old_value);
    
    	// First check if old value exists
    	struct tree *current = root;
    	int found = 0;
    
    	while(current != NULL){
        	if(old_value == current->info){
            	found = 1;
            	break;
        	}
        	else if(old_value < current->info){
            	current = current->left_root;
        	}
        	else{
            	current = current->right_root;
        	}
    	}
    
    	if(!found){
        	printf("\n Value %d NOT FOUND in the tree! Cannot replace.\n", old_value);
        	return;
    	}
    
    	printf("Enter new value: ");
    	scanf("%d", &new_value);
    
    	// Delete old value and insert new value
    	root = delete_node(root, old_value);
    	root = insert(root, new_value);
    
    	printf("\n Value %d replaced with %d successfully!\n", old_value, new_value);
	} 
}
