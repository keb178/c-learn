//#include <stdio.h>
/*int main()
{
printf("Hello,world!\n");
return 0;
}

int main()
{
    
    //printf("%d",12+34);
    //printf("12+34=%d",12+34);
    //printf("12-34=%d\n",12-34);
    //printf("12*34=%d\n",12*34);
    //printf("12/34=%d\n",12/34);
    printf("12%%34=%d\n",12%34);
    return 0;
}
    
int main()
{
    printf("Hello world!\n");
    //""双引号里面的内容叫做字符串，printf会把里面的内容原封不动地打印出来。\n是换行符，表示输出时在这里替换成换行
    //这就说明了字符串是一个整体：字符串"Hello world"被printf原样打印输出
    printf("你好\n"); // 注：本行原内容已损坏丢失，此为按上下文补写
    printf("23+43=%d",23+43);

        return 0;
}
        
 int main()
 {
int price=0;
//A-3:定义一个变量price，给出它的初始化值，为0，ps:(定义的变量类型为int)
printf("请输入金额（元）：");
//打印提示字符串
//A-1:scanf("%d,&price");
//读取数据到price里，相当于在给price赋值
//A-1:我刚才犯错了，把&price也写到了双引号里面，就等于告诉计算机不管输入的是什么，都不会记录进price的值，price还是0
scanf("%d",&price);
int change=100-price;
//定义一个变量change，用来存放要找的钱
printf("找你%d元。\n",change);
//计算找零
//A-1:提出一个新的问题：为什么scanf能改变price的值，却不能改变change里的100？
//A-2:现在的程序里我们的常量是100，当我们买的东西价格超过100时，change会得到一个负值。可以加一个比较，比较change的值和0的大小
    return 0;
//A-3:这里定义了变量int price，price是变量的名字，变量是由<类型名称>+<变量名称>组成的
 }






 //第二章
 int main()
 {
    //printf("23+43=%d",23+43);
    int price=0;
    printf("请输入金额（元）:");
    scanf("%d",&price);
    int change=100-price;
    printf("找你%d元\n",change);
    return 0;
 }
 
 
 
 // 8/23
 //int main()   bug-4:忘了把前面的代码都注释掉了
 int main()
 {
printf("23+43=%d\n",23+43);


    return 0;
 }

int main()
{
int price=0;
printf("请输入金额（元）：");
scanf("%d",&price);
int change=100-price;
printf("找你%d元\n",change);
return 0;

}

int main()
{
int i;//   bug-5:这个错误在于变量在使用之前没有被初始化
int j=i;
printf("j=%d",j);
    return 0;
}


int main()
{
const int AMOUNT=100;// AMOUNT:定额，身上就这100块钱（const常量不可再修改）
int price=0;

printf("请输入金额（元）：");
scanf("%d",&price);

int change=AMOUNT-price;

printf("找你%d元。\n",change);
    return 0;
}





//今天状态很不好，我感觉身体和心态都不太对，但既然还是来学习了，就学一点是一点，或者早点睡觉，也是可以的



//8-25
int main()
{
int foot;
int inch;
scanf("%d %d",&foot,&inch);
printf("身高是%f米。\n",(foot+inch/12)*0.3048);





    return 0;
}



//第一部分：跟着课程学习
//1.1  第一个程序
#include <stdio.h>
int main()
{
printf("hello world\n");
printf("hello world"); 
printf("hello world");   
printf("\n\n\n");
printf("hello,");
printf("world");
printf("\n");



return 0;

}
//练习 1-1
#include <stdio.h>
int main()
{
//printf('hello world\n');
printf("hello world\n");
    return 0;
}
#include <stdio.h>
int main()
{
//printf("hello world\c");
printf("hello world\t|\n");
printf("hello world\b\n");
printf("hello world\"\n");
printf("hello world\\");

    return 0;
}



//1.2 变量与算术表达式（温度换算）

#include <stdio.h>
int main()
{
int a=0;//华氏温度
int a_1=(5/9)*(a-32);//     bug-6:整数除法     bug-7:运算顺序
int b=0;//摄氏温度
int b_1=(9/5)*b+32;
printf("请输入华氏温度：\n");
scanf("%d",&a);
printf("转换得到的摄氏温度是:%d\n",a_1);

printf("请输入摄氏温度:\n");
scanf("%d",&b);
printf("转换得到的华氏温度是：%d\n",b_1);//       bug-8:缺少占位符


    return 0;
}



#include <stdio.h>
int main()
{
int fahr,celsius=0;
int lower,upper,step=0;
lower=0;//温度表的下限
upper=300;//温度表的上限
step=20;

fahr=lower;
while(fahr<=upper)
{
celsius=5*(fahr-32)/9;
printf("%d\t%d\n",fahr,celsius);
fahr=fahr+step;
}



    return 0;
}
#include <stdio.h>
int main()
{
int a=0;
int b=0;
while(a<=100)
{
b=a+1;
a=a+1;
printf("%3d\2t%6d\n",b,a);



}



    return 0;
}
#include <stdio.h>
int main()
{
float fahr,celsius;
float lower,upper,step;
lower=0;
upper=300;
step=20;
fahr=lower;
while(fahr<=upper)
{
celsius=(5.0/9.0)*(fahr-32.0);
printf("%3.2f %6.6f\n",fahr,celsius);
fahr=fahr+step;
}
    return 0;

}
//练习1-3
#include <stdio.h>
int main()
{
float fahr,celsius;
float lower,upper,step;

lower=0;
upper=300;
step=20;

fahr=lower;
printf("下面的是华氏温度和摄氏度的转换表（从0华氏温度每隔20到300华氏温度）：\n");
while(fahr<=upper)
{
celsius=(5.0/9.0)*(fahr-32.0);
printf("华氏温度：%3.1f\t\t摄氏度:%6.3f\n",fahr,celsius);//这边是华氏温度变摄氏温度
fahr=fahr+step;



}

    return 0;
}



//练习1-4
#include <stdio.h>
int main ()
{
float fahr,celsius;
float lower,upper,step;
lower=0;
upper=300;
step=10;
celsius=lower;
printf("下面的是摄氏度和华氏温度的转换表（从0摄氏度每隔10摄氏度到300摄氏度）:\n");
while(celsius<=upper)
{
fahr=(9.0/5.0)*celsius+32;
printf("摄氏温度：%3.1f\t\t华氏温度:%6.3f\n",celsius,fahr);//这边是摄氏温度变华氏温度
celsius=celsius+step;




}

    return 0;
}



//1.3 for语句
#include <stdio.h>
//打印华氏温度-摄氏温度对照表
int main()
{
int fahr;

for(fahr=0;fahr<=300;fahr=fahr+20)
{
printf("当前fahr=:%d\n",fahr);
printf("%3d\t\t%6.1f\n",fahr,(5.0/9.0)*(fahr-32));
}


    return 0;
}
//测试
#include <stdio.h>
int main()
{
float fahr;
fahr=0;

for(printf("第一次执行\n");fahr<=300;fahr=fahr+20)
{
printf("当前fahr=:%f\n",fahr);
printf("%3.1f\t\t%6.3f\n",fahr,(5.0/9.0)*(fahr-32));



}

    return 0;
}



//练习1-5
#include <stdio.h>
int main()
{
    float fahr;
 
    //for(fahr=300;fahr<=300;fahr=fahr-20)
    for(fahr=300;fahr>=0;fahr=fahr-0.1)
    {

        //printf("当前的华氏温度：%3.1f\t\t当前的摄氏度:%f6.2\n",fahr,(5.0/9.0)*(fahr-32));
        printf("当前的华氏温度：%3.1f\t\t当前的摄氏度:%6.2f\n",fahr,(5.0/9.0)*(fahr-32));
    }



    return 0;
}



//1.4符号常量
#include <stdio.h>
//#definr LOWER 0   //lower limit of table
#define LOWER 0 //lower limit of table
#define UPPER 300 //upper limit
#define STEP 20 //step size
//print Fahrenheit-Celsius table
int main()
{
int fahr;
for (fahr=LOWER;fahr<=UPPER;fahr=fahr+STEP)
printf("%3d %6.1ff\n",fahr,(5.0/9.0)*(fahr-32));



    return 0;
}*/


