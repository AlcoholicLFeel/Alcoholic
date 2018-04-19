#include <sudu/VerticalBlock.h>

VerticalBlock::VerticalBlock(int pos):BaseBlock(pos)
{
}

VerticalBlock::~VerticalBlock()
{
}

void VerticalBlock::print()
{
    for(int i=0;i<9;i++)
    {
        printf("%d ",sudu_main::finalArray[nPos][i]);
    }
    printf("\n");
}
