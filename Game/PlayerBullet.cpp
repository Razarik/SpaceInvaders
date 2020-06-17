//
// Created by Jonas on 24/02/2020.
//

#include "../Game/PlayerBullet.h"

namespace Si {
    PlayerBullet::PlayerBullet(double x) : Player(x, 0.925, 0.01, 0.05) {}

    PlayerBullet::~PlayerBullet() = default;
}