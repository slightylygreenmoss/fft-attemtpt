#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<math.h>

#define pi 3.141592653589793238462643383279
#define e  2.718281828459045235360287471352
//im probably not going to use these macros

struct num{
	long double re;
	long double im;
};

struct num* createnum(long double real, long double imaginary){
	struct num* temp= calloc(1,sizeof(struct num));
	temp->re=real;
	temp->im=imaginary;
	return temp;
}

struct num* addstuff(struct num* a, struct num* b){
	//wanna see some crazy shit?
	return createnum(a->re+b->re,a->im+b->im);
	//isnt that some crazy optimal code or what its one line ugh tis cool
}

struct num* multiply(struct num* a, struct num* b){
	return createnum((a->re*b->re)-(a->im*b->im),(a->re*b->im)+(a->im*b->re));//oh and she does it again ugh! yeah!
}

long double CTA(n){
//cosine taylor approximation

}

struct num* nthRootOfUnityGenerator(long long n){
//penis
//e^i2pi/n = cos 2pi/n + i sin 2pi/n
//however we will pass n as an argument call by value, and the function will return the trig funcs in terms of 2pi/n
struct num e={CTA(n),}

}

long long arraySizeDeterminer(int* array){
	long long size = sizeof(array)/sizeof(int);
	long long n=1;//loooong loooong maaaaaaaaan
	while(pow(2,n)<=size){
		n++;
	}	
	n=pow(2,n); // i am the senate
	return n;//and not another word just lalalalalala
}


int* fft(int* coefficients){
	long long n = arraySizeDeterminer(coefficients);
	if(n==1){
		return coefficients;
	}
struct num valatpos= nthRootOfUnityGenerator(n);
long i = 0x5f3759df - (i >> 1);  // what the fuck? //there is no reason for this to be here other than that i wanted it here, its here to bring the average grade of the code up to a C from a D its clearly at.

return 
}
