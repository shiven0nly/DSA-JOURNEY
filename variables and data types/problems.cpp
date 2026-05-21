// problem 1:- Question1:Inaprogram,inputthesideofasquare.Youhavetooutputtheareaofthesquare.Input:n(side)Output:n*n(area)

// Question2:Entercostof3itemsfromtheuser(usingfloatdatatype)-apencil,apenandaneraser.Youhavetooutputthetotalcostoftheitemsbacktotheuserastheirbill.(Addon:Youcanalsotryadding18%GSTtaxtotheitemsinthebillasanadvancedproblem)

// Question3:BuildaSimpleInterestCalculator.Input:principal(P),rate(R),time(T)Output:(P*R*T)/100Question4:Writeaprogramtocalculatetheareaofacircle.Input:r(radius)Output:PI*r*r(area)

#include <iostream>
using namespace std;

int areaofsquare(int a) {
    cout<<"enter value of a: ";
    cin>>a;
    int area = a*a;
    cout<<"area of square: "<<area<<endl;
}

int bill(float a, float b , float c){
    cout<<"enter the price of pencil: ";
    cin>>a;
    cout<<"enter the price of pen: ";
    cin>>b;
    cout<<"enter the price of eraser: ";
    cin>>c;
    float total = (a+b+c) + (a+b+c) * 0.18;
    cout<<"total price become: "<<total<<endl;
}

int simple_interest(int p , float r , int t){
    cout<<"enter the principle amount: ";
    cin>>p;
    cout<<"enter the rate: ";
    cin>>r;
    cout<<"enter the time: ";
    cin>>t;
    float simple_interest= (p*r*t)/100;
    cout<<"your simple interest become: "<<simple_interest<<endl;
}

int area_of_circle(float pi , float r){
    cout<<"enter the radius of the circle :";
    cin>>r;
    float area_of_circle = pi*r*r;
    cout<<"area of circle: "<<area_of_circle<<endl;
}

int main(){

    int a, p , r, t , pi;
    areaofsquare(5);
     bill(4.99, 10, 5);
      simple_interest(5000 , 0.038 , 2);
       area_of_circle(3.14 , 5.44);

    return 0;
}