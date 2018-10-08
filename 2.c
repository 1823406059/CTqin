#include<stdio.h>

#include<time.h>

typedef struct
{
int numerator; /* 分子 */
int denominator; /* 分母 */
} Fraction;

int GCD(int a,int b);///* 返回两个整数的最大公约数 */
int LCM(int a,int b);///* 返回两个整数的最小公倍数 */
void title();
void intfouroperation();
Fraction Add(Fraction f1, Fraction f2);
Fraction sub(Fraction f1, Fraction f2);//分数相-


 
void main()
{
    int i,m,n,menu;
	int k;
    float p, q;
	Fraction f1, f2, f3;
	for(;;){
		 title();
  printf("\n请输入选择功能");
  fflush(stdin);
  scanf("%d",&menu);
  if(menu==1)
  {
	  intfouroperation();
	  
  }
 if(menu==2)
 {
	     printf("\n你要随机产生多少分数相加减？");
		 scanf("%d",&n);
       for(i=0;i<n;i++)
	   {
		   f1.numerator = rand() % 99+1;//产生随机数分子;
           f1.denominator = rand() % 99+1;//分母
           f2.numerator = rand() % 99+1;
           f2.denominator = rand() % 99+1;
           k=rand()%2+1;//产生随机数随机产生加减法题目
		   if(k==1)
		   {
		   f3 = Add(f1, f2);//加法
		   printf("%d/%d + %d/%d = %d/%d\n", f1.numerator, f1.denominator, f2.numerator, f2.denominator, f3.numerator, f3.denominator);
		   }
            else
			{
				f3=sub(f1,f2);
				printf("%d/%d - %d/%d = %d/%d\n", f1.numerator, f1.denominator, f2.numerator, f2.denominator, f3.numerator, f3.denominator);
			}
           

	   }
         

 }
 if(menu==0)
 {
	 break;
 }
 else
 {
	 printf("指令有误！！！");
	 system("pause");
	 fflush(stdin);
 }
   
	}
 
}
