//1.5 字符输入/输出
/*#include <stdio.h>
//copy input to output;1st version
int main()
{
int c;
c=getchar();
while (c!=EOF)
{
putchar(c);
c=getchar();

}


    return 0;
}

#include <stdio.h>
int main()
{
int c;
while ((c=getchar())!=EOF)
putchar(c);


    return 0;
}



//练习1-6
#include <stdio.h>
int main()
{
int c;
c=getchar()!=EOF;
printf("%d\n",c);


    return 0;
}



//练习1-7
#include <stdio.h>
int main()
{
int c=0;
c=EOF;
printf("%d\n",c);



    return 0;
}
//测试：
#include <stdio.h>
int main()
{
int c=0;
while((c=getchar())!='0')
{

printf("现在的输入是：%d\n",c);

}

    return 0;
}
#include <stdio.h>
int main()
{
    int ch;           // 专门用来存储输入的字符（ASCII码）
    int is_not_zero;  // 专门用来存储 != 比较的结果（0或1）

    printf("请输入字符（输入字符 0 退出）：\n");

    while (1) {  // 这是一个"无限循环"，我们用 break 来跳出
        ch = getchar();          // 1. 先读取字符

        // 处理一下换行符，避免打印多余的提示（这是为了显示效果更干净）
        if (ch == '\n')
            continue;

        // 2. 再进行判断，把比较结果存到 is_not_zero 里
        is_not_zero = (ch != '0');   // 注意：这里的括号是必须的！

        // 3. 两个都打印出来！
        printf("你输入的字符是：'%c' (ASCII码: %d) \t", ch, ch);
        printf("判断结果 (ch != '0') 是：%d\n", is_not_zero);

        // 4. 如果判断结果是 0（即 ch == '0'），就跳出循环
        if (is_not_zero == 0) {
            printf("检测到字符 '0'，程序结束。\n");
            break;
        }
    }
   
   
   int a;
   printf("%d",a);
   printf("%c",a);
   
    return 0;
}



//1.5.2字符计数
#include <stdio.h>
int main()
{
long nc;
nc=0;
while (getchar() !=EOF)
    ++nc;
    printf("%ld\n",nc);

    return 0;
}*/
/*#include <stdio.h>
int main()
{
double nc;
for (nc=0;getchar()!=EOF;++nc)
;
printf("%.0f\n",nc);

    return 0;
}
#include <stdio.h>
int main()
{
long nc;
nc=0;
while(getchar() !=EOF)
++nc;
printf("%ld\n",nc);


    return 0;
}*/
/*#include <stdio.h>
int main()
{
int c;
long nc=0;

c=getchar();
while(c!=EOF)
{

    putchar(c);
    c=getchar();
    ++nc;
    printf("\n%ld\n",nc);
}


    return 0;
}*/
/*#include <stdio.h>
int main()
{
int c=0;
long nc=0;
printf("请输入内容：");
while((c=getchar())!=EOF)
{
    printf("你输入的内容为:");
    putchar(c);
    ++nc;
    printf("\n输入的内容的字数为：%ld\n",nc);


}


    return 0;
}*/

