#include <iostream>

#include "StackList.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    StackList <int>s;
    s.PushValue(10);
    s.PushValue(20);
    s.PushValue(30);
    s.PushValue(40);
    s.PopValue();
    int l=s.IsEmpty();
    s.displayList();
    int x=s.TopValue();
    cout<<x<<endl<<"Length "<<l<<endl;
    return 0;
}
