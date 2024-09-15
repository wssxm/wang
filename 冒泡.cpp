#include<stdio.h>

int main()
{
	int arr[6] = {15,48,84,37,78,45};
	int temp;
	//交换时候的中间变量 
	int flag = 0;
	//flag 记录是否发生交换 
	int length = sizeof(arr) / sizeof(arr[0]);
	//sizeof 返回整个对象的占用字节长度 整个数组长度为被除数 取出一个元素获取长度作为除数 
	
	for(int i = 0; i < length; i++)
	{
		flag = 0;
		//每次大循环初始状态 
		for(int j = i; j < length - i; j++)//冒泡排序 
		{
			if(arr[j] > arr[j+1])
			{
				flag = 1; //发生交换 
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				//交换 
			}
		}
		if(!flag)
		{
			break;
		}
		//优化：当一轮循环未发生交换的时候退出，即是数据已经有序 
	}
	
	for(int i = 0; i < length; i++)//按顺序输出 
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}

