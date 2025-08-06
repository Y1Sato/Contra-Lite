#include "player.h"
#include "enemy.h"
#include "stage.h"

void main() {
    init_game();
    while (1) {
        update_input();
        update_player();
        update_enemies();
        draw_stage();
        draw_player();
        draw_enemies();
        wait_vblank();
    }
}
