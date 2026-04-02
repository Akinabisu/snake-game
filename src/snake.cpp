#include "..\includes\snake.h"
#include "..\includes\common.h"
#include <algorithm>

Snake::Snake(const Field& f) {
	*_field = f;
	Coords start_head_coords = { _field->height() / 2, _field->width() / 2 };
	_snake_coords.push_back(start_head_coords);
};

size_t Snake::length() {
	return _snake_coords.size();
}

void Snake::move_snake(Direction d) {
	Coords head_coords = _snake_coords[0];
	switch (d) {
		case Direction::Right:
			head_coords.x++;
			break;
		case Direction::Down:
			head_coords.y--;
			break;
		case Direction::Left:
			head_coords.x--;
			break;
		case Direction::Up:
			head_coords.y++;
			break;
	}
	_snake_coords.insert(_snake_coords.begin(), head_coords);
	_snake_coords.pop_back();
};

void Snake::print_snake() {
	char** result = new char* [_field->height()];
		for (int i = 0; i < _field->height(); ++i) 
			for (int j = 0; j < _field->width(); ++j) {
				result[i][j] = '.';
			}

		for (Coords c : _snake_coords) {
			result[c.x][c.y] = 'X';
		}
}
