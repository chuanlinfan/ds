/******************************************************** 
	* @file    : stack.cpp
	* @brief   : 
	* @details : 
	* @author  : fanchuanlin@aliyun.com
	* @date    : 2020-4-7
*********************************************************/

#include "mystack.h"


/******************************************************** 
    *  @function :  
    *  @brief    :  brief 
    *  @input    : 
    *  @output   : 
    *  @return   : 
    *  @author   :  FAN CHUANLIN  2020/04/07 23:24
	*  @History  :
********************************************************/
template<class T> MyStack<T>::MyStack(int s)
{
    max_size = s;
    top = 0;
    v = new T[s];
}

/******************************************************** 
    *  @function :  
    *  @brief    :  brief 
    *  @input    : 
    *  @output   : 
    *  @return   : 
    *  @author   :  FAN CHUANLIN  2020/04/07 23:24
	*  @History  :
********************************************************/
template<class T> MyStack<T>::~MyStack()
{
	delete [] v;
}


/******************************************************** 
    *  @function :  push
    *  @brief    :  brief 
    *  @input    : 
    *  @output   : 
    *  @return   : 
    *  @author   :  FAN CHUANLIN  2020/04/07 23:14
	*  @History  :
********************************************************/
template<class T> void MyStack<T>::push(T c)
{
    if (top == max_size) throw OverFlow();
    v[top] = c;
    top = top + 1;
}

/******************************************************** 
    *  @function :  
    *  @brief    :  brief 
    *  @input    : 
    *  @output   : 
    *  @return   : 
    *  @author   :  FAN CHUANLIN  2020/04/07 23:19
	*  @History  :
********************************************************/
template<class T> T MyStack<T>::pop()
{
    if (top == 0) throw Underflow();
    top = top - 1;
    return v[top];
}
