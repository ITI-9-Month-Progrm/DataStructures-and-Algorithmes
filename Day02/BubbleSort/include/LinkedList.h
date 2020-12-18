#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
#include <cmath>
using namespace std;

template<class T>
class LinkedList
{
    Node<T> *head, *tail;
    int length;

public:
    LinkedList()
    {
        head = tail = NULL;
        length=0;
    }

     void Add(T *data)
    {
        Node<T> *newNode = new Node<T>(data);

        if(head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->Next = newNode;
            newNode->Prev = tail;
            tail = newNode;
        }
    length++;
    }

    void Display()
    {
        Node<T> *current = head;

        while(current != NULL)
        {
            cout << *(current->Data) <<"->";
            current = current->Next;
        }
        cout<<"NULL"<<endl;
    }
   void bubbleSort(){
       Node <T> *current ,*temp;
       int flagSorted;
       flagSorted=0; ///not sorted



        while(  (!flagSorted)  ){
                flagSorted=1;
                temp=head;
                current=temp->Next;
              while(temp->Next!=NULL){
                     if(*temp->Data > *current->Data){

                        swap(temp->Data,current->Data);
                        ///swapData(temp,current);  ///it can not see
                        flagSorted=0;
                        temp=temp->Next;
                        current=current->Next;
                     }

                    else{
                        temp=temp->Next;
                        current=current->Next;

                    }
            }
        }
 }

   void selectionSort(){

          Node <T> *current, *minTemp,*Temp;

          current=head;
          while(current->Next!=NULL){
            Temp=current->Next;
            minTemp=current;
             while(Temp!=NULL){   ///why Temp->Next != NULL bidrb
                if(*minTemp->Data > *Temp->Data)
                      {
                         minTemp=Temp;
                      }
            Temp=Temp->Next;
            }
            swap(*minTemp->Data,*current->Data);
            current=current->Next;
          }
    }

   int BinarySearch(T data){
       bubbleSort();
       int mid,minL,maxl;
       Node <T> *minVal,*maxVal,*midVal;
       minL=0;
       maxl=length;
      while(minL <= maxl){
        mid=floor((minL+maxl)/2);
        midVal=midList(mid);
        if(data == *midVal->Data){
            return 1;
            break;}
        if (data > *midVal->Data){
            minL=mid+1;}
        else
        {
            maxl=mid-1;}
        }
 return 0;
 }
private:
Node <T>* midList(T m){
         Node <T>*curr;
         curr=head;

         while(m){
            curr=curr->Next;
            --m;
         }
            return curr;
      }




};

#endif // LINKEDLIST_H
