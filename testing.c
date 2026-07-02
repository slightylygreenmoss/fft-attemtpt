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
//oooooooooooooooh and log_b a = log a/log b aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
//so 3^4 is easy, 3^0.14 is e^0.14(ln 3) is e^1/3ln(0.14) because math and ln(0.14 is computable) via a taylor series and is accurate.. 
//we have achieved logarithms and the mclaurin series of a^n always converges for a>0. we can use a recursive solver for negative values of a.. actually..
//(-9)^2n = 9^2n.. and -9^(2n+1) = -(9)^(2n+1) but this only holds for integer values of n.. or does it? time to learn fractals. negative negative negatinve vinevineindeindeindinfrinfrinfirnfirnfirnfirnf okay so these things are defined for negative values but only if theyre in the form p/q where q is just aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa im so tired.. btw this is my run time journal ill clean it up in the final final actual version.. yeah q needs to be odd for it to be penis.honestly im now considering whether if i will ever "exponate" a negative number to the power of a fraction or an irrational number...
//in the fft n is always positive and non zero so i dont need the negative exponents
}
}
