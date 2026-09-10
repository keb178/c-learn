/*
#include <stdio.h>
int main()
{
    printf("Hello world!");

    return 0;

}

#include <stdio.h>
int main(void)
{
	float weight;//你的体重
	float value;//相同重量的白金价值
	
	printf("Are you worth your weight in platinum?\n");//你的体重值多少白金
	printf("Let's check it out.\n");//让我们算一算
	printf("Please enter your weight in pounds:");//请输入你的体重（磅）
	
	scanf("%f",&weight);
	value=1700.0*weight*14.5833;
	printf("Your weight in platinum is worth $%.2f.\n",value);//你体重的白金价格为：
	printf("You are easily worth that!If platinum prices drop,\n");//你当然值这个价，如果白金价格下跌。
	printf("eat more to maintain your value.\n");//多吃点来保持你的价值。
	
	return 0;


}


#include <stdio.h>
int main()
{
    float weight;
    float value;
    printf("你的体重值多少白金？\n");
    printf("让我们来算一算.\n");
    printf("请输入你的体重(磅）：");

    scanf("%f",&weight);
    value=1700.0*weight*14.5833;
    printf("和你体重相等的白金的价格为:%.2f$.\n",value);
    printf("你当然值这个价格，除非白金的价格下跌.\n");
    printf("记得多吃一点来保持你的价值.\n");
    


    return 0;
}



#include <stdio.h>
int main()
{
    int a=7.1;
    printf("%d",a);


    return 0;
}


#include <stdio.h>
int main()
{
    int a=0;
    scanf("%d",&a);
    printf("%d",a);


    return 0;
}




#include <stdio.h>
int main()
{
    int a=0;
    int b=1;
    long c=2;
    printf("%d\n%ld\n",a,c,b);


    return 0;
}


#include <stdio.h>
int main()
{
    int ten=10;
    int two=2;
    printf("Doing it right:");
    printf("%d minus %d is %d\n",ten,2,ten-two);
    printf("Doing it wrong:");
    printf("%d minus %d is %d\n",ten);//遗漏两个参数

    return 0;
}



//以十进制，八进制，十六进制打印十进制整数100
#include <stdio.h>
int main()
{
    int x=100;
    printf("dec=%d;octal=%o;hex=%x\n",x,x,x);
    printf("dec=%d;octal=%#o;hex=%#x\n",x,x,x);


    return 0;
}


#include <stdio.h>
int main()
{
    int x=10;
    printf("八进制：%o;十六进制(小写版本):%x;十六进制(大写版本):%X;十进制：%d\n",x,x,x,x);
    printf("对应的带前缀格式：%#o;%#x;%#X;%d\n",x,x,x,x);


    return 0;
}



#include <stdio.h>
int main()
{
    int i=2147483647;
    unsigned int j=4294967295;

    printf("%d %d %d %d\n",i,i+1,i+2,i+i);
    printf("%u %u %u\n",j,j+1,j+2);


    return 0;
}*/


#include <stdio.h>
int main()
{
    unsigned int un=3000000000;
    short end=200;
    long big=65537;
    long long verybig=12345678908642;

    printf("un=%u and not %d \n",un,un);
    printf("end=%hd and %d\n",end,end);
    printf("big =%ld and not %hd\n",big,big);
    printf("verybig=%lld and not %ld\n",verybig,verybig);



    return 0;
}
