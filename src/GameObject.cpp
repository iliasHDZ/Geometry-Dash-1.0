#include "../headers/includes.h"

#include <string>

const char* intToStr(int value) {
    return cocos2d::CCString::createWithFormat("%i", value)->getCString();
}

const char* GameObject::frameToKey(const char* frame) {
    switch (std::string(frame)) {
    case "square_01_001.png": return intToStr(1);
    case "square_02_001.png": return intToStr(2);
    case "square_03_001.png": return intToStr(3);
    case "square_04_001.png": return intToStr(4);
    case "square_05_001.png": return intToStr(5);
    case "square_06_001.png": return intToStr(6);
    case "square_07_001.png": return intToStr(7);
    case "spike_01_001.png": return intToStr(8);
    case "spike_02_001.png": return intToStr(39);
    case "portal_01_front_001.png": return intToStr(10);
    case "portal_02_front_001.png": return intToStr(11);
    case "portal_03_front_001.png": return intToStr(12);
    case "portal_04_front_001.png": return intToStr(13);
    case "pit_01_001.png": return intToStr(9);
    case "d_spikes_01_001.png": return intToStr(18);
    case "d_spikes_02_001.png": return intToStr(19);
    case "d_spikes_03_001.png": return intToStr(20);
    case "d_spikes_04_001.png": return intToStr(21);
    case "rod_01_001.png": return intToStr(15);
    case "rod_02_001.png": return intToStr(16);
    case "rod_03_001.png": return intToStr(17);
    case "edit_eeNoneBtn_001.png": return intToStr(22);
    case "edit_eeFBBtn_001.png": return intToStr(23);
    case "edit_eeFTBtn_001.png": return intToStr(24);
    case "edit_eeFLBtn_001.png": return intToStr(25);
    case "edit_eeFRBtn_001.png": return intToStr(26);
    case "edit_eeSUBtn_001.png": return intToStr(27);
    case "edit_eeSDBtn_001.png": return intToStr(28);
    case "edit_eTintBGBtn_001.png": return intToStr(29);
    case "edit_eTintGBtn_001.png": return intToStr(30);
    case "edit_eStartPosBtn_001.png": return intToStr(31);
    case "edit_eLevelEndBtn_001.png": return intToStr(34);
    case "edit_eBGEOn_001.png": return intToStr(42);
    case "edit_eBGEOff_001.png": return intToStr(43);
    case "edit_eGhostEBtn_001.png": return intToStr(32);
    case "edit_eGhostDBtn_001.png": return intToStr(33);
    case "bump_01_001.png": return intToStr(35);
    case "ring_01_001.png": return intToStr(36);
    case "plank_01_001.png": return intToStr(40);
    case "chain_01_001.png": return intToStr(41);
    }

    return frame;
}