//
//  TitleScene.h
//  cocos2d-x-game
//
//  Created by 神林 篤 on 2012/08/18.
//
//

#ifndef __cocos2d_x_game__TitleScene__
#define __cocos2d_x_game__TitleScene__

#include "cocos2d.h"

class Title : public cocos2d::CCLayer
{
private:
    cocos2d::CCSprite *mSprite;
    
public:
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();
    
    // there's no 'id' in cpp, so we recommand to return the exactly class pointer
    static cocos2d::CCScene* scene();
    
    // a selector callback
    void menuChangeScene(CCObject* pSender);
    
    // implement the "static node()" method manually
    LAYER_CREATE_FUNC(Title);
    
    void registerWithTouchDispatcher();
    bool ccTouchBegan( cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent );
    void ccTouchEnded( cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent );
};

#endif /* defined(__cocos2d_x_game__TitleScene__) */
