#ifndef SUDU_BASEBLOCK_H
#define SUDU_BASEBLOCK_H
#include <sudu_main.h>

class BaseBlock
{
    public:
        BaseBlock(int Pos);
        ~BaseBlock();
        void addMember(list<int> Member);
    protected:
    	void init();
        int nPos;
        int* a[N];
        list<int>* la[N];
    private:
        
};


#endif
