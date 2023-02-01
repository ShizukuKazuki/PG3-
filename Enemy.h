#pragma once
class Enemy
{
public:
	Enemy();
	~Enemy();

	void Approvch();
	void Shoot();
	void GetAway();

	//更新
	void Updata();
	//描画
	void Draw();
private:
	//関数テーブル
	static void (Enemy::* pFunc[])();
	//行動
	int phase;

};

