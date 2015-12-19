#ifndef COIN_H
#define COIN_H 
#include "cocos2d.h"
#include "SharkMan.h"

//the coin that player can pick
class Coin{
public:
	Coin(SharkMan * player,cocos2d::Node * render_node);
	void bindToLayer(cocos2d::Node * render_node);
	cocos2d::Sprite3D* getSprite();
private:
	cocos2d::Sprite3D* sprite;
	SharkMan* player;
};


#endif // !COIN_H
