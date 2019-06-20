#include "Spikes.h"

using namespace sf;


void Spikes::Effect(Entity* collider, int num)
{
	if (num == 1) 
	{
		collider->gravityForce = false;
		collider->whileJump = false;
		collider->speedValue = 10.f;
		object.setFillColor(Color::Red);
	}
	
	else object.setFillColor(Color::White);
	//narazie tylko si� pod�wietla mo�na doda� ze zabija albo hp tracisz czy co�
}

Spikes::Spikes(float x, float y, float width, float hight) :GameObject(x, y, width, hight)
{
}


Spikes::~Spikes()
{
}