#include "./TPlayer.hh"
#include "./TSkills.hh"

void TPlayer::play_role(TRole& hero)
{
    TSkills skills;
    hero.UseSkills(skills);
}
