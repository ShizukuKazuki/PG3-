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
	return true;
}
void Enemy::SetDeath()
{
	isAlive = isAlive;
	isAllAlive = isAllAlive;
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