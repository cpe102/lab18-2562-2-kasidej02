#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect A,Rect B){

	double x_distance = min(A.x+A.w,B.x+B.w)-max(A.x,B.x) ;
	double y_distance = min(A.y,B.y) - max(A.y-A.h,B.y-B.h) ;
	double area = x_distance * y_distance;
	if(area<=0) return 0;
	return area;

}

int main(){
	double a,b,c,d,e,f,g,h;
	cout << "Please input Rect 1 (x y w h): ";
	cin>>a>>b>>c>>d;
	cout << "Please input Rect 2 (x y w h): ";
	cin>>e>>f>>g>>h;
	Rect R1 = {a,b,c,d};
	Rect R2 = {e,f,g,h};
		
	cout << "Overlap area = "<<overlap(R1,R2);	
	return 0;
}
