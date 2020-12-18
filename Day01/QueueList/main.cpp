#include <iostream>

#include "QueueList.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    QueueList <int> q;
    q.Enqueu(10);
    q.Enqueu(20);
    q.Enqueu(30);
    q.Enqueu(40);
    q.Enqueu(50);
    q.displayList();
    cout<<"--------------------------------"<<endl;
    q.Dequeue();
    q.displayList();
    cout<<"--------------------------------"<<endl;
    cout<<"Front_Value is "<<q.FrontValue()<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"Length of queue is "<<q.IsEmpty()<<endl;
    return 0;
}
