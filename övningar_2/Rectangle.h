#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle
{
private:
    float width;
    float height;
public:
    Rectangle(); // bredd och höjd blir 0
    Rectangle(float width, float height);
    void setWidth(float width);
    float getWidth();
    void setHeight(float height);
    float getHeight();
    float circumference() const;
    float area() const;

    bool operator==(const Rectangle& other) const;
    bool operator!=(const Rectangle& other) const;
    bool operator>(const Rectangle& other) const;
    bool operator<(const Rectangle& other) const;
};

#endif // !RECTANGLE_HPP
