#ifndef SUDU_VERTICALBLOCK_H
#define SUDU_VERTICALBLOCK_H
#include <main.h>
#include "BaseBlock.h"

class VerticalBlock:public BaseBlock
{
    public:
        VerticalBlock(int pos);
        ~VerticalBlock();
        void print();
    protected:
    private:
};

#endif
