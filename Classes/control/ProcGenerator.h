#ifndef __PROC_GENERATOR_H__
#define __PROC_GENERATOR_H__

#include <cocos2d.h>
#include <stack>
#include "MapSequence.h"
#include "entities/SharkMan.h"
class ProcGenerator
{
public:
    ProcGenerator();
    ~ProcGenerator();
    void randomGenerate(SharkMan* player, cocos2d::Node* render_node,float dt);
    void generateScene(SharkMan* player,cocos2d::Node* render_node);
    void generateObstacle(SharkMan* player,cocos2d::Node* render_node);
    void generateGround(cocos2d::Node* render_node);
    void insertMapSequence(MapSequence* map_sequence);
    void preGenerate(cocos2d::Node* render_node);
private:
    SequenceInfo pump();
    void run(float dt);
    MapSequence * current_sequence;
    std::vector<MapSequence *> sequence_list;
};

#endif /* __PROC_GENERATOR_H__ */
