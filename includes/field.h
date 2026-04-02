#pragma once
class Field
{
private:
    size_t _height = 0;
    size_t _width = 0;
public:
    Field(size_t h, size_t w);
    Field(const Field& f);
    size_t height() const;
    size_t width() const;
};