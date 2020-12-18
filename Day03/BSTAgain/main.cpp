#include <iostream>
#include "BST.h"
using namespace std;

int main()
{
cout << "Hello world!" << endl;
    int arr [6]={5,3,2,1,4,6};
    BST <int>b;
    for(int i=0;i<6;i++){
        b.addNode(&arr[i]);
        cout<<"****************"<<endl;
    }
    b.displayWithStack();
    return 0;
}
