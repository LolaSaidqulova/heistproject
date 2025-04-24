#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>

class Player {
public:
    int Intelligence;
    int Charisma;
    int Dexterity;
    int Wisdom;
    int Constitution;

    Player() {}

    void displayStats() const;

    void inputStats();

    void updateStats(int intel, int wis, int charis, int dex, int cons);
};

#endif //PLAYER_H
