//
//  MapSequence.hpp
//  SharkMan
//
//  Created by 张靖 on 15/11/22.
//
//

#ifndef __MAP_SEQUENCE_H__
#define __MAP_SEQUENCE_H__

#include <vector>

struct SequenceInfo
{
    unsigned short L;
    unsigned short M;
    unsigned short R;
    SequenceInfo(unsigned short l,unsigned m,unsigned short r);
};

#define EMPTY 0
#define MONSTER 1
#define COIN 2

class MapSequence
{
public:
    MapSequence(const char* sequence_file);
    MapSequence();
    SequenceInfo pump();
    int getTotalSequence();
    void rewind();
    bool isEOS();
private:
    void add(unsigned short l, unsigned short m, unsigned short r);
    int index;
    std::vector <SequenceInfo> sequence;
};

#endif /* __MAP_SEQUENCE_H__ */
