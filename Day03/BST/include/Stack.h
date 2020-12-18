#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "NodeStack.h"

using namespace std;

template <class T>
class Stack
{
    public:
        NodeStack<T> *tail;int length;
        Stack() {
        tail=NULL;
        length=0;
        }

        void PushValue(T *data){
            NodeStack<T> *newNode=new NodeStack<T>(data);


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
            NodeStack <T> * current;
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

       T *TopValue(){
         return tail->Data;
       }

       NodeStack <T>* TopNode(){
          return tail;
       }

       void displayList(){

         NodeStack <T> *current;
          current=tail;
          while(current!=NULL){
            cout<<current->Data<<endl;
            current=current->Preveous;
          }


        }






};

#endif // LINKEDLIST_H
