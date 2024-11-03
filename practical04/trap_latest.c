#include <stdio.h>
#include <math.h>
#define N 12
float TanArr[N+1];
float degtorad(float degard);
float traprule();

int main(){
	int i;
	float a =0.0,b_deg =60.0;

	float deg;
	
	for(i=0;i<N;i=i+1){
		deg = i*5.0;
		TanArr[i] = tan(degtorad(deg));
		printf("TanArr[%d] = %f\n",i, TanArr[i]);
	}
	
	float area = traprule();
	printf("\nTrapezoidal Result is :%f\n",area);
	printf("Real result is :%f\n",log(2.0));
	return 0;
}

float degtorad(float degard){
	float pi =3.1415927;
	return((pi*degard)/180.0);
}
float traprule(){
	float area;
	int i;
	area = TanArr[0] + TanArr[N];
	printf("\nIntial area(sum at x(0) and x(12)) = %f\n",area);
	for(i=1;i<N;i++){
		area = area +2*TanArr[i];
	}
	printf("The value of the sum after the loop is :%f\n",area);

	float mult_rad = degtorad((60.0-0.0)/(2*N));
	area = mult_rad*area;
	return area;
}
