//
//  SharkMan.hpp
//  SharkMan
//
//  Created by 张靖 on 15/11/15.
//
//

#ifndef __SHARK_MAN_H__
#define __SHARK_MAN_H__

#include <cocos2d.h>

class SharkMan
{
public:
    SharkMan();
    cocos2d::Sprite3D* getSprite3D();
private:
    static const int FRAME_RUN_START = 0;
    static const int FRAME_RUN_END = 12;
    static const int FRAME_JUMP_START = 13;
    static const int FRAME_JUMP_END = 29;
    static const int FRAME_SLIDE_START = 30;
    static const int FPS = 24;

    cocos2d::Sprite3D* sharkMan;
};

#endif /* __SHARK_MAN_H__ */
