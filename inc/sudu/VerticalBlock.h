#ifndef SUDU_VERTICALBLOCK_H
#define SUDU_VERTICALBLOCK_H
#include "BaseBlock.h"

class VerticalBlock:public BaseBlock
{
    public:
        VerticalBlock(int pos);
        ~VerticalBlock();
    protected:
    private:
    	void init();
};

#endif
