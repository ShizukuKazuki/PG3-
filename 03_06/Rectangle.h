#pragma once
#include"IShape.h"
class Rectangle :public IShape
{
public:
	void draw() override;
	void size() override;
};

