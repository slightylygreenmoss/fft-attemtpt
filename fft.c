#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<math.h>

#define pi 3.141592653589793238462643383279
#define e  2.718281828459045235360287471352
//im probably not going to use these macros

typedef struct{
	long double re;
	long double im;
}cnum;

cnum* createnum(long double re, long double im){
	cnum* temp= calloc(1,sizeof(struct num));
	temp->re=re;
	temp->im=im;//discovered imaginary is a predefined keyword
	return temp;
}

cnum* addstuff(cnum* a, cnum* b){
	//wanna see some crazy shit?
	//a+ib + c+id = a+b +i(b+d) nothign complicated
	return createnum(a->re+b->re,a->im+b->im);
	//isnt that some crazy optimal code or what its one line ugh tis cool
}

cnum* multiply(cnum* a, cnum* b){
	//its (a+ib)*(c+id)=(ac-bd)+i(ad+bc)
	//very fun very nice
	return createnum((a->re*b->re)-(a->im*b->im),(a->re*b->im)+(a->im*b->re));//oh and she does it again ugh! yeah!
}

long double CosTA(n){
//cosine taylor approximation

}

cnum* nthRootOfUnityGenerator(long long n){
//penis
//e^i2pi/n = cos 2pi/n + i sin 2pi/n
//however when calling sin and cos funcs DO NOT WRITE 2pi/n.
//WRITE cos(n) instead of cos(2pi/n) 
struct num e={CTA(n),}

}

long long arraySizeDeterminer(int* array){
	long long size = sizeof(array)/sizeof(int);
	long long n=1;//loooong loooong maaaaaaaaan
	while(pow(2,n)<=size){
		//TO DO: replace pow with your own exponentiation function
		n++;
	}	
	n=pow(2,n); // i am the senate, just reusing variables
	return n;//and not another word just lalalalalala
}


int* fft(int* coefficients){
	long long n = arraySizeDeterminer(coefficients);
	if(n==1){
		return coefficients;
	}
cnum nthroot = nthRootOfUnityGenerator(n);
long i = 0x5f3759df - (i >> 1);  // what the fuck? //there is no reason for this to be here other than that i wanted it here, its here to bring the average grade of the code up to a C from a D its clearly at.

return 
}
