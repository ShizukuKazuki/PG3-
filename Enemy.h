#pragma once
class Enemy
{
public:
	Enemy();
	~Enemy();

	void Approvch();
	void Shoot();
	void GetAway();

	//�X�V
	void Updata();
	//�`��
	void Draw();
private:
	//�֐��e�[�u��
	static void (Enemy::* pFunc[])();
	//�s��
	int phase;

};

