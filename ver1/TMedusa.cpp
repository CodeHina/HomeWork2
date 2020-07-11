#include "./TMedusa.hh"



void TMedusa::UseSkills(const TSkills& skills)
{
    int skill_flag = -1;

    std::cin >> skill_flag;

    switch(skill_flag)
    {
    case SPLIT_SHOT : skills.useSplitShot();
        break;

    case MysticSnake : skills.useMysticSnake();
        break;

    case ManaShield : skills.useManaShield();
        break;

    case StoneGaze : skills.useStoneGaze();
        break;

    default : break;    break;
    }
}
