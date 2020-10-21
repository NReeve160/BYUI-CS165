//
//  moonLander.hpp
//  moonLander
//
//  Created by Nathan Reeve on 6/5/20.
//  Copyright © 2020 cs165. All rights reserved.
//

#ifndef LANDER_H
#define LANDER_H

#include "point.h"
#include "velocity.h"
#include "uiDraw.h"

#include <stdio.h>

#define DEFAULT_FUEL 500

class Lander
{
private:
    Point point;
    Velocity velocity;
    bool alive;
    bool landed;
    int fuel;
        
public:
    Lander();
    //Lander() : point(0,0), alive(true), landed(false), fuel()
    
    Point getPoint() const { return point; }
    Velocity getVelocity() const { return velocity; }
    
    bool isAlive() const { return alive; }
    bool isLanded() const { return landed; }
    int getFuel() const { return fuel; }
    
    void setLanded(bool landed) { this->landed = landed; }
    void setAlive(bool alive) { this->alive = alive; }
    void setFuel(int fuel) { this->fuel = fuel; }
    
    void applyGravity(float amount);
    void applyThrustLeft();
    void applyThrustRight();
    void applyThrustBottom();
    
    void advance();
    
    bool canThrust();
    
    void draw() const;
    
};

#endif /* moonLander_hpp */
