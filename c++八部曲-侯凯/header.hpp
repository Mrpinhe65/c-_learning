#ifndef __COMPLEX__
#define __COMPLEX__

template<typename T> //变量定义的模板，使用时指定实际数据类型如：complex<double> c1(2.5,1.25); complex<int> c2(5,8);

class complex{
public:
	complex(T r=0,T i=0):re (r),im(i){
	}
	complaex& operator +=(const complaex);
	T real() const{
		return re;
	}
	doeble imag() const{
		return im;
	}
private:
	T re,im;
		
	friend complex& __doapl(complex*,const complex&);
};


#endif
