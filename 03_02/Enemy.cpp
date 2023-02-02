#include "Enemy.h"
#include <stdio.h>

bool Enemy::isAllAlive = false;

Enemy::Enemy()
{
	isAlive = true;
	isAllAlive = true;
}
Enemy::~Enemy()
{
}
bool Enemy::IsAlive()
{
	return isAlive;
}
void Enemy::SetDeath()
{
	isAlive = false;
	isAllAlive = true;
}
void Enemy::Updata()
{
	if (isAllAlive = false)
	{
		isAlive = false;
	}
}
void Enemy::Draw()
{
	if (IsAlive())
	{
		printf("ìGèoåª\n");
	}
	
}
