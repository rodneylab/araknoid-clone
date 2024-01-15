#include "constants.h"

#include <SFML/Graphics.hpp>

struct Ball
{
    Ball(float x_coordinate, float y_coordinate);

    void update(FrameTime frame_time);

    float x() const noexcept;
    float y() const noexcept;
    float left() const noexcept;
    float right() const noexcept;
    float top() const noexcept;
    float bottom() const noexcept;

    sf::CircleShape shape;
    sf::Vector2f velocity;
};
