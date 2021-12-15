//#include <stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#include<math.h>
////输入 和 计数 紧贴在一起
////如果猜错给予提示还有循环 所以条件是 相等于否
//
////
////int main()
////{
////    //char n = 0;
////
////    //int ret = scanf("%c",&n);   //scanf(%d)   返回值 靠准确输入 返回  
////    //printf("%d",ret);
////    int guess = 0, change = 0, count = 0;
////    unsigned int seed = 0;      //产生随机数 使用srand(无符号数)  依靠此无符号数 来产生数字
////  //  scanf("%d",&seed);          //当时seed是基于 输入控制
////    //srand(seed);
////    srand(time(NULL));              //time 返回一个时间
////    change = rand() % 100 + 1;		//rand 只是假的随机数  每次都是一样的
////
////    while (guess != change)       //循环判断一下就进入直接呈现输入
////    {
////        /* b:   int a =   scanf("%d", &guess);
////              count++;
////
////              if (a == 0)
////              {
////                  guess = 0;
////                  goto b;
////              }*/
////        if (guess > change)
////        {
////
////            printf("The aswer is high\n");
////        }
////        else if (guess < change)
////        {
////            printf("The aswer is low\n");
////        }
////
////        else
////        {
////            printf("Your answer is true.\n answer:%d  count : %d", guess, count);
////        }
////    }
////
////
////
////    return 0;
////}
////
////int main()
////{
//	////得到  1到n 加起来
//	////while类
//
//	//int n = 0,i = 1,sum = 0;
//	//scanf("%d",n);
//
//	//while (i <= n)
//	//{
//	//	sum += i;
//
//
//	//	i++;
//	//}
//
//	//printf("%d",sum);
//	//do
//	//	sum += i;
//
//	//while(i<=n)
//
//
//	//输出1-n所有的阶乘
//
//	//核心 1 2 3 各自阶乘  得到1 2 3数字循环以这个数字为限制   然后阶乘  
//
//	/*int n = 0, i = 0, j = 0, mul = 1;
//
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			mul *= j;
//
//
//		}
//		printf("i = %d mul = %d\n",i,mul);
//		mul = 1;
//
//
//
//
//
//	}*/
//	//基于关系   1 2^0   2 2^1....所以pow()
//	//but 效率低
//	//int i = 1;
//	//double sum = 0,mul = 1;
//	//while (i <= 64)
//	//{
//	//	//mul = pow(2, i - 1);		////一般计算 2^n
//	//	sum += mul;					//基于前后项关系 直接*2 效率高   多次计算总不如一次计算 这里我先加后出现*2 也可以
//	//								//直接在外面先加一次  然后2 - 2^63  循环 61次即可
//	//	mul *= 2;
//	//	
//	//	i++;
//
//
//	//}
//	//printf("%lf\n",sum);
//	//double ex_sum = sum / 1.42e8;
//	//printf("%lf",ex_sum);
//
//
//
//	////得到  1 3 5 7 i   1.0/ i   首项 正1  运算后改变  判断+则1  循环条件 10^-4
//	/*int main()
//	{
//
//
//
//
//
//
//		int i = 1, flag = 1, count = 0;
//		double x = 1.0, sum = 0,sign = 1.0;
//		printf("%f", 1e-4);
//		while (1)
//		{
//			x = sign / i* flag;
//			if (fabs(x) >= fabs(1e-4))
//			{
//				sum += x;
//			}
//			else {
//				break;
//			}
//			if (flag == 1)
//			{
//				count++;
//			}
//			flag = -flag;
//			i += 2;
//
//
//
//
//		}
//		printf("%lf", sum * 4);
//
//
//
//
//
//
//
//
//		return 0;
//	}*/
//
////int main()
////{
////
////
////	double sum = 0, term, sign = 1;
////	int count = 0, n = 1;
////
////	do {
////
////
////
////
////		//以 变量为分子  变量进行改变  且 分子为double 类型
////
////		term = sign / n;
////
////
////
////
////
////		sum += term;			
////		count++;a
////		sign = -sign;			//直接对sign  顶部修改
////		n += 2;
////		
////
////	}
////	while (fabs(term) >= 1e-4);
////	printf("%f",sum*4);
////
////
////
////
////
////	return 0;
////}
////计算 pi/4
////fabs 是取绝对值
////标志位   i  循环条件  没问题就加
////int main()
////{
////
////	int  i = 1;
////	double flag = 1, sum = 0;
////
////
////	while(fabs(flag / i) >= 1e-4)   //没问题就进行下面		flag/i >..才让他加
////	{
////
////		sum += flag / i;
////		
////		flag = -flag;
////		i+=2;
////
////
////
////	}
////
////
////
////	printf("%lf",sum*4);
////
////
////
////	return 0;
////}
////对比差异  有个变量代替  那么用变量判断  就是上一次的数据 除非最后更新一下值
////int main()
////{
////
////	int  i = 1;
////	double flag = 1, sum = 0,term = 1.0;
////
////
////	while (fabs(term) >= 1e-4)   //没问题就进行下面		flag/i >..才让他加
////	{
////	//	term = flag / i;  //   是否更新数据？
////		sum += term;
////
////		flag = -flag;
////		i += 2;
////				//为了用最新数据判断那么在判断前更新一下
////	//	term = flag / i;		是否更新数据？！！！！！
////
////	}
////
////
////
////	printf("%lf", sum * 4);
////
////
////
////	return 0;
////}
////#include<stdio.h>
////int main(void)
////{
////	int i = 2, f = 1, count = 1;
////	double pi, sum = 0, t = 1;
////	while (t >= 1e-4)
////	{
////		sum = sum + f * t;
////		t = 1.0 / (2 * i - 1);
////		i++;
////		f = -f;
////		count++;
////	}
////	pi = sum * 4;
////	printf("pi=%lf\ncount=%d\n", pi, count);
////	return 0;
////}
////
////
////嵌套 计算9*9
//
////int main()
////{
////
////
////	int i = 1, j = 1;
////	for (i = 1; i <= 9; i++)
////	{
////
////		for (j = 1; j <= i; j++)
////		{
////			printf("  %d * %d =%2d",j,i,j*i);
////			
////			if (i == j)
////			{
////				printf("\n");
////			}
////		}
////
////
////
////
////
////
////}
////
////
////
////
////
////
////	return 0;
////}
////倒三角 9*9
////确定 i j  数字   
////开始写判断  在过程中写出判断
////int main()
////{
////
////
////	int i = 1, j = 1;
////	for (i = 1; i <= 9; i++)
////	{
////
////		
////
////
////		for (j = 1; j <= 9; j++)
////		{
////
////			while (i > j)
////			{
////				printf("           ");
////				j++;
////			}
////
////			printf(" %d * %d = %-2d",i,j,i*j);
////			if (9 == j)
////			{
////				printf("\n");
////			}
////			
////
////
////		}
////		
////		
////	}
////
////
////
////
////
////
////
////	return 0;
////}
//
////计算线性方程穷举法
//
////穷举 x，y,z   0-30
////计算机只能计算数字的相加减 
/////在穷举 xy 后z就出来了可以对其计算 
////然后让另一个为条件
////int main()
////{
////
////	int x = 0, y = 0, z = 0;
////
////
////	for (x = 0; x <= 16; x++)
////	{
////
////
////
////		for (y = 0; y <= 25; y++)
////		{
////
////
////			z = 30 - x - y;
////			if (3 * x + 2 * y + z == 50)
////			{
////
////				printf("%d %d %d\n",x,y,z);
////			}
////
////			/*for (z = 0; z <= 30; z++)
////			{
////
////				if ((x + y + z == 30) && (3 * x + 2 * y + z == 50))
////				{
////					printf("%d %d %d\n",x,y,z);
////				}
////
////
////			}*/
////
////
////
////
////
////
////		}
////
////
////
////
////
////
////
////
////
////
////	}
////
////
////
////
////
////
////
////	return 0;
////}
//
////指针类型决定了他指向地址整体的多少
//// int* p   整体4 byte   char* p整体1个字节   所以他只能操作他的整体
////1.访问
////2.+1  +2  +3   是指 整体的加   因为整体不同所以+1 指向的地方也不一样了
////野指针：不受控制的指针
////1.指针未初始化
////2.指针越界
////3.局部变量销毁释放内存给了系统   还进行修改
////int main()
////{
////
////	
////
////	int a = 0x10;
////	int* p = &a;
////	*p = 0x15;
////
////	int b = 0x20;
////	char* p1 = &b;
////	*p1 = 0x25;
////	printf("%p\n%p\n%p\n%p\n",p,p+1,p1,p1+1);
////
////
////
////
////
////	int c = 0;
////	int* p = &c;
////	char d = 0;
////	char* e = &d;
////	return 0;
////}
////int main()
////{
////
////	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
////
////	int* p_arr = &arr[1];
////	while(p_arr<&arr[10])
////	{
////
////
////		printf("%d",*p_arr);
////		p_arr+=2;
////
////	}
////
////	return 0;
////}
////指针的关系运算
////int main()
////{
////	int arr[] = {1,2,3,4,5,6,7,8,9,10};
////	//从前向后访问
////	/*int* p_arr = arr;
////	int sz = sizeof(arr) / sizeof(arr[0]);*/
////	/*while (p_arr <= &arr[sz-1])
////	{
////
////		*p_arr++ = 0;
////		printf("%d ",*(p_arr-1));
////
////	}*/
////
////	/*int* vp = arr;
////
////	for (; vp <= &arr[9];)
////
////	{
////		*vp++ = 0;
////		printf("%d ",*(vp-1));
////	}
////*/
////	//后向前
////	//int sz = sizeof(arr) / sizeof(arr[0]);
////
////	//int* vp = &arr[sz-1];
////
////	//for (; vp>=arr; )
////	//{
////	//	*vp-- = 0;
////	//	printf("%d ",*(vp+1));
////
////
////
////	//}
////
////	return 0;
////}
////指针加减法 求元素个数
//////应用strlen
////int my_strlen(char* vp)
////{
////	char* start = vp;
////	char* end = vp;
////	while (*end != '\0')		//利用指针-指针 = 之间的元素个数 【  】
////	{
////		end++;
////	}
////	return end - start;
////}
////
////
////int main()
////{
////
////	char arr[] = "moya";
////int ret = my_strlen(arr);
////
////
////printf("%d ",ret);
////
////	return 0;
////}
//
////二级指针
////指向 指针 （存放地址的地方） 
////int main()
////{
////
////
////	//int a = 10;
////	//int* pa = &a;
////	//int** ppa = &pa;			//  第二个 *  代表他是指针   第一个* 指向对象为 整型指针but 直接思考地址对应地址对应数值【具体在纸上】
////	//							//应用
////
////	//printf("%p 的 %p 的 %d",ppa,*ppa,**ppa);			//基于（ 直接思考地址对应地址对应数值【具体在纸上】）对应 写出 二级 一级 整型
////
////
////	//指针数组  :放指针的数组
////		//其实指针也是一种类型还是一种大类型  有int  char  float  和整型什么的一样
////	int a = 0, b = 0, c = 0;
////	int* arr[] = { &a,&b,&c };
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	int i = 0;
////	int* p = arr;
////	for (i = 0; i < sz; i++)
////	{
////	//	printf("%d ",*arr[i] );   //数组形式输出
////
////		printf("%d ",**p+i);		//指针输出有点问题
////	}
////
////
////
////	return 0;
////}
////int main()
////{
////
////
////
////	int a = 10;
////	int* pa = &a;
////	int** ppa = &pa;
////
////	printf("%p(2) 的 %p(1) 的 %d",ppa,pa,a);
////
////
////
////
////	return 0;
////}
////结构体  用于描述一个大整体
//// 命名 ： struct name  
//// 填充：各种类型
//// 重命名 typedef   以后不要输入str什么的了麻烦  直接用重命名
//////
//////里面有带有很多类型  例如：结构体  整型 .... 
//////切记结构体也是一种类型 那么他的指针 也就是 struct 名字
////typedef struct intere
////{
////
////	char learn[20];
////	char life[20];
////
////}intere;
////typedef struct stu
////{
////
////	char name[20];			// 填充：各种类型
////	int num;
////	int age;
////	char sex[10];
////	intere interest;		//想要用先写在前面！！！
////
////}stu;  //重命名 typedef   以后不要输入str什么的了麻烦  直接用重命名
//////传参
//////1.传整体
///////void print(stu temp)
//////{
//////	//直接将temp当l来用 当传过来的用因为你在栈里面已经拷贝了一份了
//////	printf("%s %d %d %s %s %s",temp.name,temp.num,temp.age,temp.sex,temp.interest.learn,temp.interest.life);
//////
//////}
//////2.传地址
////void print2(stu* pl)
////{
////
////	printf("%s %d %d %s %s %s",pl->name,pl->num,pl->age,pl->sex,pl->interest.learn,pl->interest.life);
////
////}
////
////int main()
////{
////
////
////	struct stu l = { "刘某",16,18,"男",{"math","pinpang"}};
////
////	//printf("l 的属性 \n名字  %s\n学号： %d\n年龄： %d\n性别 %s\n爱好：%s %s\n ", l.name, l.num,l.age,l.sex,l.interest.learn,l.interest.life);
////	stu w = { "武",0,18,"女",{"math","eat"}};
////	//printf("w 的属性： name ：%s\nnum:%d\nage:%d\nsex:%s\n",w.name,w.num,w.age,w.sex);
////
////	//print(l) ; 穿整体
////	
////	print2(&l);
////
////
////	return 0;
////}
//
//
////int main()
////{
////
////
////	int i = 0;
////	for (i = 0; i < 100; i++)		//将循环当作整体    断一次 运行后就运行完了
////
////	{
////
////		printf("%d ",i);
////
////
////	}
////
////
////
////
////
////
////
////
////
////
////	return 0;
////}
////int main()
////{
////
////
////
////	int i = 0;
////	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
////	int* pa = arr;
////	for (i = 0; i < 15; i++)
////	{
////		*pa = 0;
////		pa++;
////		printf("haha ");
////
////	}
////
////
////
////
////	return 0;
////}