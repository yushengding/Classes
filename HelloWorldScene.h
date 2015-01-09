#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
USING_NS_CC;
class HelloWorld : public cocos2d::Layer
{
public:
	void onTouchesEnded(const std::vector<Touch*>& touches, Event *event);
	void addNewSpriteAtPosition(Point p);
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();
	CCArray *arraybody;
	CCArray *arraysprite;
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();  
	void onEnter();
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
	void setPhyWorld(PhysicsWorld* world){ m_world = world; }
    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);
	void update(float dt);
private:
	PhysicsWorld* m_world;
};

#endif // __HELLOWORLD_SCENE_H__
