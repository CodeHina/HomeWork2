#include "./TPlayer.hh"
#include "./TSkills.hh"

void TPlayer::play_role(TRole& hero/*i*/)
{
    TSkills skills;
    hero.UseSkills(skills);
}
