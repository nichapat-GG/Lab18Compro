#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1, Rect R2){
	double L, R, B, T;
	if(R1.x > R2.x){
		L = R1.x;
	}else{
		L = R2.x;
	}

	if(R1.x + R1.w < R2.x + R2.w){
		R = R1.x + R1.w;
	}else{
		R = R2.x + R2.w;
	}

	if(R1.y < R2.y){
		T = R1.y;
	}else{
		T = R2.y;
	}

	if(R1.y - R1.h > R2.y - R2.h){
		B = R1.y - R1.h;
	}else{
		B = R2.y - R2.h;
	}

	if(R <= L || T <= B){
		return 0;
	}
	return (R - L)*(T - B);
}