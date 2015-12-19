#ifndef OBSTACLE_ACTION_H
#define  OBSTACLE_ACTION_H 
#include "cocos2d.h"
#include "entities/SharkMan.h"
class ObstacleAction : public cocos2d::Action{
public:
	ObstacleAction (SharkMan * player,cocos2d::Node * render_node);
	ObstacleAction();
	virtual bool isDone() const;
	virtual void step(float time);
private:
    cocos2d::Node * render_node;
	SharkMan * player;
};
#endif