#ifndef SUDU_BASEBLOCK_H
#define SUDU_BASEBLOCK_H
#include <sudu_main.h>

class BaseBlock
{
    public:
        BaseBlock(int Pos);
        ~BaseBlock();
        virtual void print();
        void addMember(list<int> Member);
    protected:
        int nPos;
    private:
        
};


#endif
