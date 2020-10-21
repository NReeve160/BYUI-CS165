
/*****************************************************
 * File: bullet.h
 * Author: Nathan Reeve
 *
 * Description: Contains the Bullet class....
 *
 
 ******************************************************/
#ifndef bullet_h
#define bullet_h

#include "flyingObj.h"
#include "velocity.h"
#include "point.h"


class Bullet:public FlyingObjects{
  
    
private:
    float angle = 60.0;
    
    
public:
    
    Bullet();
    void fire(Point p, float angle);

};


#endif /* bullet_h */
