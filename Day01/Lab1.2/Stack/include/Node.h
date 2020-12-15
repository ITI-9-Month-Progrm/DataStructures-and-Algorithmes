#ifndef NODE_H
#define NODE_H

template<class T>
class Node
{
    public:
        T Data;
        Node * Next,*Preveous;

        Node(T data) {

            Data=data;
            Next=Preveous=NULL;
        }



};

#endif // NODE_H
