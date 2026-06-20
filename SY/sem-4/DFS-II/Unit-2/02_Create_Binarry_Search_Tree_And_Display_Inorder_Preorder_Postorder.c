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

int main(){
    int j; // used for switch case
    
    while(1){
        printf("\n========== Binary Search Tree Menu ==========");
        printf("\n 1. Create/Insert Node");
        printf("\n 2. Display Tree (All Traversals)");
        printf("\n 3. Inorder Traversal");
        printf("\n 4. Preorder Traversal");
        printf("\n 5. Postorder Traversal");
        printf("\n 6. Exit");
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
    printf("Node inserted successfully! Root is: %d\n", root->info);
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
