#include <iostream>
using namespace std;

int main()
{
	FILE *fptr;
	fptr = fopen("text.txt", "w");
	if (fptr == NULL)
	{
		printf("The file is not exist");
	}
	else
	{
		int n, i;
		scanf("%d", &n);
		i = 1;
		while (i <= n)
		{
			// fprintf(fptr,"%d\n", i);
			cout << i << endl;
			i++;
		}
		fclose(fptr);
	}
	return 0;
}
/*
int main()
{
	FILE *fptr;
	fptr = fopen("text.txt", "w");
	int i;
	char ch[10000]={"Mahendra Singh Thakur"};
	for (i = 0; i < 21 ; i++)
	{
		ch[i] = fgetc(fptr);
		printf("%c",ch[i]);
	}
	printf("\n");
	for (i = 0; i < 21; i++)
	{
		printf("%c", ch[i]);
	}
	for (int i = 0; i < 21; i++)
	{
		fputc(ch[i], fptr);
	}

		fclose(fptr);

}


int main()
{

	FILE *fptr;
	fptr = fopen("text.txt","w");

	int i,j,n,sp,sp2;
	printf("enter number : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			fprintf(fptr,"* ");
		}
		fprintf(fptr,"\n");
	}

	fclose(fptr);
	return 0;
}

int main()
{
	int i,j,n,sp,sp2;
	printf("enter number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(sp=1;sp<=n;sp++)
		{
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}



/*
#include<stdio.h>
#include<string.h>

int main ()
{
	char age[50];
	printf("enter your age : ");
	scanf("%s", &age);
	printf("Your age is : %d",age);
	return 0;
}
/*
struct student
	{
		int rollno;
		char name[100];
		float cgpa;
	};

int main()
	{
	student s1={756,"Mahendra",9.5};
//	student s1;
//	student *ptr;
//	*ptr = s1;
//	scanf("%d",&ptr->rollno);
//	printf("Roll number of s1 student = %d",ptr->rollno);
	printf("  %d , %s , %0.2f",s1.rollno,s1.name,s1.cgpa);
	return 0;
}

/*
typedef struct student{
	int rollno;
	char name[100];
	float cgpa;
}stu;

int main()
	{
//	stu s1={756,"mahendra",9.2};
	stu s1;
	stu *ptr;
	*ptr = s1;
	scanf("%d",&ptr->rollno);
	printf("Roll number of s1 student = %d",ptr->rollno);
	return 0;
}
/*


int main()
{
	int i,n,a=0,b=1,c=1;
	printf("enter Nth term of fibonacci sequence : ");
	scanf("%d",&n);

	for (i=1;i<n;i++)
	{
		b=c;
		c=a+b;
		a=b;
	}
	if(n==0)
	{
		printf("%d",0);
	}
	else
	{
		printf("%d",c);
	}

	return 0;
}


int fib(int n);
int main()
{
	int n;
	printf("enter Nth term of fibonacci sequence : ");
	scanf("%d",&n);
	printf("%d",fib(n));
	return 0;
}
int fib(int n)
{
	if(n==0||n==1)
	{
		return n;
	}
	int fib_n_m_1 = fib(n-1);
	int fib_n_m_2 = fib(n-2);
	int fib = fib_n_m_1 + fib_n_m_2;
	return fib;
}

int rows(int ,int);
int colums(int);
int first_sec(int) ;
int row,col;
int main()
{
	printf("enter number of rows : ");
	scanf("%d",&row);
	printf("enter number of colums : ");
	scanf("%d",&col);
	rows(row,col);
	return 0;
}
int rows(int r,int c)
{
	if(r==0)
	{
		return;
	}
	rows(r-1,c);
	if(r==1||r==row)
	{
		first_sec(c);
	}
	else
	{
		colums(c);
	}
	printf("\n");


}

int colums(int c)
{
	if(c==0)
	{
		return;
	}

	colums(c-1);
	if(c<=col-1&&c>=2)
	{
		printf("  ");
	}
	else
	{
		printf("* ");
	}
}
int first_sec(int fs)
{
	if(fs==0)
	{
		return;
	}

	first_sec(fs-1);

	printf("* ");

}


int fun1(int ,int);
int fun2(int);
int row;
int main()
{
	int c;
	printf("enter number of rows : ");
	scanf("%d",&row);
	printf("enter number of colums : ");
	scanf("%d",&c);
	fun1(row,c);
	return 0;
}
int fun1(int r,int c)
{
	if(r==0)
	{
		return;
	}
	fun1(r-1,c);
	fun2(c);

	printf("\n");


}

int fun2(int c)
{
	if (c==0)
	{
		return ;
	}
	fun2(c-1);

	printf("* ");
}

/*

	*
	  * *
	* * *
  * * * *
* * * * *


int fun1(int);
int fun2(int);
int fun3(int);
int main()
{
	int r,c;
	printf("enter number of rows : ");
	scanf("%d",&r);
   //	printf("enter number of colums : ");
	 //	scanf("%d",&c);
	fun1(r);
	return 0;
}
int fun1(int r)
{
	static int c=1;
	if(r==0)
	{
		return;
	}

	fun2(r-1);
	fun3(c);
	c++;
	printf("\n");
	fun1(r-1);


}
int fun2(int sp)
{
	if (sp==0)
	{
		return ;
	}
	fun2(sp-1);
	printf("  ");

}
int fun3(int st)
{
	if (st==0)
	{
		return ;
	}
	fun3(st-1);
	printf("* ");
}



/*



* * * * *
  * * * *
	* * *
	  * *
	*


int fun1(int);
int fun2(int);
int fun3(int);
int main()
{
	int r,c;
	printf("enter number of rows : ");
	scanf("%d",&r);
   //	printf("enter number of colums : ");
	 //	scanf("%d",&c);
	fun1(r);
	return 0;
}
int fun1(int r)
{
	static int c=r;
	if(r==0)
	{
		return;
	}
	fun1(r-1);
	fun2(r-1);
	fun3(c);
	c--;
	printf("\n");



}
int fun2(int sp)
{
	if (sp==0)
	{
		return ;
	}
	fun2(sp-1);
	printf("  ");

}
int fun3(int st)
{
	if (st==0)
	{
		return ;
	}
	fun3(st-1);
	printf("* ");
}

/*
int fun1(int,int);
int fun2(int);
int main()
{
	int r,c;
	printf("enter number of rows : ");
	scanf("%d",&r);
	printf("enter number of colums : ");
	scanf("%d",&c);
	fun1(r,c);
	return 0;
}
int fun1(int r,int c)
{
	if(r==0)
	{
		return;
	}
	fun2(c);
	printf("\n");
	fun1(r-1,c);

}

int fun2(int c)
{
	if (c==0)
	{
		return ;
	}
	fun2(c-1);
	printf("* ");
}


/*
int fun(int);
int main()
{
	fun(3);
	return 0;
}
int fun(int n)
{
	static int d=1;
	printf("%d\n",n);
	printf("%d\n",d);
	d++;
	if(n>1)
	fun(n-1);
	printf("%d\n",d);
}
int sum_fun(int*,int);
int main()
{

	int n;
	int a[]={1,2,3,3,5,6};
	n=6;
	printf("\nans = %d",sum_fun(a,n));
	return 0;
}

int sum_fun(int* a,int n)
{
	static int e;
	if(n== 1)
	{
		return 1;
	}
	else
	{
		e = sum_fun(a+1,n-1);
		printf("\na=%d a=%d  n=%d",a[0],a[1],n);
		printf("\n%d",((a[0]<a[1])&&e));
		return ((a[0]<a[1])&&e);

	}
}

int sum_fun(char*,int);
int main()
{

	int n;
	char a[100];
	scanf("%s",a);
	n = strlen(a);
	sum_fun(a,n);
	return 0;
}

int sum_fun(char* a,int n)
{

	if(n== 0)
	{
		return;
	}
	else
	{
		sum_fun(a+1,n-1);
		printf("%c",a[0]);
		// 	printf("%.1s",a);
	}
}

int main ()
{
	char a[]={'m','a','h','e','n','d','r','a'};
	char *p;
	p=a;
	printf("%c\n",p[0]);
	p=p+2;
	printf("%c\n",p[0]);
	return 0;
}

int main ()
{
	char a[100];
	scanf("%s",a);
	printf("%c",a[5]);
	return 0;
}

int sum_fun(char*,int);
int main()
{

	int n;
	char a[100];
	scanf("%s",a);
	n = strlen(a);
	sum_fun(a,n-1);
	return 0;
}

int sum_fun(char* a,int n)
{

	if(a[n]== 0)
	{
		return;
	}
	else
	{
		printf("%c",a[n]);
		sum_fun(a,n-1);

	}
}
/*
int sum_fun(int);
int main()
{

	int x,n;
	scanf("%d",&n);
	printf("%d",sum_fun(n));
	return 0;
}

int sum_fun(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		int sum_nmi_1=sum_fun(n-1);
		int ans=n+sum_nmi_1;
		return ans;
	}

}
/*
int power_fun(int,int);
int main()
{
	int x,n;
	scanf("%d%d",&x,&n);
	printf("%d",power_fun(x,n));
	return 0;
}
int power_fun(int x,int n)
{
	if(n==0)
	{
		return 1;
	}
	else if(x==0)
	{
		return 0;
	}
	else
	{
		int power_n_mi_1=power_fun(x,n-1);
		int ans=x*power_n_mi_1;
		return ans;
	}

}
/*
int print(int,int,int);
int main()
{
	int a=0,b=1,n;
	scanf("%d",&n);
	printf("%d , ",a);
	printf("%d , ",b);
	print(a,b,n-2);
	return 0;
}
int print(int a,int b,int n)
{
	if(n==0)
	{
		return;
	}
	else
	{
		int c=a+b;
		printf("%d , ",c);
		print(b,c,n-1);
		return;
	}

}
int print(int);
int main()
{
	int n;
	scanf("%d",&n);
	print(n);
	return 0;
}
int print(int n)
{
	static int a=0,b=1,c;
	if(n==0)
	{
		return;
	}
	else
	{
		printf("%d , ",a);
		c=b;
		b=a+b;
		a=c;
		print(n-1);

		return;
	}

}

		   /*

		printf("%d , ",a);
		c=b;
		b=a+b;
		a=c;

/*
int main ()
{
	int a=0,b=1,n,i,c;
	printf("enter terms number : ");
	scanf("%d",&n);

	for (i=0;i<n;i++)
	{
		printf("%d , ",a);
		c=b;
		b=a+b;
		a=c;

	}

	return 0;

}

/*
int num(int ,int);
int main()
{
	int n , count=1;
	scanf("%d",&n);
	printf("%d",num(n,count));
	return 0;
}

int num(int n,int c)
{
	if (n==0||n==1)
	{

		return 1;
	}
	else
	{
		c=num(n-1,c);
		c=c*n;
		return c;

	}
}
int num(int ,int);
int main()
{
	int n , count=1;
	scanf("%d",&n);
	printf("%d",num(n,count));
	return 0;
}

int num(int n,int c)
{       static int a;
	if (n==0||n==1)
	{

		return a=c;
	}
	else
	{
		c=c*n;
		printf ("n = %d\n",n);
		printf ("c = %d\n",c);

		num(n-1,c);
		printf ("n2 = %d\n",n);
		printf ("c2 = %d\n",c);
		return a;

	}
}
char* sr(char[6]);
int main()
{
	char s[6]={"binod"};
	printf("%s",sr(s));
	return 0;
}

char* sr(char s[6])
{

	if(0==s)
	{
		return s;
	}
	else
	{


		sr(s);
		printf("%.1s\n",s);
	}

}

  */