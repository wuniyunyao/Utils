#ifndef __BOX2DTMXTOOL_H_
#define __BOX2DTMXTOOL_H_
#include "cocos2d.h"
#include "Box2D.h"
/*
�ļ�����Box2DTMLTool.h
�������ù������ڽ�tiled map�еĵ��ζ�����Box2Dʹ��
�����ߣ�������ң
�������ڣ�2013/4/24
*/
class Box2DTMXTool{
public:
	bool readPhysicalMap(b2World *b2world);
private:
	CC_SYNTHESIZE(CCTMXTiledMap*,_mTiledMap,TiledMap);
};
#endif //__BOX2DTMXTOOL_H_