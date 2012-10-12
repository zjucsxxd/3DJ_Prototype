//
//  CBoxButton.h
//  Kinect_3DJ
//
//  Created by Samuel Ruberti on 6/30/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef Kinect_3DJ_BoxButton_h
#define Kinect_3DJ_BoxButton_h
#include "Entity.h"

class CBoxButton : public CBoxEntity
{

public:
    CBoxButton(float centerX, float centerY, float centerZ, int boxSize, 
        float redVal, float greenVal, float blueVal, float alphaVal, string soundName);
    CBoxButton();
    ~CBoxButton();

    void render();
	void update(double time_since_last_update);
    float swellAnimation();
    float percentIncluded();
    bool isCurrentlyHit();
    bool isHit();
    void clear();
    bool collisionTest( ofPoint point)  ;
    bool collisionTest( ofPoint *pPoint);

    virtual bool isLoopBox();

    ofSoundPlayer m_soundPlayer;
    bool m_isRepeat;
    bool m_toBeStop;

protected:
    bool hitTest(float x, float y, float z);

private:

	void setHitMode();
	void setDefaultMode();
};

#endif