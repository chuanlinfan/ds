/******************************************************** 
	* @file    : ds.cpp
	* @brief   : main()
	* @details : 
	* @author  : fanchuanlin@aliyun.com
	* @date    : 2020-4-7
*********************************************************/

//include file
#include <iostream>
#include <string>
#include "mystack.h"
#include "myqueue.h"
using namespace std;


/******************************************************** 
    *  @function :  main()
    *  @brief    :  test DS 
    *  @input    : 
    *  @output   : 
    *  @return   : 
    *  @author   :  FAN CHUANLIN  2020/04/09 21:34
	*  @History  :
********************************************************/
int main()
{
    MyQueue<string> qs(5);
	char sc[500];

	cin >> noskipws;
	while (cin.getline(sc, 200))
	{
		qs.EnQueue(sc);
	}

	while (true)
	{
		if (qs.IsEmpty())
		{
			break;
		}
		cout << qs.DeQueue() << endl;
	}

	return 0;
}