//冒泡排序（BubbleSort)  
//从左向右扫描数据，选择最大的数据，放在右边
//要点：比较相邻的两个数，如果左边大于右边就进行交换 
 
#include<iostream> 
using namespace std;
 
void BubbleSort(int b[],int n);
 
int main()
{
	int i,a[]={2,4,6,8,0,1,3,5,7,9};
	for(i=0;i<10;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	
	BubbleSort(a,10);
	for(i=0;i<10;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	
	return 0;
}

void BubbleSort(int b[],int n)
{
	int i,j;
	for(int i = 0;i < n-1; i++)
	{
		for(int j = 0; j < n-1-i; j++)
			if( b[j] > b[j+1])
				swap(b[j], b[j+1]);
	}
}
