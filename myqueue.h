#ifndef _MYQUEUE_H
#define _MYQUEUE_H

/******************************************************** 
	* @file    : myqueue.h
	* @brief   : 
	* @details : 
	* @author  : fanchuanlin@aliyun.com
	* @date    : 2020-4-9
*********************************************************/

template <class T> class MyQueue {
private:
	T* v;
	unsigned int m_head;
	unsigned int m_tail;
	unsigned int m_size;
	unsigned int m_num; //for judgment full or empty

public:
	MyQueue(int size);
	~MyQueue();

	void EnQueue(T);
	T DeQueue();
	bool IsFull();
	bool IsEmpty();
};

template <class T> MyQueue<T>::MyQueue(int size)
{
	m_size = size;
	m_head = 0;
	m_tail = 0;
	m_num = 0;

	v = new T[size];
}

template<class T> MyQueue<T>::~MyQueue()
{
	//
}

/******************************************************** 
    *  @function :  enqueue
    *  @brief    :  brief 
    *  @input    : 
    *  @output   : 
    *  @return   : 
    *  @author   :  FAN CHUANLIN  2020/04/09 22:03
	*  @History  :
********************************************************/

template <class T> void MyQueue<T>::EnQueue(T q)
{
	if(m_num < m_size)
		m_num++;

	v[m_tail++%m_size] = q;
	
	//如果循环队列溢出size将head向后移动
	if (m_tail > m_size)
	{
		if (m_num == m_size)
		{
			m_head++;
		}
	}
}

/******************************************************** 
    *  @function :  dequeue
    *  @brief    :  brief 
    *  @input    : 
    *  @output   : 
    *  @return   : 
    *  @author   :  FAN CHUANLIN  2020/04/09 22:08
	*  @History  :
********************************************************/
template <class T> T MyQueue<T>::DeQueue()
{
	if (!IsEmpty())
	{
		m_num--;
		return v[m_head++ % m_size];
	}
}

template <class T> bool MyQueue<T>::IsFull()
{
	if (m_num == m_size)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template <class T> bool MyQueue<T>::IsEmpty()
{
	if (m_num == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
#endif
