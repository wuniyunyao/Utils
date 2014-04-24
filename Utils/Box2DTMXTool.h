#ifndef __BOX2DTMXTOOL_H_
#define __BOX2DTMXTOOL_H_
#define PTM_RATIO 32
#include "cocos2d.h"
#include "Box2D.h"
using namespace cocos2d;
/*
�ļ�����Box2DTMLTool.h
�������ù������ڽ�tiled map�еĵ��ζ�����Box2Dʹ��
�����ߣ�������ң
�������ڣ�2013/4/24
*/
class Box2DTMXTool{
public:
	bool readPhysicalMap(b2World *b2world);
	bool setTiledMap(CCTMXTiledMap* tiledMap);
	CCTMXTiledMap* getTiledMap();
	bool readTiledMapForBlocks(b2World* world);
private:
	CCTMXTiledMap* mTiledMap;
	b2Body* mBody;
	
};
#endif //__BOX2DTMXTOOL_H_