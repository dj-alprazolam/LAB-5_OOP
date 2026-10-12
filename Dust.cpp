#include"Dust.hpp"

Dust::Dust(const Point& center, const Velocity& velocity, double time, const Color& color) 
    :m_center(center),m_velocity(velocity),m_time(time),m_color(color){}


void Dust::draw(Painter& painter) const{

}

void Dust::update(double time){

}

bool Dust::isDeat()const{

}