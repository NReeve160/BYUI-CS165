/*****************************************************
 * File: bullet.cpp
 * Author: Nathan Reeve
 *
 * Description: This contains the Bullet constructors
 * and also the fire method which manages the speed
 * and angle in which the bullets move after fire.
 ******************************************************/

#include "flyingObj.h"
#include "point.h"
#include "uiDraw.h"
#include "velocity.h"
#include "bullet.h"
#include <cmath>

#define BULLET_SPEED 10.0

//Constructor
Bullet::Bullet(){
    
    Point a;
    a.setX(200.0);
    a.setY(-200.0);
    setPoint(a);
    

}

// Method

void Bullet::fire(Point p, float angle){
    
    Velocity bulletVelocity;
    
    setPoint(p);
    
    bulletVelocity.setDx(BULLET_SPEED * (-cos(M_PI / 180.0 * angle)));
    bulletVelocity.setDy(BULLET_SPEED * (sin(M_PI / 180.0 * angle)));
    
    
    setVelocity(bulletVelocity);
}