/*#include <stdio.h>
int main()
{
int c=0;
long nc=0;
printf("请输入内容（按Ctrl+z结束):\n");
while ((c=getchar()) !=EOF)
{
if(c=='\n')
{
printf("\\n");
}
else{
putchar(c);
}
    putchar(c);
    printf("第%ld个字符\n",++nc);

}
printf("\n总共输入了%ld个字符。\n",nc);
    return 0;
}*/



/*#include <stdio.h>
int main()
{
int c=0;
long nc=0;
printf("请输入内容(按Ctrl+z结束):\n");

while((c=getchar())!=EOF)
{
    putchar(c);
    ++nc;
}
printf("\n总共输入了%ld个字符。\n",nc);


    return 0;
}*/



//1.5.3 行计数
/*#include <stdio.h>
int main(){
    int c,nl;
    nl=0;
    while((c=getchar())!=EOF)
    if (c=='\n')
    ++nl;
    printf("%d\n",nl);
    return 0;
}*/



//练习1-8：
/*#include <stdio.h>
int main(){
    int a=0;
    int b=0;
    int c=0;
    long na=0;
    long nb=0;
    long nc=0;
    long nd=0;
    printf("请输入内容(按ctrl+z结束):\n");
    while((a=getchar())!=EOF){
        if(a==' '){
            printf("[空格]");
            ++nb;
        }
        if(a=='\t'){
            printf("\\t");
            ++nc;
        }
        if(a=='\n'){
            printf("\\n");
            ++nd;
        }
        else{
            putchar(a);
            
        }
        ++na;
        b=na-(nb+nc+nd);

    }
    printf("\n总共输入了%ld个字符,其中纯文本为%ld个字符,空格为%ld个字符,制表符为%ld个字符,换行符为%ld个字符。\n",na,b,nb,nc,nd);
    return 0;
}
*/


//练习1-9
#include <stdio.h>
int main(){
    int a=0;
    int b=0;
    int c=0;
    printf("请输入内容：\n");
    while((a=getchar())!=EOF){
        
    }
    return 0;
}