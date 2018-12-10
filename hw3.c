#include<stdio.h>
#include<stdlib.h>

typedef struct node node;
typedef struct node *nodePtr;
struct node{
    int data;
    nodePtr left;
    nodePtr right;
};


nodePtr addNode(nodePtr ptr, int n){
    if (ptr == NULL){
        ptr = (nodePtr) malloc(sizeof(node));
        ptr->data = n;
        ptr->left = NULL;
        ptr->right = NULL;
    }
    else{
        if(n <= ptr->data){
            ptr->left = addNode(ptr->left, n);
        }
        else{
            ptr->right = addNode(ptr->right, n);
        }
    }
    return(ptr);
}

int isdigit(char c){
    return ( ((int)c >= 48) && ((int)c <= 57) )? 1 : 0;
}

/* Print nodes in Postorder*/
void printPostorder(nodePtr ptr)
{
     if (ptr == NULL)
        return;

     // first recur on left subtree
     printPostorder(ptr->left);

     // then recur on right subtree
     printPostorder(ptr->right);

     // now deal with the node
     printf("%d ", ptr->data);
}

/* Print nodes in inorder*/
void printInorder(nodePtr ptr)
{
     if (ptr == NULL)
          return;

     /* first recur on left child */
     printInorder(ptr->left);

     /* then print the data of node */
     printf("%d ", ptr->data);

     /* now recur on right child */
     printInorder(ptr->right);
}

/* Print nodes in preorder*/
void printPreorder(nodePtr ptr)
{
     if (ptr == NULL)
          return;

     /* first print data of node */
     printf("%d ", ptr->data);

     /* then recur on left sutree */
     printPreorder(ptr->left);

     /* now recur on right subtree */
     printPreorder(ptr->right);
}


int main(){
    int n = 0;
    scanf("%d", &n);

    int n1 = n;
    int arr[100] = {'0'};
    int j = 0; //int array index
    nodePtr tree[100] = {'\0'}; // tree array
    int countT = 0; // tree count(index)
    for(n; n>0; n--){
        char str[100] = {'0'};
        while((scanf("%s", str)) != EOF){
            int i = 0; //string char index
            j = 0; //int array index initial
            int num = 0; //input number
            int pos = 1; //positive flag
            for(i; str[i]!='\0'; i++){
                if((isdigit(str[i])) == 1){
                    num = num*10 + (str[i] - '0');
                    if (pos == 1)
                        arr[j] = num;
                    else
                        arr[j] = (-1)*num;
                }
                else if(str[i] == '-'){
                    pos = -1;
                    // positive flag set to -1
                }
                else{
                    num = 0; // number reset
                    pos = 1; // positive flag reset to 1
                    j++; // array index goes to next
                }
            }

            int countA = 0; // array count

            tree[countT] = (nodePtr) malloc(sizeof(node));
            tree[countT] = NULL;
            // initial tree
            for(countA; countA<=j; countA++){
                tree[countT] = addNode(tree[countT], arr[countA]);
                // save integers into tree
            }
            countT++;
            break;
        }
    }

    int count = 0;
    for(count; count < n1; count++){
        printf("Preorder: ");
        printPreorder(tree[count]);
        printf("\nInorder: ");
        printInorder(tree[count]);
        printf("\nPostorder: ");
        printPostorder(tree[count]);
        printf("\n");
    }
}
