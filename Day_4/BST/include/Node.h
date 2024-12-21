#ifndef NODE_H
#define NODE_H


#include <cstddef>
class Node
{
    public:
    int data;
    Node * Right;
    Node * Left;
    Node(int _data){
        data=_data;
        Right= NULL ;
        Left=NULL;
    }
        ~Node() {}

    protected:

    private:
};

#endif // NODE_H
