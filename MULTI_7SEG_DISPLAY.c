#include<AT89S52.h>
#define DATA P0
#define SEG P1
void wait(int dela);
const char arr[10]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
void main()
{

	while(1)
	{
	DATA=arr[1];  //DISPLAYING DATA
	SEG=0X03;    //SELECT THE SEGMENT
	SEG=0X0F;   //TURN OFF THE SEGMENT
  
	DATA=arr[2];  //DISPLAYING DATA
	SEG=0X0C;   //SELECT THE SEGMENT
	SEG=0X0F;  //TURN OFF THE SEGMENT
	
	}
}
void wait(int dela) //USE DELAY FOR REAL TIME APPLICATION
{
int j;
for(j=0;j<dela;j++)
{}
}
