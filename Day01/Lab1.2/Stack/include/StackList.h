#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

using namespace std;
template <class T>

class StackList
{
    public:
        Node<T> *tail;int length;
        StackList() {
        tail=NULL;
        length=0;
        }

        void PushValue(T data){
            Node<T> *newNode=new Node<T>(data);

          if(tail==NULL){
            tail=newNode;
            }
            else{
                tail->Next=newNode;
                newNode->Preveous=tail;
                tail=newNode;
            }

            length++;
        }
///////////////////
        void PopValue(){
            Node <T> * current;
            current=tail->Preveous;
            delete tail;
            tail=current;
            --length;
           }

       ////////////
       int IsEmpty(){
          if(length){
            return length;
          }
          else{
            return 0;
          }

       }

       T TopValue(){
         return tail->Data;
       }

       void displayList(){

         Node <T> *current;
          current=tail;
          while(current!=NULL){
            cout<<current->Data<<endl;
            current=current->Preveous;
          }


        }






};

#endif // LINKEDLIST_H
