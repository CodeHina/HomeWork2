#ifndef __TPLAYER_H_
#define __TPLAYER_H_

#include <iostream>
#include <cstring>

#include "./TRole.hh"
//#include "./TPlayer_constval.hh"

class TPlayer
{
public:
    
    TPlayer() : m_name(nullptr) 
    {
        m_name = new char[32];
        strcpy(m_name, "zhangsan");
    }

    virtual ~TPlayer() {  }
    
    inline void show_name()
    {
        std::cout << m_name << std::endl;
    }
        
    void play_role(TRole& hero);

private:
        
    char* m_name;

};



#endif
