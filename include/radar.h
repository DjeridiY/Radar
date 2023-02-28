/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myhunter-yanis.djeridi
** File description:
** hunter.h
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>

#ifndef RADAR_H_
    #define RADAR_H_

typedef struct lugia {

    sfSprite *sprite;
    sfTexture *texture;
    sfRectangleShape* hitbox;
    sfVector2f position_departure;
    sfVector2f position_arrival;
    int speed;
    int delay;
    int alive;
    int protected;
    sfVector2f deplacement;
    sfVector2f direction;
    float distance;
    double angle;

} lugia_t;

typedef struct quadtree {

    sfFloatRect square;
    sfRectangleShape **box;
    int nbr_of_objects;
    struct quadtree* north_west;
    struct quadtree* north_east;
    struct quadtree* south_west;
    struct quadtree* south_east;

} quadtree_t;

typedef struct info {

    sfFont *font;
    sfText *text;
    sfVector2f position;

} info_t;

typedef struct checker {

    sfVector2f size;
    sfVector2f position;

} checker_t;

typedef struct tower {

    sfCircleShape *area;
    sfVector2f position;
    sfSprite *sprite;
    sfTexture *texture;
    int radius;
    int in;

} tower_t;
typedef struct wallpaper {

    sfSprite *sprite;
    sfTexture *texture;

} wallpaper_t;

typedef struct radar {

    sfRenderWindow *window;
    wallpaper_t **wallpaper;
    lugia_t **lugia;
    tower_t **tower;
    info_t **info;
    checker_t **checker;
    quadtree_t quadtree;
    sfClock *clock;
    sfTime time_elapsed;
    char **tab;
    int nbr_of_lines;
    int nbr_of_lugia;
    int nbr_of_tower;
    int hitbox_display;
    int sprite_display;
    sfClock *real_clock;
    sfTime real_time;
    int secondes;
    int off;

} radar_t;

void create_window(radar_t *game);
void analyse_event(radar_t *game);
void destroy(radar_t *game);
void create(radar_t *game);
wallpaper_t *create_wallpaper(wallpaper_t *wallpaper, char *filename);
lugia_t *create_lugia(lugia_t *lugia);
tower_t *create_tower(tower_t *tower);
int check_intersection(radar_t *game, int x, int y);
int random_number(int min, int max);
void move_lugia(radar_t *game);
void draw_lugia(radar_t *game);
void malloc_struct(radar_t *game);
void draw_tower(radar_t *game);
void draw_wallpaper(radar_t *game);
void help_cmd(void);
int extract_information(radar_t *game, char *filename);
int information_processing(radar_t *game);
void lugia_information(radar_t *game, int k, int lugia_rank);
int string_to_int(char *str);
void tower_information(radar_t *game, int j, int tower_rank);
void lugia_and_tower_number(radar_t *game, int i);
int check_lugia(radar_t *game, int k, int lugia_rank);
int check_tower(radar_t *game, int j, int tower_rank);
void get_time(radar_t *game);
int error_tower(radar_t *game, int j);
int error_lugia(radar_t *game, int j);
void travel_finish(radar_t *game);
info_t *create_text(info_t *info);
void set_text(radar_t *game);
void draw_text(radar_t *game);
int check_lugia_info(radar_t *game);
int check_lugia(radar_t *game, int k, int lugia_rank);
int check_tower_info(radar_t *game);
int check_tower(radar_t *game, int j, int tower_rank);
void calculate_trajectory(radar_t *game);
void calculate_angle(radar_t *game);
void draw(radar_t *game);
void check_collision(radar_t *game);
void quadtree_destroy(quadtree_t *quad);
quadtree_t* quadtree_create(float pos_x, float pos_y,
float width, float heigth);
int quad_add_hitbox(quadtree_t *quad, sfRectangleShape *square, int depth);
int check_collision_on_quad(radar_t *game, quadtree_t *quad);
void on_collision(int i, int j, radar_t *game);
checker_t *create_checker(checker_t *checker);
void create_sub_quatree(quadtree_t *quad);
int in_tower(radar_t *game, int i, int j);
void in_tower_area(int i, radar_t *game);

#endif /* RADAR_H_ */
