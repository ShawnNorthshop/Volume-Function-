#include <iostream>  //Remember the type of brackets that iostream uses. 
using namespace std;

double volume(double width, double height, double length); // prototype is telling the compiler/main function that another function is coming later

void main()
{
	double l, w, h; 
	cout << "Enter pyramid length: ";
	cin >> l; 
	cout << "Enter pyramid width: ";
	cin >> w; 
	cout << "Enter pyramid height: ";
	cin >> h; 
	cout << "The volume of the pyramid is " << volume(l, w, h) << "cubic units. " << endl; 

}

double volume (double width, double height, double length)
{
	double V = length*width*height / 3.0;
	return V; 
}