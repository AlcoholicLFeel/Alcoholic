#ifndef SUDU_MAIN_H
#define SUDU_MAIN_H
#include "main.h"
#include <list>
#define N 9

class sudu_main
{
    public:
        void init();
        void print();
        void setMemberTest();
        void work();
        static list<int> data[N][N];
        static int finalArray[N][N];
    protected:
    private:
        void setMember(int i_hor,int i_ver,int i_num);
        void flush();
        int getfinishnum();
};


#endif
