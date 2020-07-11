#ifndef __TMEDUSA_H_
#define __TMEDUSA_H_

#include <iostream>

#include "./TRole.hh"

class TMedusa : public TRole    
{
public:

    TMedusa() : TRole() {}
    ~TMedusa() {}
    
    void UseSkills(const TSkills& skills);
        


private:

    //int m_HP;
    //int m_MP;
    
};

#endif

