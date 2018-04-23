#ifndef SUDU_MAIN_H
#define SUDU_MAIN_H
#include "main.h"

#include <sudu/BaseBlock.h>
#include <sudu/RectBlock.h>
#include <sudu/VerticalBlock.h>
#include <sudu/HorizontalBlock.h>
#include <sudu/Controller.h>
#include <log/logi.h>


class sudu_main
{
    public:
        void init();
        void print();
        void setMemberTest();
        void work();
    protected:
    private:
        void setMember(int i_hor,int i_ver,int i_num);
        void flush();
        int getfinishnum();
        bool checkover(list<BaseBlock*>);
};


#endif
