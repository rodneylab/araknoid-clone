#ifndef SRC_SYSTEMS_H
#define SRC_SYSTEMS_H

/*! \file src/systems.h
 * \brief Declarations for ECS system functions
 */

#include "components.h"
#include "resources.h"

#include <flecs.h>

flecs::system add_paddle_movement_system(flecs::world *world);
flecs::system add_ball_with_wall_collision_system(flecs::world *world);
flecs::system add_ball_with_paddle_collision_system(flecs::world *world,
                                                    flecs::entity *ball);
flecs::system add_ball_with_brick_collision_system(flecs::world *world,
                                                   flecs::entity *ball);

void handle_game_state_input_system(
    const flecs::query<GameState> &game_state_update_query);
void update_velocity_entities(flecs::world *world, float frame_time);
void render_hud(const Font &hud_font);
void render_instructions(const Font &hud_font);
void render_position_entities(flecs::world *world);
void render_title(const Font &title_font);

float top(const Position &position, const CollisionBox &collision_box);
float right(const Position &position, const CollisionBox &collision_box);
float bottom(const Position &position, const CollisionBox &collision_box);
float left(const Position &position, const CollisionBox &collision_box);

bool is_intersecting(const Position &position_1,
                     const CollisionBox &collision_box_1,
                     const Position &position_2,
                     const CollisionBox &collision_box_2);

#endif
