#ifndef NODEBST_H
#define NODEBST_H

template<class T>
class NodeBST
{
    public:
        T *Data;
         NodeBST *Right,*Left;

        NodeBST(T *data) {
        Data=data;
        Right=Left=NULL;

        }


};

#endif // NODEBST_H
