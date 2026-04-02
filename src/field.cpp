#include "..\includes\field.h"

Field::Field(size_t h, size_t w)
{
	_height = h;
	_width = w;
}

Field::Field(const Field& f)
{
	_height = f._height;
	_width = f._width;
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