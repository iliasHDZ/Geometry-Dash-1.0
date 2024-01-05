#ifndef __GAMEOBJECT__
#define __GAMEOBJECT__

#include "includes.h"

class GameObject : public cocos2d::CCSprite
{
public:
    cococs2d::CCSprite* m_pGlow;
    unknown1[2] unk0;
    bool m_bIsPoweredOn;
    unknown1 unk1;
    float unk_float0;
    float unk_float1;
    bool m_bActivated;
    bool m_bHasGlow;
    unknown1[2] unk2;
    cocos2d::CCParticleSystemQuad* m_pParticleSystem;
    unknown4[8] unk3;
    float m_fScaleModX;
    float m_fScaleModY;
    int m_nM_ID;
    GameObjectType m_eType;
    int m_nSectionIdx;
    bool m_bShouldSpawn;
    cocos2d::CCPoint m_obRealPos;
    unknown4[4] unk4;
    float unk_spawnXPos;
    unknown4[2] unk5;
    bool m_bBlendAdditive;
    bool m_bUsePlayerColor;
    bool m_bIsDisabled;
    float m_fStartRotation;
    float m_fStartScaleX;
    float m_fStartScaleY;
    bool m_bShouldHide;
    float m_fSpawnXPos;
    bool m_bIsInvisible;
    int m_eEnterEffect;
    cocos2d::_ccColor3B m_cTintColor;
    float m_fTintDuration;
    int m_nObjectKey;
    bool m_bDontTransform;
    bool m_bHasBeenActivated;
    char m_nStateVar;
    int m_nObjectZ;
    cocos2d::CCNode* m_pObjectParent;
};

#endif