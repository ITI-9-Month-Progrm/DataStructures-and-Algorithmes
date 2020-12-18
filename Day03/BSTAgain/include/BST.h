#ifndef BST_H
#define BST_H

#include "NodeBST.h"
#include "StackList.h"
using namespace std;
template<class T>
class BST
{
     NodeBST <T>*root;
    public:
        BST(){
            root=NULL;
        }
void addNode(T *data){
        NodeBST <T>*newNode =new NodeBST<T>(data);
        NodeBST <T>*current,*parent; ///current to move on Nodes  /// parent to hold the last current before null

        if(root==NULL){
            root=newNode;
            cout<<"tmamRoot"<<endl;
           }
        else{
             current=root;
          while(current!=NULL){
                    parent=current;
            if(newNode->Data > current->Data){
                    current=current->Right;
                }
            else{
                    current=current->Left;
                }
             }
          if(newNode->Data > parent->Data){
                parent->Right=newNode;
                cout<<"tmamR"<<endl;
               }
        else{
                parent->Left=newNode;
                cout<<"tmamL"<<endl;
               }

           }
    }
    ///implement for DFS
    void displayWithStack(){
        StackList <NodeBST<T> >s;  ///to hold nodes of tree start from root then left and right
        NodeBST<T> *current;   ///to hold root->Left Node and so on
        NodeBST<T> *res;       ///to hold topValue from stack
        int check;             /// to determine poped node from stack has right or no
        current=root;
        s.PushValue(root);   ///the first push in stack
//////////////////////////////////////////////////////////
       ///res=s.TopValue();
        ///cout<<"res:"<<*res->Data<<endl;   ///sh3aliin
/////////////////////////////////////////////////////////
        while(current->Left != NULL){

            s.PushValue(current);  /// push NodeBST before change current->Left
            current=current->Left;
        }

        while(!s.IsEmpty()){
            res=s.TopValue()->Data; ///to hold the last entered node
            s.PopValue();     ///to delete the last entered node
            check=IsParent(res);
            switch(check){
        case 0:
            cout<<*res->Data<<" ";
            break;
        case 1:
            cout<<*res->Data<<" ";
            s.PushValue(res->Right);
            break;


            }
        }


    }
    private:
        int IsParent(NodeBST <T> *node){
             int res;
             if(node->Left == NULL && node->Right == NULL)
                res = 0;
             else if(node->Right != NULL)
                res = 1;


       return res; }
};

#endif // BST_H
