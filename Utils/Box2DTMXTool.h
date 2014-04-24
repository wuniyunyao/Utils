#ifndef __BOX2DTMXTOOL_H_
#define __BOX2DTMXTOOL_H_
#include "cocos2d.h"
#include "Box2D.h"
/*
文件名：Box2DTMLTool.h
描述：该工具用于将tiled map中的地形读出供Box2D使用
创建者：无逆云遥
创建日期：2013/4/24
*/
class Box2DTMXTool{
public:
	bool readPhysicalMap(b2World *b2world);
private:
	CC_SYNTHESIZE(CCTMXTiledMap*,_mTiledMap,TiledMap);
};
#endif //__BOX2DTMXTOOL_H_