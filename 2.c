#include<stdio.h>

#include<time.h>

typedef struct
{
int numerator; /* ���� */
int denominator; /* ��ĸ */
} Fraction;

int GCD(int a,int b);///* �����������������Լ�� */
int LCM(int a,int b);///* ����������������С������ */
void title();
void intfouroperation();
Fraction Add(Fraction f1, Fraction f2);
Fraction sub(Fraction f1, Fraction f2);//������-


 
void main()
{
    int i,m,n,menu;
	int k;
    float p, q;
	Fraction f1, f2, f3;
	for(;;){
		 title();
  printf("\n������ѡ����");
  fflush(stdin);
  scanf("%d",&menu);
  if(menu==1)
  {
	  intfouroperation();
	  
  }
 if(menu==2)
 {
	     printf("\n��Ҫ����������ٷ�����Ӽ���");
		 scanf("%d",&n);
       for(i=0;i<n;i++)
	   {
		   f1.numerator = rand() % 99+1;//�������������;
           f1.denominator = rand() % 99+1;//��ĸ
           f2.numerator = rand() % 99+1;
           f2.denominator = rand() % 99+1;
           k=rand()%2+1;//�����������������Ӽ�����Ŀ
		   if(k==1)
		   {
		   f3 = Add(f1, f2);//�ӷ�
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
	 printf("ָ�����󣡣���");
	 system("pause");
	 fflush(stdin);
 }
   
	}
 
}
























void title()//��Ŀmenu
{
	system("CLS");
	printf("\t\tWellcom to ������������\n");
	printf("\t1.������������\n");
	printf("\t2.�������ص���ϰ��\n");
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
     printf("��Ҫ�Ķ��ٵ�����������Ŀ(>0)��");
	 scanf("%d",&n);
	 for(i=0;i<n;i++)
	 {
        a = rand() % 99+1;//���������a
        b = rand() % 99+1;//�����b
		c = rand() % 99+1;//�����c
        d = rand() % 4+1;//���������һ����Ӧ����λ+-/*
		d2 = rand() % 4+1;//��������ڶ�����Ӧ����λ+-/*
      switch(d)
	  {
	  case 1://+
	            switch(d2)
				{
	                   case 1://+
						   printf("�����\n");
		                   printf("%d + %d + %d= ",a,b,c);
						   scanf("%d",&useranswser);
						   answer=a+b+c;
						   if(useranswser==answer)
						   {
							  
							   percentageAnswer++;
							   printf("���%d��Ŀ\n",percentageAnswer);
						   }
						   else
						   {
							   printf("�𰸴���\n");
							   printf("���ǣ�%d\n",answer);
						   }
		                break;
	                   case 2://-
		                  printf("�����\n");
						  if((a+b)<c)//���ܸ�������
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
							   printf("���%d��Ŀ\n",percentageAnswer);
						   }
						   else
						   {
							    printf("���ǣ�%d\n",answer);
							   printf("�𰸴���\n");
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
							   printf("���%d��Ŀ\n",percentageAnswer);
						   }
						   else
						   {
							    printf("���ǣ�%d\n",answer);
							   printf("�𰸴���\n");
						   }
						  }
		                break;
	                   case 3://*
		                  
						   printf("�����\n");
		                   printf("%d + %d  *  %d= ",a,b,c);
						      scanf("%d",&useranswser);
						   answer=a+b*c;
						   if(useranswser==answer)
						   {
							  
							   percentageAnswer++;
							   printf("���%d��Ŀ\n",percentageAnswer);
						   }
						   else
						   {
							    printf("���ǣ�%d\n",answer);
							    printf("�𰸴���\n");
						   }
						
		                break;
	                   case 4://��/
                             printf("�����(����С�������λ)\n");
		                     printf("%d + %d  / %d= ",a,b,c);
							    scanf("%f",&useranswser2);
						
						answer=(int)(useranswser2*100 ) ;
						//	printf("%f\n",ftemp);
						   fanswer=(float)a+(float)b/c;//ǿת�����������
						   intanswer=	 (int)( (fanswer+0.005)*100 ) ;
                          //  printf("%d",intanswer);//������100
						   if(-0.02<answer - intanswer  && answer - intanswer <0.02)
						   {
							    percentageAnswer++;
							   printf("���%d��Ŀ\n",percentageAnswer);
							   
							  
							
						   }
						   else
						   {     
							      printf("���ǣ�%0.2f\n",fanswer);
							     printf("�𰸴���\n");
							   
						   }
		                break;
				}
		  break;
	  case 2://-
		       switch(d2)
				{
	                   case 1://+

						   printf("�����\n");
						   if((a-b)<0)//��������
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
							   printf("���%d��Ŀ\n",percentageAnswer);
						   }
						   else
						   {
							     printf("���ǣ�%d\n",answer);
							   printf("�𰸴���\n");
						   }
		                break;
	                   case 2://-
		                  printf("�����\n");
						  if((a-b)<0)//���ܸ�������
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
							   printf("���%d��Ŀ\n",percentageAnswer);
						   }
						   else
						   {
							     printf("���ǣ�%d\n",answer);
							   printf("�𰸴���\n");
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
							   printf("���%d��Ŀ\n",percentageAnswer);
						   }
						   else
						   {
                               printf("���ǣ�%d\n",answer);
							   printf("�𰸴���\n");
						   }
							  }
						  }
		                break;
	                   case 3://*
		                  
						   printf("�����\n");
						   if(a-(b*c)>0)
						   {
							   printf("%d - %d  *  %d= ",a,b,c);
							   scanf("%d",&useranswser);
						       answer=a-b*c;
						   if(useranswser==answer)
						   {
							  
							   percentageAnswer++;
							   printf("���%d��Ŀ\n",percentageAnswer);
						   }
						   else
						   {
							   printf("���ǣ�%d\n",answer);
							   printf("�𰸴���\n");
						   }
						   
						   }
						    else
							{
								printf("%d * %d -%d=",b,c,a);//��������
								scanf("%d",&useranswser);
						       answer=b*c-a;
						   if(useranswser==answer)
						   {
							  
							   percentageAnswer++;
							   printf("���%d��Ŀ\n",percentageAnswer);
						   }
						   else
						   {
							    printf("���ǣ�%d\n",answer);
							   printf("�𰸴���\n");
						   }
							}
		                break;
	                   case 4://��/
                             printf("�����(����С�������λ)\n");
							 if(a-(b/c)>0)
							 {
		                   printf("%d - %d  /  %d= ",a,b,c);
						   scanf("%f",&useranswser2);
						
						  answer=(int)(useranswser2*100 ) ;
						//	printf("%f\n",ftemp);
						   fanswer=(float)a-(float)b/c;//ǿת�����������
						   intanswer=	 (int)( (fanswer+0.005)*100 ) ;
                          //  printf("%d",intanswer);//������100
						   if(-0.02<answer - intanswer  && answer - intanswer <0.02)
						   {
							    percentageAnswer++;
							   printf("���%d��Ŀ\n",percentageAnswer);
							   
						   }
						   else
						   {
							   printf("���ǣ�%0.2f\n",fanswer);
							   
							   printf("�𰸴���\n");
							  
						   }
							 } 
						   else
							{
								printf("%d / %d  - %d=",b,c,a);//��������
								scanf("%f",&useranswser2);
						
						  answer=(int)(useranswser2*100 ) ;
						//	printf("%f\n",ftemp);
						   fanswer=(float)b/c-(float)a;//ǿת�����������
						   intanswer=	 (int)( (fanswer+0.005)*100 ) ;
                          //  printf("%d",intanswer);//������100
						   if(-0.02<answer - intanswer  && answer - intanswer <0.02)
						   {
							    percentageAnswer++;
							   printf("���%d��Ŀ\n",percentageAnswer);
							   
						   }
						   else
						   {
							   
							   printf("���ǣ�%0.2f\n",fanswer);
							   printf("�𰸴���\n");
							  
						   }
							
							}
		                break;
				}
		  break;
	  case 3://*
		                 switch(d2)
				{
	                   case 1://+

						       printf("�����\n");
							   printf("%d * %d + %d= ",a,b,c);
							   	scanf("%d",&useranswser);
						       answer=a*b+c;
						   if(useranswser==answer)
						   {
							  
							   percentageAnswer++;
							   printf("���%d��Ŀ\n",percentageAnswer);
						   }
						   else
						   {
							   printf("���ǣ�%d\n",answer);
							   printf("�𰸴���\n");
						   }
	
		                break;
	                   case 2://-
		                  printf("�����\n");
				          if(a*b>c)
						  {
                            printf("%d * %d - %d=",a,b,c);
							 	scanf("%d",&useranswser);
						       answer=a*b-c;
						   if(useranswser==answer)
						   {
							  
							   percentageAnswer++;
							   printf("���%d��Ŀ\n",percentageAnswer);
						   }
						   else
						   {
							   printf("���ǣ�%d\n",answer);
							   printf("�𰸴���\n");
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
							   printf("���%d��Ŀ\n",percentageAnswer);
						   }
						   else
						   {
							    printf("���ǣ�%d\n",answer);
							   printf("�𰸴���\n");
						   }
						  }
		                break;
	                   case 3://*
		                  
						        printf("�����\n");
								printf("%d * %d * %d=",a,b,c);
								 	scanf("%d",&useranswser);
						       answer=a*b*c;
						   if(useranswser==answer)
						   {
							  
							   percentageAnswer++;
							   printf("���%d��Ŀ\n",percentageAnswer);
						   }
						   else
						   {
							   printf("���ǣ�%d\n",answer);
							   printf("�𰸴���\n");
						   }
		                break;
	                   case 4://��/
                             printf("�����(����С�������λ)\n");
		                          
								printf("%d * %d /  %d=",b,c,a);
								 scanf("%f",&useranswser2);
						
						  answer=(int)(useranswser2*100 ) ;
						//	printf("%f\n",ftemp);
						   fanswer=(float)a*(float)b/c;//ǿת�����������
						   intanswer=(int)( (fanswer+0.005)*100 ) ;
                          //  printf("%d",intanswer);//������100
						   if(-0.02<answer - intanswer <0.02)
						   {
							    percentageAnswer++;
							   printf("���%d��Ŀ\n",percentageAnswer);
							   
						   }
						   else
						   {
							    printf("���ǣ�%0.2f\n",fanswer);
							   
							   printf("�𰸴���\n");
							   
						   }
		                break;
				}
		  break;
	  case 4://��/
                       switch(d2)
				{
	                   case 1://+

						       printf("�����(����С�������λ)\n");
							   printf("%d / %d + %d= ",a,b,c);
                               scanf("%f",&useranswser2);
						
						  answer=(int)(useranswser2*100 ) ;
						//	printf("%f\n",ftemp);
						   fanswer=(float)a/b+(float)c;//ǿת�����������
						   intanswer=(int)( (fanswer+0.005)*100 ) ;
                          //  printf("%d",intanswer);//������100
						   if(-0.02<answer - intanswer  && answer - intanswer <0.02)
						   {
							    percentageAnswer++;
							   printf("���%d��Ŀ\n",percentageAnswer);
							   
						   }
						   else
						   {
							   printf("���ǣ�%0.2f\n",fanswer);
							   printf("�𰸴���\n");
							   
						   }
	
		                break;
	                   case 2://-
		                 printf("�����(����С�������λ)\n");
				          if(a/b>c)
						  {
                            printf("%d / %d - %d=",a,b,c);
							scanf("%f",&useranswser2);
						
						  answer=(int)(useranswser2*100 ) ;
						//	printf("%f\n",ftemp);
						   fanswer=(float)a/b-(float)c;//ǿת�����������
						   intanswer=(int)( (fanswer+0.005)*100 ) ;
                          //  printf("%d",intanswer);//������100
						   if(-0.02<answer - intanswer  && answer - intanswer <0.02)
						   {
							    percentageAnswer++;
							   printf("���%d��Ŀ\n",percentageAnswer);
							   
						   }
						   else
						   {
							    printf("���ǣ�%0.2f\n",fanswer);
							   printf("�𰸴���\n");
							  
						   }
						  }
						  else
						  {
                            printf("%d - %d / %d=",c,a,b);
							scanf("%f",&useranswser2);
						
						  answer=(int)(useranswser2*100 ) ;
						//	printf("%f\n",ftemp);
						   fanswer=(float)c-(float)a/b;//ǿת�����������
						   intanswer=(int)( (fanswer+0.005)*100 ) ;
                          //  printf("%d",intanswer);//������100
						   if(-0.02<answer - intanswer  && answer - intanswer <0.02)
						   {
							    percentageAnswer++;
							   printf("���%d��Ŀ\n",percentageAnswer);
							   
						   }
						   else
						   {
							    printf("���ǣ�%0.2f\n",fanswer);
							   printf("�𰸴���\n");
							   
						   }
						  }
		                break;
	                   case 3://*
		                  
						       printf("�����(����С�������λ)\n");
								printf("%d / %d * %d=",a,b,c);
								scanf("%f",&useranswser2);
						
						  answer=(int)(useranswser2*100 ) ;
						//	printf("%f\n",ftemp);
						   fanswer=(float)a/b*c;//ǿת�����������
						   intanswer=(int)( (fanswer+0.005)*100 ) ;
                          //  printf("%d",intanswer);//������100
						   if(-0.02<answer - intanswer  && answer - intanswer <0.02)
						   {
							    percentageAnswer++;
							   printf("���%d��Ŀ\n",percentageAnswer);
							   
						   }
						   else
						   {
							    printf("���ǣ�%0.2f\n",fanswer);
							  
							   printf("�𰸴���\n");
							  
						   }
		                break;
	                   case 4://��/
                             printf("�����(����С�������λ)\n");
		
								printf("%d / %d /  %d=",a,b,c);
								scanf("%f",&useranswser2);
						
						  answer=(int)(useranswser2*100 ) ;
						//	printf("%f\n",ftemp);
						   fanswer=(float)a/b/c;//ǿת�����������
						   intanswer=(int)( (fanswer+0.005)*100 ) ;
                          //  printf("%d",intanswer);//������100
						   if(-0.02<answer - intanswer  && answer - intanswer <0.02)
						   {
							    percentageAnswer++;
							   printf("���%d��Ŀ\n",percentageAnswer);
							   
						   }
						   else
						   {
							    printf("���ǣ�%0.2f\n",fanswer);
							   
							   printf("�𰸴���\n");
							   
						   }
		                break;
				}
		  break;
	  
	  }
	 }
}


Fraction Add(Fraction f1, Fraction f2)//�������
{
Fraction retValue;
int lcm = LCM(f1.denominator, f2.denominator); /* ������С������ */
int gcd;

retValue.denominator = lcm;
retValue.numerator = f1.numerator * lcm / f1.denominator + f2.numerator * lcm / f2.denominator;
gcd = GCD(retValue.numerator, retValue.denominator);
retValue.numerator /= gcd;
retValue.denominator /= gcd;
return retValue;
}
Fraction sub(Fraction f1, Fraction f2)//������-
{
Fraction retValue;
int lcm = LCM(f1.denominator, f2.denominator); /* ������С������ */
int gcd;

retValue.denominator = lcm;
retValue.numerator = f1.numerator * lcm / f1.denominator - f2.numerator * lcm / f2.denominator;
gcd = GCD(retValue.numerator, retValue.denominator);
retValue.numerator /= gcd;
retValue.denominator /= gcd;
return retValue;
}




/* �����������������Լ�� */
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
/* ����������������С������ */
int LCM(int a,int b)
{
int temp_lcm;
temp_lcm = a * b / GCD(a,b);
return temp_lcm;
}