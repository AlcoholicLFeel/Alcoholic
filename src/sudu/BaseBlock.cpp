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
    list<int>::iterator itor;
	  for(int i=0;i<9;i++)
	  {  
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

bool BaseBlock::think2()
{
    cout<<"===========block =======  "<<nPos<<endl;

    int temp[9]={0};
    for(int i=0;i<9;i++)
    {
      if((*la[i]).size()>0)
      {
        for(list<int>::iterator itor=(*la[i]).begin();itor!=(*la[i]).end();itor++)
        {
          cout<<*itor;
          temp[*itor-1]++;
        }
        cout<<" ";
      }
    }
    for(int i=0;i<9;i++)
    {
      cout<<temp[i] <<" ";
      if(temp[i]==1)
      {

        ensureNum(i+1);
        return true;
      }

    }
    cout<<"===========block ======================  "<<endl;
    return false;
}

void BaseBlock::ensureNum(int num)
{
    for(int i=0;i<9;i++)
    {
      for(list<int>::iterator itor=(*la[i]).begin();itor!=(*la[i]).end();itor++)
      {
        if(*itor==num)
        {
          (*(la[i])).clear();
          (*(la[i])).push_back(num);
          return;
        }
      }
    }
}

