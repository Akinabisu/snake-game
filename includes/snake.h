#pragma once

#include "common.h"
#include <vector>
#include "field.h"

class Snake
{
private:
    Field* _field;
    std::vector<Coords> _snake_coords;
    Coords _head_coords;

public:
    Snake(const Field &f);
    size_t length();
    void move_snake(Direction d);
    void print_snake();
};