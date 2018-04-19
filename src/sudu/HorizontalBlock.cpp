#include <sudu/HorizontalBlock.h>

HorizontalBlock::HorizontalBlock(int pos):BaseBlock(pos)
{

}

HorizontalBlock::~HorizontalBlock()
{
}

void HorizontalBlock::print()
{
    for(int i=0;i<9;i++)
    {
        printf("%d ",sudu_main::finalArray[i][nPos]);
    }
    printf("\n");
}
