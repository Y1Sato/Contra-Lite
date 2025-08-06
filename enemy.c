#include "enemy.h"

Enemy enemies[MAX_ENEMY];

void update_enemies() {
    for (int i = 0; i < MAX_ENEMY; ++i) {
        if (enemies[i].alive) {
            enemies[i].x += enemies[i].vx;
            enemies[i].y += enemies[i].vy;
            // AI
        }
    }
}
