#include <sudu/HorizontalBlock.h>

HorizontalBlock::HorizontalBlock(int pos):BaseBlock(pos)
{
    init();
}

HorizontalBlock::~HorizontalBlock()
{
}

void HorizontalBlock::init()
{
    for(int i=0;i<N;i++)
    {
        a[i]=&sudu_main::finalArray[i][nPos];
        la[i] = &sudu_main::data[i][nPos];
    }
}
