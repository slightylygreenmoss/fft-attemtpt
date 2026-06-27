#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<math.h>

#define pi 3.14159265
#define e 2.718281828
//im probably not going to use these macros

struct num{
long double re;
long double im;
};

struct num* createnum(int64_t real, int64_t imaginary){
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

struct num* nthRootOfUnityGenerator(int64_t n){

}


