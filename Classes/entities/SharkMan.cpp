//
//  SharkMan.cpp
//  SharkMan
//
//  Created by 张靖 on 15/11/15.
//
//

#include "SharkMan.h"

USING_NS_CC;

SharkMan::SharkMan()
{
    const std::string filename = "model/sharkman.c3b";
    sharkMan = Sprite3D::create(filename);
    sharkMan->setRotation3D(Vec3(0,165,0));
    sharkMan->setScale(1.2f);
    
    auto aniamtion = Animation3D::create(filename);
    auto animate = Animate3D::createWithFrames(aniamtion, FRAME_RUN_START, FRAME_RUN_END, FPS);
    sharkMan->runAction(RepeatForever::create(animate));
}

Sprite3D* SharkMan::getSprite3D()
{
    return this->sharkMan;
}