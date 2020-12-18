#ifndef NODE_H
#define NODE_H

template <class T>
class Node
{
    public:
        T *Data;
        Node *Right,*Left;
        Node(T *data) {
        Data=data;
        Right=Left=NULL;

        }

};

#endif // NODE_H
