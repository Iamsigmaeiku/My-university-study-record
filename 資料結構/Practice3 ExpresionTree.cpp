#include <stdio.h>
#include <stdlib.h>

typedef struct node *TreePointer;
struct node{
        int data;
        TreePointer left, right;
};

void inorder(TreePointer ptr)
{
     if (ptr){
      inorder(ptr->left);
      printf("%d ",ptr->data);
      inorder(ptr->right);
    }

     
}

int* search(TreePointer root, int key)
{
   
  if (!root) 
            return NULL;
       if (key == root->data)
            return &(root->data);
       if (key < root->data)
            return search(root->left, key);
       else
            return search(root->right, key);

}

int* iterSearch(TreePointer tree, int k)
{
     while (tree) {
          if (k == tree->data)
                return &(tree->data);
          if (k < tree->data)
                 tree = tree->left;
         else
                 tree = tree->right;
         }
         return NULL;

     
}

int main()
{
      TreePointer  A, B, C, D, E;
     A=(TreePointer)malloc(sizeof(*A));
     A->data=35;A->left=NULL;A->right=NULL;
     B=(TreePointer)malloc(sizeof(*B));

     
     B->data=46;B->left=NULL;B->right=NULL; 
         C=(TreePointer)malloc(sizeof(*C));

          C->data=20;C->left=NULL;C->right=NULL;
         D=(TreePointer)malloc(sizeof(*D));
     D->data=27;D->left=NULL;D->right=NULL;
     E=(TreePointer)malloc(sizeof(*E));
     E->data=38;E->left=NULL;E->right=NULL;
     
      TreePointer btree=NULL;
     A->left=C;A->right=B;
     C->right=D;
     B->left=E;
     TreePointer tree=A;
     inorder(tree);
     printf("\n");
     
	 int* p = search(tree, 27);
	 printf("%x %d \n", p, *p);
	  
     p=iterSearch(tree,38);
     printf("%x %d\n",p,*p);
     p=iterSearch(tree,100);
     if(p!=NULL){
     
      printf("%x %d\n",p,*p);

     }
     else{
         printf("not found\n");
     }
      system("pause");// system("pause");
      
}
     
      
      