#pragma once


//点类，用于建立圆心坐标对象以及求的点坐标对象
//点类嵌套在圆类中
class Point{
	public:
		void setX(int x){
			m_X=x;
		}
		
		void setY(int y){
			m_Y=y;
		}

		int getX(){
			return m_X;
		}

		int getY(){
			return m_Y;
		}

	private:
		int m_X;
		int m_Y;
};
