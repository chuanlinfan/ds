/******************************************************** 
	* @file    : ds.cpp
	* @brief   : main()
	* @details : 
	* @author  : fanchuanlin@aliyun.com
	* @date    : 2020-4-7
*********************************************************/

#include <iostream>
#include "MyStack.h"
using namespace std;

int main()
{
	cin >> noskipws;
    MyStack<char> sc(200);
	char c;
	int size = 0;
	while (cin >> c)
	{
		sc.push(c);
		size++;
	}
	
	int i = 0;
	while (i++< size)
	{
		cout << sc.pop();
	}
	return 0;
}