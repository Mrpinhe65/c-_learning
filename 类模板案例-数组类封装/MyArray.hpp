//自己的通用数组类
#pragma once
#include<iostream>
using namespace std;

template<class T>
class MyArray
{
	public:
		//有参构造 参数 容量
		MyArray(int capacity)
		{
			cout<<"MyArray有参构造调用"<<endl;
			this->m_Capacity=capacity;
			this->m_Size=0;
			this->pAddress=new T[this->m_Capacity];
		}
		
		//拷贝构造
		MyArray(const MyArray &arr)
		{
			cout<<"MyArray拷贝构造调用"<<endl;
			this->m_Capacity=arr.m_Capacity;
			this->m_Size=arr.m_Size;
			//this->pAddress=arr.pAddress;
			//深拷贝
			this->pAddress=new T[this->m_Capacity];
			//将arr中的数据都拷贝过来
			for(int i=0;i<this->m_Size;i++)
			{
				this->pAddress[i]=arr.pAddress[i];
			}
		}
		
		//operator=,防止浅拷贝
		MyArray& operator=(const MyArray & arr)
		{
			cout<<"MyArray的operator=调用"<<endl;

			//先判断原来堆区是否有数据，如果有则先释放
			if(this->pAddress!=nullptr)
			{
				delete[] this->pAddress;
				this->pAddress=nullptr;
				this->m_Capacity=0;
				this->m_Size=0;
			}
				//深拷贝
				this->m_Capacity=arr.m_Capacity;
				this->m_Size=arr.m_Size;
				this->pAddress=new T[arr.m_Capacity];
				for(int i=0;i<this->m_Size;i++)
				{
					this->pAddress[i]=arr.pAddress[i];
				}
				return *this;
			}
		
		//尾插法
		void Push_Back(const T &val){
			//判断容量是否用完
			if(this->m_Capacity==this->m_Size){
				cout<<"数组容量已经用尽，不能尾插数据了"<<endl;
				return;
			}
			this->pAddress[this->m_Size]=val;//在数组尾部插入数据
			this->m_Size++;//更新数组大小（尾部下标）
		}

		//尾删法
		void Pop_Back(){
			//让用户不能访问数组最后一位元素，指定数组大小Size在现有基础上减1，属于逻辑删除
			if(this->m_Size==0){
				cout<<"数组下标已经为0，不能再删除元素了"<<endl;
				return;
			}
			this->m_Size--;
		}

		//通过下标方式访问数据中的元素
		//重载operator[],因数组实际上是个对象，不能直接通过‘ 对象[n] ’的形式访问
		T & operator[](int index){
			return this->pAddress[index]; 
		}

		//返回数组的容量
		int getCapacity(){
			return this->m_Capacity; 
		}

		//返回数组的大小
		int getSize(){
			return this->m_Size;
		}

		//析构函数
		~MyArray()
		{
			if(this->pAddress != nullptr)
			{
				cout<<"MyArray析构函数调用"<<endl;
				delete[] this->pAddress;
				this->pAddress=nullptr;
			}
		}
	private:
		T * pAddress;//指针指向堆区开辟的真实数组
		int m_Capacity;//数组容量
		int m_Size;//数组大小
};
