#include <stdio.h>
#include <stdlib.h>

typedef struct node *treePointer;
typedef struct node{
        int data;
        treePointer left, right;
};

void preorder(treePointer ptr)
{
     if (ptr){
             printf("%d",ptr->data);
             preorder(ptr->left);
             preorder(ptr->right);
}
}

void postorder(treePointer ptr)
{
         if (ptr){
                postorder(ptr->left);
                postorder(ptr->right);
                printf("%d",ptr->data);
             }


}

void inorder(treePointer ptr)
{
    if (ptr){
      inorder(ptr->left);
      printf("%d",ptr->data);
      inorder(ptr->right);
    }
 
     
}

int main()
{
      treePointer  A, B, C, D, E;
      
     // 配置一個node空間並讓 A 指向此node 空間的起始位址
     A = (treePointer)malloc (sizeof (*A));
     // 將 A 的 data 設成 13, left 和 right 設成 NULL
     A->data = 13; A->left = NULL; A->right = NULL;
     // 配置一個node空間並讓 B 指向此node 空間的起始位址
     B=(treePointer)malloc(sizeof(*B));
     // 將 B 的 data 設成 36, left 和 right 設成 NULL
     B->data=36;B->left=NULL;B->right=NULL;
     // 配置一個node空間並讓 C 指向此node 空間的起始位址
     C=(treePointer)malloc(sizeof(*C));
     // 將 C 的 data 設成 43, left 和 right 設成 NULL
     C->data=43;C->left=NULL;C->right=NULL;
     // 配置一個node空間並讓 D 指向此node 空間的起始位址
     D= (treePointer)malloc (sizeof (*D));

     // 將 D 的 data 設成 27, left 和 right 設成 NULL
     D->data=27;D->left=NULL;D->right=NULL;

     //配置一個node空間並讓 D 指向此node 空間的起始位址
          E= (treePointer)malloc (sizeof (*E));

     // 將 E 的 data 設成 9, left 和 right 設成 NULL
     E->data=9;E->left=NULL;E->right=NULL;
     // 將 A的 left 指向 C, right 指向 B
     A->left=C;A->right=B;
     // 將 C 的 right 指向 D
     C->right=D;
     // 將 B的 left 指向 E
     B->left=E;
     // 宣告一個 TreePointer tree 並指向 A 
     treePointer tree=A;
     // 呼叫 inoder() 將  tree 的所有 node 照著 inorder順序走一次   Inorder: 43 27 13 9 36  
     
     inorder(tree);
     printf("\n");
     // 呼叫 postorder()  將  tree 的所有 node 照著 post order順序走一次 Postorder: 27 43 9 36 13  
     postorder(tree);
          printf("\n");

     // 呼叫 preorder()  將  tree 的所有 node 照著 pre order順序走一次 Preorder: 13 43 27 36 9
     preorder(tree);
          printf("\n");

      system("pause");// system("pause");
      
}
     
      
      