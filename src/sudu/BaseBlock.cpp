#include <sudu/BaseBlock.h>
#include <log/logi.h>

BaseBlock::BaseBlock(int Pos)
{
    this->nPos = Pos;
}

BaseBlock::~BaseBlock()
{
}

void BaseBlock::think()
{
    for(int i=0;i<9;i++)
    {
    	if((*(a[i]))!=0)
    	{
    		removeNum(*(a[i]));
    	}
    }
}

void BaseBlock::removeNum(int num)
{
	for(int i=0;i<9;i++)
	{
         list<int>::iterator itor;
         for(itor=(*la[i]).begin();itor!=(*la[i]).end();itor++)
         {
              if(*itor==num)
              {
              	(*(la[i])).erase(itor);
              	break;
              }
         }
    }
}