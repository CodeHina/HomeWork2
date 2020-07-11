#ifndef __TROLE_H_
#define __TROLE_H_

#include "./TSkills.hh"

const int HP_MAX = 100;
const int MP_MAX = 100;

class TRole
{
public:

    TRole() : m_HP(HP_MAX), m_MP(MP_MAX) {}

    virtual ~TRole() {}
    
    virtual void UseSkills(const TSkills& skills) = 0;

private:
    
    int m_HP;
    int m_MP;

};




#endif

