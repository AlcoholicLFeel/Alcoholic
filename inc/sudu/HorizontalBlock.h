#ifndef SUDU_HORIZONTALBLOCK_H
#define SUDU_HORIZONTALBLOCK_H
#include "BaseBlock.h"

class HorizontalBlock:public BaseBlock
{
    public:
        HorizontalBlock(int Pos);
        ~HorizontalBlock();
    protected:
    private:
    	void init();
};

#endif
