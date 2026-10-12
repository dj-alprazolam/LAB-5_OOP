#pragma once 
#include"Painter.h"
#include"Point.h"
#include"Color.h"
#include"Velocity.h"

class Dust
{
private:
    Point m_center;
    Velocity m_velocity;
    double m_time;
    Color m_color;

public:
    Dust(const Point& center, const Velocity& velocity, double time, const Color& color);

    void draw(Painter& painter) const;

    void update(double time);

    bool isDeat() const;
    

};

