#include <stdio.h>
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
    //""双引号里面的内容叫做字符串，printf会负责将里面的内容给原封不动的给打印出来；\n是换行符，表示要在前面的输出结果的后面换行
    //所以说上面的这一串代码的意思就是字符串"Hello world"被printf给打印了出来
    printf("你好\n");
    printf("23+43=%d",23+43);

        return 0;
}
        
 int main()
 {
int price=0;
//A-3:定义一个变量名price将它的初始值设置为0，ps:(这个变量的类型为int)
printf("请输入金额（元）：");
//打印出字符串
//A-1:scanf("%d,&price");
//输入内容到price上，相当于给price赋值
//A-1:找到问题了：在这里我将&price也给写进双引号里面的，这就导致无论我输入的是多少，在电脑里它记录的price的值都是0
scanf("%d",&price);
int change=100-price;
//新定义一个变量叫做change用来存放我们因该找的钱
printf("找您%d(元).\n",change);
//找零的钱
//A-1:出现一个新的问题就是为什么当我们输入的price的值无论为什么，change都是100了？
//A-2:现在的问题是当我输入的是大于100的数时，change会给我返回一个负值，所以我想能不能有一个比较系统来分辨我们输入的值和100的大小，或者说比较最后的change的值和0的大小
    return 0;
//A-3:这里定义的是变量int price而不是单独的变量名price，变量是由<变量类型>+<变量名称>组成的
 }






 //第二周
 int main()
 {
    //printf("23+43=%d",23+43);
    int price=0;
    printf("请输入金额（元）:");
    scanf("%d",&price);
    int change=100-price;
    printf("找您%d元\n",change);
    return 0;
 }
 
 
 
 // 8/23
 //int main()   bug-4:忘了将前面的代码给注释了
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
printf("找您%d元\n",change);
return 0;

}

int main()
{
int i;//   bug-5:这里的问题就是变量在被使用之前没有做初始化
int j=i;
printf("j=%d",j);
    return 0;
}


int main()
{
const int AMOUNT=100;// AMOUNT:数量，总额或者金额
int price=0;

printf("请输入金额（元）：");
scanf("%d",&price);

int change=AMOUNT-price;

printf("找您%d元。\n",change);
    return 0;
}


*/


//结束了，今天的状态很不好，我觉得是早上虽然起来了但是并没有去正常的去学习而是去睡觉的缘故



