#include "Acts.h"
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <limits>
#include "Player.h"

using namespace std;
using namespace chrono;
using namespace this_thread;

string input;
bool hasGear = false, alliesMet = false, crackedSafe = false;


Player player;

void pressEnter() {
    cout << "\n[Press ENTER to continue]";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}
//Done by
void Acts::Act1(Player& player) {
    cout << "--- ACT 1 ---\n";
    cout << "You wake up in your apartment. Life is boring, repetitive.\n";
    pressEnter();

    cout << "You check your phone. Nothing new. Bills to pay.\n";
    pressEnter();

    cout << "A mysterious message pops up: 'Need money fast? Job offer. High risk. Big reward.'\n";
    pressEnter();

    cout << "You hesitate but curiosity wins. You tap the link. It’s vague, shady, but enticing.\n";
    pressEnter();

    cout << "You start researching heists. Old cases, documentaries. Obsession grows.\n";
    player.Intelligence += 2;
    player.Wisdom += 1;
    pressEnter();

    cout << "You decide to get in shape. Run, lift, climb.\n";
    player.Dexterity += 1;
    player.Constitution += 1;
    pressEnter();

    cout << "You visit a bar, chat with strangers. Build confidence.\n";
    player.Charisma += 1;
    pressEnter();

    cout << "You feel different now. Smarter. Stronger. Focused.\n";
    pressEnter();
}
//Done by
void Acts::Act2(Player& player) {
    cout << "--- ACT 2 ---\n";
    cout << "You scout a nearby bank. Quiet neighborhood. Not many guards.\n";
    pressEnter();

    cout << "You take notes: guard schedules, entry points, cameras.\n";
    player.Intelligence += 1;
    pressEnter();

    cout << "You climb the back wall. Scrape your hand, but you learn.\n";
    player.Dexterity += 1;
    player.Constitution += 1;
    pressEnter();

    cout << "You flirt with a bank employee to get inside info.\n";
    if (player.Charisma >= 2) {
        cout << "She gives you details: vault time-locks, blind spots.\n";
        player.Intelligence += 1;
    } else {
        cout << "She laughs and walks away. You learn to speak smoother next time.\n";
    }
    pressEnter();

    cout << "You now know the bank better than some employees.\n";
    pressEnter();
}
//Done by
void Acts::Act3_day1(Player& player) {
    cout << "--- ACT 3 ---\n";
    cout << "\n--- DAY 1 ---\n";
    cout << "You wake up. Morning light hits your face.\n";
    cout << "You stretch and head to the kitchen. Breakfast smells great.\n";
    pressEnter();

    cout << "You stare out the window. Maybe it's time to rob that bank.\n";
    pressEnter();

    cout << "You recall everything: guard shifts, vault location. You plan deeply.\n";
    pressEnter();

    cout << "Double-check your info...\n";
    if (player.Intelligence + player.Wisdom > 5) {
        cout << "All looks solid. You’re sharp.\n";
    } else {
        cout << "You may have missed something...\n";
    }
    pressEnter();

    cout << "Evening falls. You play a puzzle game to relax (minigame).\n";
    pressEnter();

    cout << "You call old friends – your allies. They agree to meet.\n";
    alliesMet = true;
    pressEnter();

    cout << "You drift to sleep, dreaming of riches.\n";
    pressEnter();
}

void Acts::Act3_day2(Player& player) {
    cout << "\n--- DAY 2 ---\n";
    cout << "You wake up refreshed. Time to prepare more.\n";
    pressEnter();

    cout << "You warm up with a challenge (minigame).\n";
    pressEnter();

    if (alliesMet) {
        cout << "You meet your allies at a quiet café. Old faces, willing to help.\n";
    } else {
        cout << "You decide to work alone. It’s risky.\n";
    }
    pressEnter();

    cout << "You head to a shady bar. There’s gear to be found underground.\n";
    pressEnter();

    cout << "You ask the bartender for... special equipment.\n";
    if (player.Charisma >= 3) {
        cout << "He smirks. 'Prove yourself: Russian Roulette.'\n";
        if (player.Constitution >= 3) {
            cout << "You play. Click. You're alive. He hands over a gear bag – masks, smoke bombs, weapons.\n";
            hasGear = true;
        } else {
            cout << "You faint before the first click. Wake up home. A note: 'You’ve got guts. Gear’s in your kitchen.'\n";
            hasGear = true;
        }
    } else {
        cout << "He scoffs. 'Come back when you’ve got real presence.'\n";
    }
    pressEnter();

    cout << "You rest. Tomorrow is the heist.\n";
    pressEnter();
}

void Acts::Act3_day3(Player& player) {
    cout << "\n--- DAY 3 ---\n";
    cout << "You wake up. No turning back.\n";
    pressEnter();

    if (alliesMet) {
        cout << "Your team meets. They’re tense, ready.\n";
    } else {
        cout << "You head in alone. Brave... or foolish.\n";
    }
    pressEnter();

    cout << "You arrive at the bank. Noon. Calm before the storm.\n";
    pressEnter();

    cout << "Minigame: Cracking the vault.\n";
    if ((player.Intelligence + player.Dexterity >= 6) || (hasGear && alliesMet)) {
        cout << "You bypass security. Vault opens. You’re in.\n";
        crackedSafe = true;
    } else {
        cout << "You fumble the tools. Sparks. The alarm wails.\n";
        cout << "GAME OVER – Caught during the heist.\n";
        return;
    }
    pressEnter();

    cout << "You grab the cash. Run out the back alley.\n";
    pressEnter();

    cout << "You’re home. No cops. No drama.\n";
    cout << "You’re rich.\n";
    cout << "GAME OVER – Happy Ending!\n";
}
