#define _CRT_SECURE_NO_WARNINGS
#include"all.h"
void rounds:: setm_x(int x)
{
	m_x = x;
}
void rounds:: setm_y(int y)
{
	m_y = y;
}
void rounds:: setm_r(int r)
{
	m_r = r;
}
int rounds:: getm_x()
{
	return m_x;
}
int rounds:: getm_y()
{
	return m_y;
}
int rounds:: getm_r()
{
	return m_r;
}
void rounds:: distance(point P)
{
	if ((m_x - P.getm_x()) * (m_x - P.getm_x()) + (m_y - P.getm_y()) * (m_y - P.getm_y()) > m_r * m_r)
	{
		cout << "点在圆内" << endl;
	}
	else if ((m_x - P.getm_x()) * (m_x - P.getm_x()) + (m_y - P.getm_y()) * (m_y - P.getm_y()) == m_r * m_r)
	{
		cout << "点在圆上" << endl;
	}
	else
	{
		cout << "点在圆外" << endl;
	}
}