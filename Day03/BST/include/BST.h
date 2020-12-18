#ifndef BST_H
#define BST_H

#include "Node.h"
#include "NodeStack.h"
#include "Stack.h"



template<class T>
class BST
{
     Node <T>*root;


public:
      BST(){
            root=NULL;
        }
///------------------------------------------------------------------------------
    void addNode(T *data){
        Node <T>*newNode =new Node<T>(data);
        Node <T>*current,*parent; ///current to move on Nodes  /// parent to hold the last current before null

        if(root==NULL){
            root=newNode;
            cout<<"tmamRoot"<<endl;
           }
        else{
             current=root;
          while(current!=NULL){
                    parent=current;
            if(*newNode->Data > *current->Data){
                    current=current->Right;
                }
            else{
                    current=current->Left;
                }
             }
          if(*newNode->Data > *parent->Data){
                parent->Right=newNode;
                cout<<"tmamR"<<endl;
               }
        else{
                parent->Left=newNode;
                cout<<"tmamL"<<endl;
               }

           }
    }
///------------------------------------------------------------------------------
    void DispalyWithStack(){
        Stack <T> s;
        Node <T> *current;
        NodeStack <T> *res;
        Node <T> *searchRes;
        int check;
        if(root->Left!=NULL){
            current=root;
            while(current->Left!=NULL){
                searchRes=Search((current->Left->Data));
                s.PushValue(searchRes->Left->Data); /// push old value
                current=current->Left;      ///change current
            }
            while(s.IsEmpty()){
                res=s.TopNode(); ///to hold the last left node
                s.PopValue();   /// to remove from stack
                searchRes=Search(res->Data);
                check=IsParent(searchRes);
                switch(check){

                  case 0:
                     cout<<*res->Data<<" ";  ///node has not any child
                    break;
                  case 1:break;
                    cout<<*res->Data<<" ";
                     searchRes=Search(current->Right->Data);
                     s.PushValue(searchRes->Right->Data);          /// node has right child
                   // s.PushValue(res->Right);      ///push right
                  case 2:break;
                    cout<<*res->Data<<" ";        /// node has two children but i display
                    searchRes=Search(current->Right->Data);
                     s.PushValue(searchRes->Right->Data);
                }
            }
        }
    }


    private:
         int IsParent(Node<T> *stackValue){
             int x;       /// if or if else is perfect
              if(stackValue->Left!= NULL && stackValue->Right != NULL){
                x= 2;
              }
              else if (stackValue->Left == NULL && stackValue->Right == NULL){
                x= 0;
              }

              else if(stackValue->Right != NULL){
                x= 1;
              }
return x;
         }
Node<T>* Search(T *data)
    {
        Node <T>*current = root;

        while(current != NULL)
        {
            if(*data == *current->Data)
                return current;

            if(*data > *current->Data)
                current = current->Right;
            else
                current = current->Left;
        }

        return NULL;
    }

};

#endif // BST_H
