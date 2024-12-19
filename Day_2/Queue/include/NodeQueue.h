#ifndef NODEQUEUE_H
#define NODEQUEUE_H


#include <cstddef>
class NodeQueue
{
    public:
     int data ;
     NodeQueue *next ; 

        NodeQueue(int _data) 
        {
         data = _data ;
         next = NULL;
        }
        ~NodeQueue() {}

    protected:

    private:
};

#endif // NODEQUEUE_H
