#include "Enemy.h"
#include <iostream>

using namespace std;

int Enemy::Enemy_C = 0;

Enemy::Enemy() : Enemy_ID(0)
{
	Enemy_ID = Enemy_C;
	Enemy_C++;
}

Enemy::~Enemy()
{
	cout << "�G:" << Enemy_ID << "���j" << endl;
	Enemy_C--;
}
void Enemy::EnemyNum()
{
	cout << "�G�̐���," << Enemy_C << "��" << endl;
}
void Enemy::entriy()
{
	cout << Enemy_ID << ":" << "�G�o��" << endl;
}