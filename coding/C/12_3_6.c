//12_3_6
int sum_arr(int n,int a[])
{
	int sum=0;
	
	for(int i=0;i<n;i++)
		sum+=*(a+i);
	
	return sum;
}

//12_3_7
//a 是待搜索的数组，n 是数组中元素的数量，key 是搜索键。如果key 与数组a 的某个元素匹配了，那么search 函数返回true ；否则返回false 。要求使用指针算术运算而不是取下标来访问数组元素。
bool search(int n,const int a[],int key)
{
	for(int i=0;i<n;i++)
		if(*(a+i)==key)return true;
	
	return false;
}

//12_3_9
//编写下列函数：
//double inner_product(const double *a, const double *b,
//                     int n);

//　　a 和b 都指向长度为n 的数组。函数返回a[0]*b[0]+a[1]*b[1]+...+a[n-1]*b[n-1] 。要求使用指针算术运算而不是取下标来访问数组元素。
double inner_product(const double *a,const double *b,int n)
{
	double sum=0;
	
	for(int i=0;i<n;i++)
		sum+=*(a+i)+*(b+i);
	
	return sum;
}

//12_3_10
//修改11.5节的find_middle 函数，用指针算术运算计算返回值。
int find_middle(int *a,int n)
{
	return *(a+n/2);
}

//12_3_12
// 编写下面的函数：
//void find_two_largest(const int *a, int n, int *largest,
//                      int *second_largest);

//　　a 指向长度为n 的数组。函数从数组中找出最大和第二大的元素，并把它们分别存储到由largest 和second_largest 指向的变量中。要求使用指针算术运算而不是取下标来访问数组元素
void find_two_largest(const *a,int n,int *largest,int *second)
{
    if (*a > *(a + 1)) {
        *largest = *a;
        *second = *(a + 1);
    } else {
        *largest = *(a + 1);
        *second = *a;
    }

    for (int i=2;i<n;i++) {
        if (*(a+i) > *largest) {
            *second = *largest;
            *largest = *(a+i);
        } else if (*(a+i) > *second) {
            *second = *(a+i);
        }
    }
}