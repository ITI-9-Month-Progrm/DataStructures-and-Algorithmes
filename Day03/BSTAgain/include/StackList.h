#ifndef STACKLIST_H
#define STACKLIST_H

#include "NodeStack.h"
template<class T>
class StackList
{
    public:

    NodeStack<T> *tail;int length;


        StackList() {
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
        void PopValue(){
            NodeStack <T> * current;
            current=tail->Preveous;
            delete tail;
            tail=current;
            --length;
           }
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
    private:
};

#endif // STACKLIST_H