void title()//题目menu
{
	system("CLS");
	printf("\t\tWellcom to 肥钦四则运算\n");
	printf("\t1.整数四则运算\n");
	printf("\t2.真分数相关的练习题\n");
	printf("\t0-return");
}
void intfouroperation()
{

     int i;
	 int temp,intanswer;
	  float fanswer,ftemp,useranswser2;

	 int a, b, c, d,d2,m,n;
	 int answer,useranswser;
	 int percentageAnswer=0;
	 srand( (unsigned)time( NULL ));
     printf("需要的多少道四则运算题目(>0)：");
	 scanf("%d",&n);
	 for(i=0;i<n;i++)
	 {
        a = rand() % 99+1;//产生随机数a
        b = rand() % 99+1;//随机数b
		c = rand() % 99+1;//随机数c
        d = rand() % 4+1;//随机产生第一个对应符号位+-/*
		d2 = rand() % 4+1;//随机产生第二个对应符号位+-/*
      switch(d)
	  {
	  case 1://+
	            switch(d2)
				{
	                   case 1://+
						   printf("请计算\n");
		                   printf("%d + %d + %d= ",a,b,c);
						   scanf("%d",&useranswser);
						   answer=a+b+c;
						   if(useranswser==answer)
						   {
							  
							   percentageAnswer++;
							   printf("答对%d题目\n",percentageAnswer);
						   }
						   else
						   {
							   printf("答案错误\n");
							   printf("答案是：%d\n",answer);
						   }
		                break;
	                   case 2://-
		                  printf("请计算\n");
						  if((a+b)<c)//不能负数处理
						  {
							  temp=a;
							  a=c;
							  c=a;
							  printf("%d + %d - %d=",a,b,c);
                              scanf("%d",&useranswser);
						   answer=a+b-c;
						   if(useranswser==answer)
						   {
							  
							   percentageAnswer++;
							   printf("答对%d题目\n",percentageAnswer);
						   }
						   else
						   {
							    printf("答案是：%d\n",answer);
							   printf("答案错误\n");
						   }  
						  }
						  else
						  {
                              printf("%d + %d - %d=",a,b,c);
							     scanf("%d",&useranswser);
						   answer=a+b-c;
						   if(useranswser==answer)
						   {
							  
							   percentageAnswer++;
							   printf("答对%d题目\n",percentageAnswer);
						   }
						   else
						   {
							    printf("答案是：%d\n",answer);
							   printf("答案错误\n");
						   }
						  }
		                break;
	                   case 3://*
		                  
						   printf("请计算\n");
		                   printf("%d + %d  *  %d= ",a,b,c);
						      scanf("%d",&useranswser);
						   answer=a+b*c;
						   if(useranswser==answer)
						   {
							  
							   percentageAnswer++;
							   printf("答对%d题目\n",percentageAnswer);
						   }
						   else
						   {
							    printf("答案是：%d\n",answer);
							    printf("答案错误\n");
						   }
						
		                break;
	                   case 4://除/
                             printf("请计算(精算小数点后两位)\n");
		                     printf("%d + %d  / %d= ",a,b,c);
							    scanf("%f",&useranswser2);
						
						answer=(int)(useranswser2*100 ) ;
						//	printf("%f\n",ftemp);
						   fanswer=(float)a+(float)b/c;//强转结果数据类型
						   intanswer=	 (int)( (fanswer+0.005)*100 ) ;
                          //  printf("%d",intanswer);//答案扩大100
						   if(-0.02<answer - intanswer  && answer - intanswer <0.02)
						   {
							    percentageAnswer++;
							   printf("答对%d题目\n",percentageAnswer);
							   
							  
							
						   }
						   else
						   {     
							      printf("答案是：%0.2f\n",fanswer);
							     printf("答案错误\n");
							   
						   }
		                break;
				}
		  break;
	  case 2://-
		       switch(d2)
				{
	                   case 1://+

						   printf("请计算\n");
						   if((a-b)<0)//负数处理
						   {
							   temp=a;
							   a=b;
							   b=temp;
							   printf("%d - %d + %d= ",a,b,c);

						   }
		                  
						else
						{
                               printf("%d - %d + %d= ",a,b,c);
						}
						scanf("%d",&useranswser);
						       answer=a-b+c;
						   if(useranswser==answer)
						   {
							  
							   percentageAnswer++;
							   printf("答对%d题目\n",percentageAnswer);
						   }
						   else
						   {
							     printf("答案是：%d\n",answer);
							   printf("答案错误\n");
						   }
		                break;
	                   case 2://-
		                  printf("请计算\n");
						  if((a-b)<0)//不能负数处理
						  {
							  temp=a;
							  a=b;
							  b=temp;
							  if((a-b)-c<0)
							  {
							      printf("%d - %d + %d=",a,b,c);
								  scanf("%d",&useranswser);
						       answer=a-b+c;
						   if(useranswser==answer)
						   {
							  
							   percentageAnswer++;
							   printf("答对%d题目\n",percentageAnswer);
						   }
						   else
						   {
							     printf("答案是：%d\n",answer);
							   printf("答案错误\n");
						   }
							  }
							  else
							  {
								  printf("%d - %d - %d=",a,b,c);
								  scanf("%d",&useranswser);
						       answer=a-b-c;
						   if(useranswser==answer)
						   {
							  
							   percentageAnswer++;
							   printf("答对%d题目\n",percentageAnswer);
						   }
						   else
						   {
                               printf("答案是：%d\n",answer);
							   printf("答案错误\n");
						   }
							  }
						  }
		                break;
	                   case 3://*
		                  
						   printf("请计算\n");
						   if(a-(b*c)>0)
						   {
							   printf("%d - %d  *  %d= ",a,b,c);
							   scanf("%d",&useranswser);
						       answer=a-b*c;
						   if(useranswser==answer)
						   {
							  
							   percentageAnswer++;
							   printf("答对%d题目\n",percentageAnswer);
						   }
						   else
						   {
							   printf("答案是：%d\n",answer);
							   printf("答案错误\n");
						   }
						   
						   }
						    else
							{
								printf("%d * %d -%d=",b,c,a);//负数处理
								scanf("%d",&useranswser);
						       answer=b*c-a;
						   if(useranswser==answer)
						   {
							  
							   percentageAnswer++;
							   printf("答对%d题目\n",percentageAnswer);
						   }
						   else
						   {
							    printf("答案是：%d\n",answer);
							   printf("答案错误\n");
						   }
							}
		                break;
	                   case 4://除/
                             printf("请计算(精算小数点后两位)\n");
							 if(a-(b/c)>0)
							 {
		                   printf("%d - %d  /  %d= ",a,b,c);
						   scanf("%f",&useranswser2);
						
						  answer=(int)(useranswser2*100 ) ;
						//	printf("%f\n",ftemp);
						   fanswer=(float)a-(float)b/c;//强转结果数据类型
						   intanswer=	 (int)( (fanswer+0.005)*100 ) ;
                          //  printf("%d",intanswer);//答案扩大100
						   if(-0.02<answer - intanswer  && answer - intanswer <0.02)
						   {
							    percentageAnswer++;
							   printf("答对%d题目\n",percentageAnswer);
							   
						   }
						   else
						   {
							   printf("答案是：%0.2f\n",fanswer);
							   
							   printf("答案错误\n");
							  
						   }
							 } 
						   else
							{
								printf("%d / %d  - %d=",b,c,a);//负数处理
								scanf("%f",&useranswser2);
						
						  answer=(int)(useranswser2*100 ) ;
						//	printf("%f\n",ftemp);
						   fanswer=(float)b/c-(float)a;//强转结果数据类型
						   intanswer=	 (int)( (fanswer+0.005)*100 ) ;
                          //  printf("%d",intanswer);//答案扩大100
						   if(-0.02<answer - intanswer  && answer - intanswer <0.02)
						   {
							    percentageAnswer++;
							   printf("答对%d题目\n",percentageAnswer);
							   
						   }
						   else
						   {
							   
							   printf("答案是：%0.2f\n",fanswer);
							   printf("答案错误\n");
							  
						   }
							
							}
		                break;
				}
		  break;
	  case 3://*
		                 switch(d2)
				{
	                   case 1://+

						       printf("请计算\n");
							   printf("%d * %d + %d= ",a,b,c);
							   	scanf("%d",&useranswser);
						       answer=a*b+c;
						   if(useranswser==answer)
						   {
							  
							   percentageAnswer++;
							   printf("答对%d题目\n",percentageAnswer);
						   }
						   else
						   {
							   printf("答案是：%d\n",answer);
							   printf("答案错误\n");
						   }
	
		                break;
	                   case 2://-
		                  printf("请计算\n");
				          if(a*b>c)
						  {
                            printf("%d * %d - %d=",a,b,c);
							 	scanf("%d",&useranswser);
						       answer=a*b-c;
						   if(useranswser==answer)
						   {
							  
							   percentageAnswer++;
							   printf("答对%d题目\n",percentageAnswer);
						   }
						   else
						   {
							   printf("答案是：%d\n",answer);
							   printf("答案错误\n");
						   }
						  }
						  else
						  {
                            printf("%d - %d * %d=",c,a,b);
							 	scanf("%d",&useranswser);
						       answer=c-a*b;
						   if(useranswser==answer)
						   {
							  
							   percentageAnswer++;
							   printf("答对%d题目\n",percentageAnswer);
						   }
						   else
						   {
							    printf("答案是：%d\n",answer);
							   printf("答案错误\n");
						   }
						  }
		                break;
	                   case 3://*
		                  
						        printf("请计算\n");
								printf("%d * %d * %d=",a,b,c);
								 	scanf("%d",&useranswser);
						       answer=a*b*c;
						   if(useranswser==answer)
						   {
							  
							   percentageAnswer++;
							   printf("答对%d题目\n",percentageAnswer);
						   }
						   else
						   {
							   printf("答案是：%d\n",answer);
							   printf("答案错误\n");
						   }
		                break;
	                   case 4://除/
                             printf("请计算(精算小数点后两位)\n");
		                          
								printf("%d * %d /  %d=",b,c,a);
								 scanf("%f",&useranswser2);
						
						  answer=(int)(useranswser2*100 ) ;
						//	printf("%f\n",ftemp);
						   fanswer=(float)a*(float)b/c;//强转结果数据类型
						   intanswer=(int)( (fanswer+0.005)*100 ) ;
                          //  printf("%d",intanswer);//答案扩大100
						   if(-0.02<answer - intanswer <0.02)
						   {
							    percentageAnswer++;
							   printf("答对%d题目\n",percentageAnswer);
							   
						   }
						   else
						   {
							    printf("答案是：%0.2f\n",fanswer);
							   
							   printf("答案错误\n");
							   
						   }
		                break;
				}
		  break;
	  case 4://除/
                       switch(d2)
				{
	                   case 1://+

						       printf("请计算(精算小数点后两位)\n");
							   printf("%d / %d + %d= ",a,b,c);
                               scanf("%f",&useranswser2);
						
						  answer=(int)(useranswser2*100 ) ;
						//	printf("%f\n",ftemp);
						   fanswer=(float)a/b+(float)c;//强转结果数据类型
						   intanswer=(int)( (fanswer+0.005)*100 ) ;
                          //  printf("%d",intanswer);//答案扩大100
						   if(-0.02<answer - intanswer  && answer - intanswer <0.02)
						   {
							    percentageAnswer++;
							   printf("答对%d题目\n",percentageAnswer);
							   
						   }
						   else
						   {
							   printf("答案是：%0.2f\n",fanswer);
							   printf("答案错误\n");
							   
						   }
	
		                break;
	                   case 2://-
		                 printf("请计算(精算小数点后两位)\n");
				          if(a/b>c)
						  {
                            printf("%d / %d - %d=",a,b,c);
							scanf("%f",&useranswser2);
						
						  answer=(int)(useranswser2*100 ) ;
						//	printf("%f\n",ftemp);
						   fanswer=(float)a/b-(float)c;//强转结果数据类型
						   intanswer=(int)( (fanswer+0.005)*100 ) ;
                          //  printf("%d",intanswer);//答案扩大100
						   if(-0.02<answer - intanswer  && answer - intanswer <0.02)
						   {
							    percentageAnswer++;
							   printf("答对%d题目\n",percentageAnswer);
							   
						   }
						   else
						   {
							    printf("答案是：%0.2f\n",fanswer);
							   printf("答案错误\n");
							  
						   }
						  }
						  else
						  {
                            printf("%d - %d / %d=",c,a,b);
							scanf("%f",&useranswser2);
						
						  answer=(int)(useranswser2*100 ) ;
						//	printf("%f\n",ftemp);
						   fanswer=(float)c-(float)a/b;//强转结果数据类型
						   intanswer=(int)( (fanswer+0.005)*100 ) ;
                          //  printf("%d",intanswer);//答案扩大100
						   if(-0.02<answer - intanswer  && answer - intanswer <0.02)
						   {
							    percentageAnswer++;
							   printf("答对%d题目\n",percentageAnswer);
							   
						   }
						   else
						   {
							    printf("答案是：%0.2f\n",fanswer);
							   printf("答案错误\n");
							   
						   }
						  }
		                break;
	                   case 3://*
		                  
						       printf("请计算(精算小数点后两位)\n");
								printf("%d / %d * %d=",a,b,c);
								scanf("%f",&useranswser2);
						
						  answer=(int)(useranswser2*100 ) ;
						//	printf("%f\n",ftemp);
						   fanswer=(float)a/b*c;//强转结果数据类型
						   intanswer=(int)( (fanswer+0.005)*100 ) ;
                          //  printf("%d",intanswer);//答案扩大100
						   if(-0.02<answer - intanswer  && answer - intanswer <0.02)
						   {
							    percentageAnswer++;
							   printf("答对%d题目\n",percentageAnswer);
							   
						   }
						   else
						   {
							    printf("答案是：%0.2f\n",fanswer);
							  
							   printf("答案错误\n");
							  
						   }
		                break;
	                   case 4://除/
                             printf("请计算(精算小数点后两位)\n");
		
								printf("%d / %d /  %d=",a,b,c);
								scanf("%f",&useranswser2);
						
						  answer=(int)(useranswser2*100 ) ;
						//	printf("%f\n",ftemp);
						   fanswer=(float)a/b/c;//强转结果数据类型
						   intanswer=(int)( (fanswer+0.005)*100 ) ;
                          //  printf("%d",intanswer);//答案扩大100
						   if(-0.02<answer - intanswer  && answer - intanswer <0.02)
						   {
							    percentageAnswer++;
							   printf("答对%d题目\n",percentageAnswer);
							   
						   }
						   else
						   {
							    printf("答案是：%0.2f\n",fanswer);
							   
							   printf("答案错误\n");
							   
						   }
		                break;
				}
		  break;
	  
	  }
	 }
}


