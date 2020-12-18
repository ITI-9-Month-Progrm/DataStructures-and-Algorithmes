#include <iostream>

#include "LinkedList.h"

using namespace std;

int main()
{
    LinkedList<char> L;
    LinkedList<int>LL;
     int arr1[5]={5,2,1,3,0};
     char arr[5]={'D','B','A','C','E'};
     for(int i=0;i<5;i++){
        L.Add(&arr[i]);
     }
    for(int i=0;i<5;i++){
        LL.Add(&arr1[i]);
     }

    L.Display();
    L.bubbleSort();
    L.Display();
    int res =L.BinarySearch('A');
    if(res){
        cout<<"Item is found"<<endl;
    }else{
     cout<<"Item is not found"<<endl;
    }
    cout<<"-----------------------"<<endl;

    LL.Display();
    LL.selectionSort();
    LL.Display();
    res =LL.BinarySearch(-9);
    if(res){
        cout<<"Item is found"<<endl;
    }else{
     cout<<"Item is not found"<<endl;
    }
    cout<<"-----------------------"<<endl;
    return 0;
}
