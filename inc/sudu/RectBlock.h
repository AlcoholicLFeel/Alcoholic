#ifndef SUDU_RECTBASE_H
#define SUDU_RECTBASE_H
#include "BaseBlock.h"

class RectBlock:public BaseBlock
{
    public:
        RectBlock(int Pos);
        ~RectBlock();
    protected:
    private:
    	void init();
};



#endif
