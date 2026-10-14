    #include"Dust.hpp"

    Dust::Dust(const Point& center, const Velocity& velocity, double time, const Color& color) 
        :m_center(center),m_velocity(velocity),m_time(time),m_color(color){}


    void Dust::draw(Painter& painter) const{
        painter.draw(m_center,1.5,m_color);
    }

    void Dust::update(double time){
        m_time -= time;
        m_center = m_center+m_velocity.vector() * time;
    }

    bool Dust::isDeat()const{
        return m_time <= 0.0;
    }