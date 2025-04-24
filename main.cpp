#include <iostream>
#include "Acts.h"
#include "Player.h"

int main() {
    Player player;
    player.inputStats();
    player.displayStats();
    Acts::Act1(player);
    Acts::Act2(player);
    Acts::Act3_day1(player);
    Acts::Act3_day2(player);
    Acts::Act3_day3(player);

    return 0;
}
