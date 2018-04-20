#include <sudu/RectBlock.h>
#include <log/logi.h>

RectBlock::RectBlock(int Pos):BaseBlock(Pos)
{
    init();
}

RectBlock::~RectBlock()
{
}

void RectBlock::init()
{
    int row = nPos/3;
    int ver = nPos%3;
    int current=0;

    cout<<"Pos ="<<nPos<<endl;
    for(int i=0+ver*3;i<=2+ver*3;i++)
    {
    	for(int j=0+row*3;j<=2+row*3;j++)
    	{
            a[current]=&sudu_main::finalArray[i][j];
            la[current]=&sudu_main::data[i][j];
            current++;
        }
        cout<<endl;
    }
}
