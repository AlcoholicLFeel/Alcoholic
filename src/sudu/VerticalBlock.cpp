#include <sudu/VerticalBlock.h>

VerticalBlock::VerticalBlock(int pos):BaseBlock(pos)
{
	init();
}

VerticalBlock::~VerticalBlock()
{
}

void VerticalBlock::init()
{
   for(int i=0;i<N;i++)
    {
        a[i]=&sudu_main::finalArray[nPos][i];
        la[i] = &sudu_main::data[nPos][i];
    }
}
