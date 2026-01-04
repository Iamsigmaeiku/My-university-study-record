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
 //遞迴樹狀二分搜尋法    
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
// 迴圈樹狀二分搜尋法 
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
     // 配置一個node空間並讓 A 指向此node 空間的起始位址
     A=(TreePointer)malloc(sizeof(*A));
     // 將 A 的 data 設成 35, left 和 right 設成 NULL
     A->data=35;A->left=NULL;A->right=NULL;
     // 配置一個node空間並讓 B 指向此node 空間的起始位址
     B=(TreePointer)malloc(sizeof(*B));

     // 將 B 的 data 設成 46, left 和 right 設成 NULL
     B->data=46;B->left=NULL;B->right=NULL; 
     // 配置一個node空間並讓 C 指向此node 空間的起始位址
     C=(TreePointer)malloc(sizeof(*C));

     // 將 C 的 data 設成 20, left 和 right 設成 NULL
     C->data=20;C->left=NULL;C->right=NULL;
     // 配置一個node空間並讓 D 指向此node 空間的起始位址
     D=(TreePointer)malloc(sizeof(*D));
     // 將 D 的 data 設成 27, left 和 right 設成 NULL
     D->data=27;D->left=NULL;D->right=NULL;
     //配置一個node空間並讓 D 指向此node 空間的起始位址
     E=(TreePointer)malloc(sizeof(*E));
     // 將 E 的 data 設成 38, left 和 right 設成 NULL
     E->data=38;E->left=NULL;E->right=NULL;
     // 建立二分搜尋樹 
     
     // 宣告一個 TreePointer btree, 並設為 NULL 
      TreePointer btree=NULL;
     // 將 A的 left 指向 C, right 指向 B
     A->left=C;A->right=B;
     // 將 C 的 right 指向 D
     C->right=D;
     // 將 B的 left 指向 E
     B->left=E;
     // 宣告一個 treePointer tree 並指向 A 
     TreePointer tree=A;
     // 呼叫 inorder(), 將 btree的所有節點走一遍  
     inorder(tree);
     printf("\n");
     // 二分搜尋樹 
     
     // 呼叫 search() 搜尋 tree裡面有無 27 , printf 回傳指標 p 以及*p
	 int* p = search(tree, 27);
	 printf("%x %d \n", p, *p);
	  
     // 呼叫  iterSearch() 搜尋 tree裡面有無 38, printf 回傳指標 p 以及*p 
     p=iterSearch(tree,38);
     printf("%x %d\n",p,*p);
     // 呼叫 iterSearch() 搜尋 tree裡面有無 100, printf 回傳指標 p 以及*p
     p=iterSearch(tree,100);
     if(p!=NULL){
     
      printf("%x %d\n",p,*p);

     }
     else{
         printf("not found\n");
     }
      system("pause");// system("pause");
      
}
     
      
      