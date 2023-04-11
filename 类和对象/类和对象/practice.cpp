//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//#include<cmath>
//using namespace std;
#include"all.h"

//class Cube
//{
//private:
//	double m_H;
//	double m_W;
//	double m_L;
//public:
//	void setm_H(double H)
//	{
//		m_H = H;
//	}
//	void setm_L(double L)
//	{
//		m_L = L;
//	}
//	void setm_W(double W)
//	{
//		m_W = W;
//	}
//	double getm_H()
//	{
//		return m_H;
//	}
//	double getm_L()
//	{
//		return m_L;
//	}
//	double getm_W()
//	{
//		return m_W;
//	}
//	double area()
//	{
//		return (m_L * m_W + m_L * m_H + m_H * m_W) * 2;
//	}
//	double volume()
//	{
//		return m_L * m_W * m_H;
//	}
//	void judge(Cube c1)
//	{
//		if (c1.getm_L() == m_L && c1.getm_W() == m_W && c1.getm_H() == m_H)
//		{
//			cout << "相同" << endl;
//		}
//		else
//		{
//			cout << "不同" << endl;
//		}
//	}
//};
//void pudge(double L1,double W1,double H1,double L2,double W2,double H2)
//{
//	if (L1 == L2 && W1 == W2 && H1 == H2)
//	{
//		cout << "相同" << endl;
//	}
//	else
//	{
//		cout << "不同" << endl;
//	}
//}
//void judge(Cube c1,Cube c2)
//{
//	if (c1.getm_H() == c2.getm_H() && c1.getm_L() == c2.getm_L() && c1.getm_W() == c2.getm_W())
//	{
//		cout << "相同" << endl;
//	}
//	else
//	{
//		cout << "不同" << endl;
//	}
//}

//int main()
//{
//	Cube c1;
//	c1.setm_H(10);
//	c1.setm_L(10);
//	c1.setm_W(10);
//	cout << c1.area() << endl;
//	cout << c1.volume() << endl;
//	Cube c2;
//	c2.setm_H(10);
//	c2.setm_L(10);
//	c2.setm_W(10);
//	cout << c1.area() << endl;
//	cout << c1.volume() << endl;
//	judge(c1, c2);
//	c1.judge(c2);
//}
//class point
//{
//private:
//	int m_x;
//	int m_y;
//public:
//	void setm_x(int x)
//	{
//		m_x = x;
//	}
//	void setm_y(int y)
//	{
//		m_y = y;
//	}
//	int getm_x()
//	{
//		return m_x;
//	}
//	int getm_y()
//	{
//		return m_y;
//	}
//};
//
//class rounds
//{
//private:
//	int m_x;
//	int m_y;
//	int m_r;
//public:
//	void setm_x(int x)
//	{
//		m_x = x;
//	}
//	void setm_y(int y)
//	{
//		m_y = y;
//	}
//	void setm_r(int r)
//	{
//		m_r = r;
//	}
//	int getm_x()
//	{
//		return m_x;
//	}
//	int getm_y()
//	{
//		return m_y;
//	}
//	int getm_r()
//	{
//		return m_r;
//	}
//	void distance(point P)
//	{
//		if ((m_x - P.getm_x()) * (m_x - P.getm_x()) + (m_y - P.getm_y()) * (m_y - P.getm_y()) > m_r *m_r)
//		{
//			cout << "点在圆内" << endl;
//		}
//		else if ((m_x - P.getm_x()) * (m_x - P.getm_x()) + (m_y - P.getm_y()) * (m_y - P.getm_y()) == m_r * m_r)
//		{
//			cout << "点在圆上" << endl;
//		}
//		else
//		{
//			cout << "点在圆外" << endl;
//		}
//	}
//};


int main()
{
	rounds R;
	R.setm_r(10);
	R.setm_x(10);
	R.setm_y(0);
	point P;
	P.setm_x(10);
	P.setm_y(10);
	R.distance(P);
}
