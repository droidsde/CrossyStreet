#ifndef  PLAYER_H
#define PLAYER_H
#include "cocos2d.h"
#include "base_Header.h"
#include "World.h"
class Player{
public:
    Player(cocos2d::Node * render_node,cocos2d::Node * ui_node);
    cocos2d::Sprite3D * getPlayer();
    int getDirection();
    void move(int direction);
    void tryMove(int direction);
    void turn(int direction);
    void setCam(cocos2d::Camera *cam);
    void setWorld(World * wolrd);
	void hurt();
    int score();
    void setScore(int new_score);
private:
    cocos2d::Node * m_UINode;
    cocos2d::Label * m_label;
    int m_score;
    bool m_isAlive;
    World * m_world;
    cocos2d::Camera * m_cam;
    cocos2d::Node * m_renderNode;
    int m_direction;
    cocos2d::Sprite3D * m_player;
};

#endif // ! PLAYER_H
