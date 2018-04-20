#include <sudu_main.h>
#include <sudu/BaseBlock.h>
#include <sudu/RectBlock.h>
#include <sudu/VerticalBlock.h>
#include <sudu/HorizontalBlock.h>
#include <log/logi.h>

int sudu_main::finalArray[N][N];
list<int> sudu_main::data[N][N];

void sudu_main::init()
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            finalArray[i][j]=0;
            for(int z=1;z<=N;z++)
            {
                data[i][j].push_front(z);
            }
        }
    }
}

void sudu_main::print()
{
    cout<<"=====================m_data"<<endl;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<sudu_main::data[i][j].size()<<"  ";
        }
        cout<<endl;
    }
    cout<<"=====================m_finalArry"<<endl;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<sudu_main::finalArray[i][j]<<"  ";
        }
        cout<<endl;
    }
}

void sudu_main::setMemberTest()
{
    setMember(1,1,7);
    setMember(1,2,6);
    setMember(1,5,5);
    setMember(1,8,8);
    setMember(2,1,4);
    setMember(2,5,3);
    setMember(2,7,2);
    setMember(3,2,3);
    setMember(3,3,2);
    setMember(3,7,4);
    setMember(3,9,6);
    setMember(4,6,8);
    setMember(5,3,9);
    setMember(5,5,6);
    setMember(5,7,8);
    setMember(6,4,2);
    setMember(7,1,6);
    setMember(7,3,8);
    setMember(7,7,9);
    setMember(7,8,1);
    setMember(8,3,7);
    setMember(8,5,4);
    setMember(8,9,5);
    setMember(9,2,2);
    setMember(9,5,9);
    setMember(9,8,3);
    setMember(9,9,8);
}

void sudu_main::setMember(int i_hor,int i_ver,int i_num)
{
    finalArray[i_hor-1][i_ver-1]=i_num;
}

void sudu_main::work()
{
    list<BaseBlock*> hor;

    for(int i=0;i<9;i++)
    {
    	HorizontalBlock* Horizontal = new HorizontalBlock(i);
        VerticalBlock*    Vertical = new VerticalBlock(i);
        RectBlock*       Rect = new RectBlock(i); 
        hor.push_front(Horizontal);
        hor.push_front(Vertical);
        hor.push_front(Rect);
    }

    list<BaseBlock*>::iterator itor;
    itor = hor.begin();  
    while(itor!=hor.end())  
    {  
        itor++; 
    } 
} 
