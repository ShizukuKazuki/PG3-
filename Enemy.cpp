#include "Enemy.h"
#include <stdio.h>

//�����o�֐��|�C���^�e�[�u��
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
	printf("�ڋ�\n");
}

void Enemy::Shoot()
{
	printf("�ˌ�\n");
}

void Enemy::GetAway()
{
	printf("�P��\n");
}

void Enemy::Updata()
{
	//�f�o�b�N
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

