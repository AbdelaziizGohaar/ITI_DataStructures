#ifndef STACKNODE_H
#define STACKNODE_H


class StackNode
{
    public:
    int data ;
    StackNode *prev ;

        StackNode(int _data)
         {
           data = _data ;
           prev = NULL ;
         }
        ~StackNode() {}

    protected:

    private:
};

#endif // STACKNODE_H
