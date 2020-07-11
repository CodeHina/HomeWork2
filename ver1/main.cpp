#include "./TPlayer.hh"
#include "./TMedusa.hh"

int main(int argc, char* argv[])
{
    TPlayer player;
    TMedusa mdusa;

    while(1)
        player.play_role(mdusa);

    return 0;
}

