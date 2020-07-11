#ifndef __TSKILLS_H_
#define __TSKILLS_H_


#include <iostream>


#define SPLIT_SHOT      1
#define MysticSnake     2
#define ManaShield      3
#define StoneGaze       4



/* 技能库 */
class TSkills
{
public:

    TSkills() {}

    virtual ~TSkills() {}

    inline void useSplitShot()  const           //使用分裂箭
    { 
        std::cout << "Split Shot" << std::endl; 
    }

    inline void useMysticSnake()    const       //使用秘术异蛇技能
    {
        std::cout << "Mystic Snake" << std::endl;
    }

    inline void useManaShield() const           //使用魔法护盾技能
    {
        std::cout << "Mana Shield" << std::endl;

    }

    inline void useStoneGaze()  const           //使用石化凝视技能
    {
        std::cout << "Stone Gaze" << std::endl;

    }
};












#endif
