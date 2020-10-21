//
//  moonLander.cpp
//  moonLander
//
//  Created by Nathan Reeve on 6/5/20.
//  Copyright © 2020 cs165. All rights reserved.
//

#include "moonLander.h"
#include "uiDraw.h"
#include "point.h"

/*************************************************************************
 ** Function: Lander
 ** Description: Describes the lander as alive and in the air
 *************************************************************************/
Lander::Lander(): velocity()
{
    alive = true;
    landed = false;
}

/*************************************************************************
  * Function: applyGravity
  * Description: Applies gravity to the lander causing it to constantly
  * fall
  *************************************************************************/
void Lander::applyGravity(float amount)
{
    velocity.setDy(velocity.getDy() - amount);
}

/*************************************************************************
  * Function: applyThrustLeft
  * Description: Will apply thrust to the left at a set speed
  ***********************************************************************/
void Lander::applyThrustLeft()
{
    if(canThrust())
    {
    velocity.setDx(velocity.getDx() + 0.1);
    fuel -= 1;
    }
}

/**************************************************************************
  * Function: applyThrustRight
  * Description: Will apply thrust to the right at a set speed
  **************************************************************************/
void Lander::applyThrustRight()
{
    if(canThrust())
    {
    velocity.setDx(velocity.getDx() + -0.1);
    fuel -= 1;
    }
}

/***************************************************************************
  * Function: applyThrustBottom
  * Description: Will apply thrust from the bottom at a set speed
  **************************************************************************/
void Lander::applyThrustBottom()
{
    if(canThrust())
    {
    velocity.setDy(velocity.getDy() + 0.3);
    fuel -= 3;
    }
}

/**************************************************************************
 * Function: advance
 * Description: Will advance the lander across the screen
 * *************************************************************************/
void Lander::advance()
{
    velocity.advancePoint(point);
}

/******************************************************************************
 * Function: canThrust
 * Description: Checks if all conditions for thrusters ar emet
 * ******************************************************************************/
bool Lander::canThrust()
{
    return (isAlive() && !isLanded() && fuel > 0);
}

/********************************************************************************
 * Function: draw
 * Description: Draws the moon lander and flames
 * *****************************************************************************/
void Lander::draw() const
{
    if (isAlive())
    {
        drawLander(point);
    }
}
