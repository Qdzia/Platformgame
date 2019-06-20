#pragma once
#include "Entity.h"
#include "Bullet.h"
using namespace sf;
class Enemy :
	public Entity
{
public:
	Enemy();
	virtual ~Enemy();
	RectangleShape hpBar;
	bool shotRand = false;
	void move();
	//void move(float x, Player & p, Enemy &e);
	void jump(float x);
	void shot();
	//void shot(Bullet &b1, Player &p, RenderWindow &w, vector<CircleShape> &projectiles, Enemy &e1, vector<CircleShape>& enemyprojectiles);
	void setAtributes();
	
};
