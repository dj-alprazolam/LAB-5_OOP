#pragma once
#include "Painter.h"
#include "Point.h"
#include "Velocity.h"
#include"Color.h"

class Ball {
private: 
    Point m_center;
    Velocity m_velocity;
    double m_radius;
    double m_mass;
    Color m_color;
    bool m_isCollidable = true;

public:
    Ball(const Point& center, double radius,const Color& color);
    void setVelocity(const Velocity& velocity);
    Velocity getVelocity() const;
    void draw(Painter& painter) const;
    void setCenter(const Point& center);
    Point getCenter() const;
    double getRadius() const;
    double getMass() const;
    bool isCollidable() const;
    void setCollidable(bool Collodable );
};
