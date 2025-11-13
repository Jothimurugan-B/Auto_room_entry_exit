#include <LPC21xx.H>

//#include"delay.h"

#define pin 0x0f<<27

#define rs  1<<18 

#define en	1<<19

//#define rw  1<<17




typedef unsigned char u8;

void lcd_integer(unsigned int);

void lcd_str(u8 *);

void lcd_init(void);

void lcd_cmd(u8);

void lcd_data(u8 data);


//int main()

//{

//  lcd_init();

//  lcd_data('A');

//}


void lcd_init()

{

 	IODIR1 =rs|en|pin;

	

	

	lcd_cmd(0x01);

	lcd_cmd(0x02);

	lcd_cmd(0x0c);

   	lcd_cmd(0x28);

	lcd_cmd(0x80);

	

}				 


void lcd_cmd(u8 data)

{  

	IOCLR1=rs;


   IOCLR1=pin;

   IOSET1=(data&0xf0)<<23;   

   IOSET1=en;

   delay_ms(2);

   IOCLR1=en;


   IOCLR1=pin;

   IOSET1=(data&0x0f)<<27;

   IOSET1=en;

   delay_ms(2);

   IOCLR1=en;

	

} 


void lcd_data(u8 data)

{

	 IOSET1=rs;


   IOCLR1=pin;

   IOSET1=(data&0xf0)<<23; 

   IOSET1=en;

   delay_ms(2);

   IOCLR1=en;


   IOCLR1=pin;

   IOSET1=(data&0x0f)<<27;

   IOSET1=en;

   delay_ms(2);

   IOCLR1=en;

} 


void lcd_str(u8 *s)

{

	while(*s)

	{

	  lcd_data(*s++);

	}

}

void lcd_integer(unsigned int n)

{

  int i=0,a[10];
  if(n==0)
  lcd_data(n+48);

  while(n!=0){

  a[i++]=n%10;

  n=n/10;

  }

  for(--i;i>=0;i--)

  lcd_data(a[i]+48);

}
