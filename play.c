#include "player.h"

Player player;

void update_player() {
    if (pad_left()) player.x--;
    if (pad_right()) player.x++;
    if (pad_up()) player.y--;
    if (pad_down()) player.y++;
    if (pad_a()) shoot();
}

void shoot() {
    
}
