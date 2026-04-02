#include "..\includes\snake.h"
#include "..\includes\common.h"

Snake::Snake(const Field& f) {
	*_field = f;
	Coords start_head_coords = { _field->height() / 2, _field->width() / 2);
	_snake_coords.push_back(start_head_coords);
	_head_coords = _snake_coords[0];
};

size_t Snake::length() {
	return _snake_coords.size();
}

void move_snake(Direction d) {
	if (d == Direction::Right)
	{

	}
};

void Snake::print_snake()
{
	
	for (Coords c : _snake_coords){
	{
		
	}
}
