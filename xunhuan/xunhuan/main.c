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

//����ֵ��success�򷵻������±ꣻfail��-1
int BinSearch(int arr[],int num,int target)
{

	int start = 0;
	int end = num - 1;	//��Ϊ�����±��0 ��ʼ
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

	//����n�Ľ׳�
	//int n = 10;
	//int result = Fact(n);
	//printf("result= %d\n", result);

	//���� 1!+2!+3!+����+10!
	//int start = 1;
	//int end = 10;
	//int total = FactSum(start, end);
	//printf("1!+2!+3!+����+10! = %d\n", total);

	// ��һ�����������в��Ҿ����ĳ������n�� ���ֲ���
	//��дint binsearch(int x, int v[], int n); ���ܣ���v[0] <= v[1] <= v[2] <= ��. <= v[n - 1]�������в���x
	int arr[] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 100 };
	int target = 88;
	int num = sizeof(arr) / sizeof(arr[0]);	//��ȡ����Ԫ�ظ���
	int index = BinSearch(arr, num,target);
	printf("index = %d\n", index);

	system("pause");
	return 0;
}