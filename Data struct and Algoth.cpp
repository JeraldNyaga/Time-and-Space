#include <iostream>
using namespace std;

int main(){
	// signed overflow
	signed int num1 =22474895862 ;
	
	signed char num2 = 198;
	
	signed short num3 = 45967;
	
	
	// signed underflow
	signed int num4 = -25478697542;
	
	signed char num5 = -241;
	
	signed short num6 = -85479;
	
	// unsigned overflow
	unsigned int num7 = 7458456972515;
	
	unsigned char num8 = 8941511 ;
	
	unsigned short num9 = 345757;
	
	// unsigned underflow
	unsigned int num10 = -8648;
	
	unsigned char num11 = -74245;
	
	unsigned short num12 = -71212;
	
	cout<<num1<<" "<<num2<<" "<<num3<<" "<<num4<<" "<<num5<<" "<<num6<<" "<<num7<<endl;
	cout<<num8<<" "<<num9<<" "<<num10<<" "<<num11<<" "<<num12<<" "<<endl;
}