Fraction Add(Fraction f1, Fraction f2)//分数相加
{
Fraction retValue;
int lcm = LCM(f1.denominator, f2.denominator); /* 计算最小公倍数 */
int gcd;

retValue.denominator = lcm;
retValue.numerator = f1.numerator * lcm / f1.denominator + f2.numerator * lcm / f2.denominator;
gcd = GCD(retValue.numerator, retValue.denominator);
retValue.numerator /= gcd;
retValue.denominator /= gcd;
return retValue;
}
Fraction sub(Fraction f1, Fraction f2)//分数相-
{
Fraction retValue;
int lcm = LCM(f1.denominator, f2.denominator); /* 计算最小公倍数 */
int gcd;

retValue.denominator = lcm;
retValue.numerator = f1.numerator * lcm / f1.denominator - f2.numerator * lcm / f2.denominator;
gcd = GCD(retValue.numerator, retValue.denominator);
retValue.numerator /= gcd;
retValue.denominator /= gcd;
return retValue;
}




/* 返回两个整数的最大公约数 */
int GCD(int a,int b)
{
int i,temp_gcd;
for(i=a;i>=1;i--)
{
if(a%i==0)
{
if(b%i==0)
{
temp_gcd=i;
return temp_gcd;
}
}
}
}
/* 返回两个整数的最小公倍数 */
int LCM(int a,int b)
{
int temp_lcm;
temp_lcm = a * b / GCD(a,b);
return temp_lcm;
}