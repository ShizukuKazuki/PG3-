#include "Enemy.h"
#include <stdio.h>

//メンバ関数ポインタテーブル
void(Enemy::* Enemy::pFunc[])() =
{
	&Enemy::Approvch,
	&Enemy::Shoot,
	&Enemy::GetAway
};

Enemy::Enemy()
{
	phase = 0;
}

Enemy::~Enemy()
{

}

void Enemy::Approvch()
{
	printf("接近\n");
}

void Enemy::Shoot()
{
	printf("射撃\n");
}

void Enemy::GetAway()
{
	printf("撤退\n");
}

void Enemy::Updata()
{
	//デバック
	printf("phase : %d\n", phase);

	(this->*pFunc[phase])();
	
	phase++;
	if (phase >= 3)
	{
		phase = 0;
	}

}
void Enemy::Draw()
{
	printf("(Enemy Draw)\n");
}

