
#include<stdio.h>
#include<conio.h>
int on();
void move(int);
float dest=0,pos=0,s;
int speed=0;
int main()
{
	clrscr();
	printf("enter the destination in km");
	scanf("%f",&dest);
	on();
    return 0;
	getch();
}
int on()
{
		printf("\nenter the sensor range");
		scanf("%f",&s);
		if(pos>=dest)
		{
		  printf("successfully we reached the destination");
		  exit(0); 
		}
		
		if(s==1)
		{
			printf("the obstacle is very close to our car.so,stop our car until our way get free");
			speed=0;//stop
			pos=pos+0;
			move(speed);
		}
		else if((s>0)&&(s<=0.5))
		{
			printf("some obstacle is away from our car.so,now our car speed is 30km/hr ");
			speed=30;
			pos=pos+0.50;
			move(speed);
		}
		else if((s>0.5)&&(s<1))
		{
		    printf("some obstacle is nearly close to our car.so,now our car speed is 20km/hr");
			speed=20;
		   	pos=pos+0.33;
			move(speed);
		}
		else
		{
			printf("car is moving with a speed of 60km/hr");
			speed=60;
			pos=pos+1;
			move(speed);
		}
	}
void move(int sp)
{  
	if(sp==0)
	{
	   on();
	   
	}
	else if(sp==20)
	{
		on();
	}
	else if(sp==30)
	{
		on();
	}
	else
	{
		on();
	}
}






