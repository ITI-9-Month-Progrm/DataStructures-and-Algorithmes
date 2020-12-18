#include <iostream>
#include "BST.h"
using namespace std;

int main()
{
cout << "Hello world!" << endl;
    int arr [5]={5,3,2,1,4};
    BST <int>b;
    for(int i=0;i<5;i++){
        b.addNode(&arr[i]);
        cout<<"****************"<<endl;
    }

   b.DispalyWithStack();

    return 0;
}
