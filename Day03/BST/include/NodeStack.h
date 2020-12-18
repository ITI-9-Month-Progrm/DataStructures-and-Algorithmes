#ifndef NODESTACK_H
#define NODESTACK_H

template <class T>
class NodeStack
{
    public:
        T *Data;
        NodeStack *Next ,*Preveous;
        NodeStack(T *data) {
          Data=data;
          Next=Preveous=NULL;
        }

    protected:

    private:
};

#endif // NODESTACK_H
