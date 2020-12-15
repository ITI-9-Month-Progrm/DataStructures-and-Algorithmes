#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

using namespace std;
template <class T>

class LinkedList
{
    public:
        Node<T> *head,*tail;int length;
        LinkedList() {
        head=tail=NULL;
        length=0;
        }

        void addNewNode(T data){
            Node<T> *newNode=new Node<T>(data);

          if(head==NULL){
            head=tail=newNode;
            }
            else{
                tail->Next=newNode;
                newNode->Preveous=tail;
                tail=newNode;
            }

            length++;
        }

        void displayList(){
          Node <T> *current;
          current=head;
          while(current!=NULL){
            cout<<current->Data<<endl;
            current=current->Next;
          }


       }

       void insertAfter(T *AfterNode,T *NewNode){
           Node<T> *newNode = new Node<T>(*NewNode);
           Node<T> *afterNode=Search(AfterNode);

           if(afterNode == NULL){return;}
           else{
                if(afterNode == head){

            newNode->Next=head->Next;
            head->Next=newNode;
            newNode->Preveous=head;
       }
           else if(afterNode == tail){
               tail->Next=newNode;
               newNode->Preveous=tail;
               tail=newNode;

           }
           else{
            newNode->Next=afterNode->Next;
            afterNode->Next=newNode;
            newNode->Preveous=afterNode;
           }


                ++length;}




       }

      LinkedList <T> reverseList(){

        Node <T> *current;
        LinkedList <T>RL;
          current=tail;
          while(current!=NULL){
                RL.addNewNode(current->Data);

            current=current->Preveous;
          }
          return RL;
      }

      void deleteByIndex(int index){

          Node <T> *current,*after,*before;


         if(index==0){
          current=head;
          head=head->Next;
          head->Preveous=NULL;
          current=NULL;
         }
         else if(index==length-1){
            current=tail;
            tail=current->Preveous;
            tail->Next=NULL;
            current=NULL;
         }
      else {
            current=head->Next;
        for(int i=1;i<length-2;i++){
            if(index==i){
                after=current->Next;
                before=current->Preveous;
                before->Next=after;
                 delete current;
                 break;
            }
      current=current->Next;
        }
      }
--length;
      }

    private:
        Node<T>* Search(T *data)
    {
        Node<T> *current = head;

        while(current != NULL)
        {
            if(current->Data == *data)
                return current;

            current = current->Next;
        }

        return NULL;
    }
};

#endif // LINKEDLIST_H
