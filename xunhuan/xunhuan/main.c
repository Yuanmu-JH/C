#include<stdio.h>
#include<windows.h>


int Fact(int n)
{
	int result = 1;
	for (int i = n; i > 1; i--){
		result *= i;
	}
	return result;
}

int FactSum(int start, int end)
{
	int sum = 0;
	for (int i = start; i <= end; i++){
		sum += Fact(i);
	}
	return sum;
}

//返回值：success则返回数组下标；fail：-1
int BinSearch(int arr[],int num,int target)
{

	int start = 0;
	int end = num - 1;	//因为数组下标从0 开始
	while (end > start){
		int mid = (end + start) / 2;
		if (target < arr[mid]){
			end = mid - 1;
		}
		else if (target > arr[mid])
		{
			start = mid + 1;
		}else
		{
			return mid;
		}
	}
	return -1;
}
int main(){

	//计算n的阶乘
	//int n = 10;
	//int result = Fact(n);
	//printf("result= %d\n", result);

	//计算 1!+2!+3!+……+10!
	//int start = 1;
	//int end = 10;
	//int total = FactSum(start, end);
	//printf("1!+2!+3!+……+10! = %d\n", total);

	// 在一个有序数组中查找具体的某个数字n。 二分查找
	//编写int binsearch(int x, int v[], int n); 功能：在v[0] <= v[1] <= v[2] <= …. <= v[n - 1]的数组中查找x
	int arr[] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 100 };
	int target = 88;
	int num = sizeof(arr) / sizeof(arr[0]);	//获取数组元素个数
	int index = BinSearch(arr, num,target);
	printf("index = %d\n", index);

	system("pause");
	return 0;
}