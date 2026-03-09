#include<stdio.h>
#include<stdlib.h>

int tree_array[100];  // Array to store tree elements
int count=0;        // Count of elements
int item;

void create_tree();
void display_tree();
void insert(int value);
void inorder();

int main(){
    int j; // used for switch case
    
    while(1){
        printf("\n 1.Create Tree: ");
        printf("\n 2.Display Tree: ");
        printf("\n 3.Exit");
        printf("\nChoose Condition: ");
        scanf("%d",&j);
        
        switch(j){
            case 1:
                create_tree();
                break;
            
            case 2:
                display_tree();
                break;
                
            case 3:
                exit(0);
                
            default:
                printf("\n Invalid Choice: \n");
                break;        
        }
    }
    
    return 0;    
}

void create_tree(){
    printf("\nEnter Elements: ");
    scanf("%d",&item);
    
    insert(item);
    printf("Root is :%d",tree_array[0]);
}

void insert(int value){
    int i, j, temp;  // Declare variables at the beginning
    
    tree_array[count] = value;
    count++;
    
    // Sort array to maintain BST property using for loop
    for(i=count-1; i>0; i--){
        for(j=0; j<i; j++){
            if(tree_array[j] > tree_array[j+1]){
                temp = tree_array[j];
                tree_array[j] = tree_array[j+1];
                tree_array[j+1] = temp;
            }
        }
    }
}

void display_tree(){
    printf("\n Inorder Traversal of Binary Tree is: ");
    inorder();
    printf("\n");
}

void inorder(){
    int i;  // Declare variable at the beginning
    
    // Display all elements using for loop
    for(i=0; i<count; i++){
        printf("%d ", tree_array[i]);
    }
}
