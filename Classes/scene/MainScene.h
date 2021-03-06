#ifndef __MAIN_SCENE_H__
#define __MAIN_SCENE_H__

#include "cocos2d.h"
#include "entities/SharkMan.h"
#include "input/PlayerInput.h"
#include "control/ProcGenerator.h"

class MainScene : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    
    // implement the "static create()" method manually
    CREATE_FUNC(MainScene);

    void earnGold();
    void hitPlayer();
    
private:
    SharkMan* sharkMan;
    PlayerInput* input;
    ProcGenerator procGen;
    int current_gold;
    
    static void initBackground(cocos2d::Scene* scene);
    void initPerspectiveCamera();
    void initSharkMan();
    
    bool onTouchBegan(cocos2d::Touch *touch, cocos2d::Event *unused_event);
    void onTouchEnded(cocos2d::Touch *touch, cocos2d::Event *unused_event);
    void upDateScene(float dt);
};

#endif // __MAIN_SCENE_H__
