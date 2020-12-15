#include <iostream>

#include "LinkedList.h">

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    LinkedList <int> L;
    int x=10,y=20,headl=30,taill=40;
    L.addNewNode(headl);
    L.addNewNode(x);
    L.addNewNode(y);
    L.addNewNode(taill);
    L.displayList();
    int n=5;
    cout<<L.length<<endl;
    cout<<"___________________________"<<endl;
    LinkedList <int>R = L.reverseList();
    R.displayList();
    cout<<L.length<<endl;
    cout<<"___________________________"<<endl;
    L.insertAfter(&headl,&n);
     L.displayList();
     cout<<L.length<<endl;
     cout<<"___________________________"<<endl;
    L.deleteByIndex(2); ///2 and 4
    L.displayList();
    cout<<L.length<<endl;

    return 0;
}
