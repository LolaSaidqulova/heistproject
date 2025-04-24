#include "Player.h"

void Player::inputStats() {
    std::cout << "Enter your character's stats:\n";

    std::cout << "Intelligence (1-10): ";
    std::cin >> Intelligence;

    std::cout << "Wisdom (1-10): ";
    std::cin >> Wisdom;

    std::cout << "Charisma (1-10): ";
    std::cin >> Charisma;

    std::cout << "Dexterity (1-10): ";
    std::cin >> Dexterity;

    std::cout << "Constitution (1-10): ";
    std::cin >> Constitution;

    if (Intelligence < 1 || Intelligence > 10) Intelligence = 5;
    if (Wisdom < 1 || Wisdom > 10) Wisdom = 5;
    if (Charisma < 1 || Charisma > 10) Charisma = 5;
    if (Dexterity < 1 || Dexterity > 10) Dexterity = 5;
    if (Constitution < 1 || Constitution > 10) Constitution = 5;

    std::cout << "\nStats updated!\n";
}

void Player::displayStats() const {
    std::cout << "Player Stats:\n";
    std::cout << "Intelligence: " << Intelligence << std::endl;
    std::cout << "Wisdom: " << Wisdom << std::endl;
    std::cout << "Charisma: " << Charisma << std::endl;
    std::cout << "Dexterity: " << Dexterity << std::endl;
    std::cout << "Constitution: " << Constitution << std::endl;
}

void Player::updateStats(int intel, int wis, int charis, int dex, int cons) {
    Intelligence = intel;
    Wisdom = wis;
    Charisma = charis;
    Dexterity = dex;
    Constitution = cons;
}
