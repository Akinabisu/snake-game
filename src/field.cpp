#include "..\includes\field.h"

Field::Field(size_t h, size_t w) {
	_field = new char*[h];

	for (int i = 0; i < h; ++i) {
		_field[i] = new char[w];
		for (int j = 0; j < w; ++j)
			_field[i][j] = '.';
	}
}
size_t Field::height() const
{
	return _height;
}

size_t Field::width() const
{
	return _height;
}
;