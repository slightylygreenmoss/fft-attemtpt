#include<stdio.h>
#include<stdlib.h>
#include<math.h>

long long factorial(long long);
long double cosine(long long);
long double power(long long, long long);
long double sine(long long);
//the radius of convergence for sin and cos is infinite so we'll just use the mclauren series, taylor has been getting to much clout anyway and a cult following, kinda gross.. ee

long double sine(long long x){
//lets try ten terms first
//also x is long long because it really just describes the size of an array which cant be a floating point num
long dobuble result=0;
long long termnum;
for(int n =0; n<10; n++){
	result = 0;
	int i = n;
	while(i!=-1){
		result=result+power(-1,i)*(power(x,(2*i)+1)/factorial(2*i+1);
		i--;
	}
	printf("term num %d, sine value: %Lf",i,result);
}

}

long long factorial(long long x){
long long result=1;
while(x!=0){
result=result*x;
x--;
}
return result;
}

long double cosine(long long x){
long dobuble result=0;
long long termnum;
for(int n =0; n<10; n++){
	result = 0;
	int i = n;
	while(i!=-1){
		result=result+power(-1,i)*(power(x,(2*i))/factorial(2*i);
		i--;
	}
	printf("term num %d, cosine value: %Lf",i,result);
}
return result;
}

long double power(long long base, long long exponent){
if(exponent==0){return 1;}
else{
//do stuff
//so we separate the base into two parts, the integer part and the fractional part
//we can do the integer exponent easily right? yeah sure we can, and then the fractional part we will use a binomial expansion. for example 3.45^pi we will do.. 3^pi + nope nvm that wont work we are skipping the intermediate terms..
//ugh fuck..
//idea since we dont have infinite digits we should be able to resolve floats to int fracs and then we can use fast exponentiation and then divide them like 4^3.14000 = 4^(314/100)=4^(157/50=(4^157)/4^50 no wait no that wont work fuuuuuuuuuuck
//4^3 * 4^0.14... 0.14 =  14/10 = 14/2*5 primes ugh 
//we need to factor it in nope im going to math stack exchange oh my gosh you beautiful bastards logarithms holy fuck thats it
}
}
