#pragma once
#include"all.h"
class rounds
{
private:
	int m_x;
	int m_y;
	int m_r;
public:
	void setm_x(int x);
	void setm_y(int y);
	void setm_r(int r);
	int getm_x();
	int getm_y();
	int getm_r();
	void distance(point P);
};
