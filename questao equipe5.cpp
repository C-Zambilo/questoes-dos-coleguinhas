#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float a_primeiro_triangulo = 0;
    float b_primeiro_triangulo = 0;
    float c_primeiro_triangulo = 0;
    float a_segundo_triangulo = 0;
    float b_segundo_triangulo = 0;
    float c_segundo_triangulo = 0;
    
    //valores triangulo 1
    cout <<"Entre com o lado A do triangulo x: ";
    cin >> a_primeiro_triangulo;
    cout <<"Entre com o lado b do triangulo x: ";
    cin >> b_primeiro_triangulo;
    cout <<"Entre com o lado c do triangulo x: ";
    cin >> c_primeiro_triangulo;
    //valores triangulo 2
    cout << "Entre com o lado A do triangulo y: ";
    cin >> a_segundo_triangulo;
    cout << "Entre com o lado b do triangulo y: ";
    cin >> b_segundo_triangulo;
    cout << "Entre com o lado c do triangulo y: ";
    cin >> c_segundo_triangulo;
    
    //calculo do primeiro triangulo
    float calculo_primeiro = (a_primeiro_triangulo + b_primeiro_triangulo + c_primeiro_triangulo) /2;
    float area_primeiro_triangulo = sqrt(calculo_primeiro * (calculo_primeiro - a_primeiro_triangulo) * (calculo_primeiro - b_primeiro_triangulo) * (calculo_primeiro - c_primeiro_triangulo));
    
    //calculo do segundo triangulo
    float calculo_segundo = (a_segundo_triangulo + b_segundo_triangulo + c_segundo_triangulo) /2;
    float area_segundo_triangulo = sqrt(calculo_segundo * (calculo_segundo - a_segundo_triangulo) * (calculo_segundo - b_segundo_triangulo) * (calculo_segundo - c_segundo_triangulo));
    
    cout<<"A area do primeiro triangulo e: "<<area_primeiro_triangulo<<"\n";
    cout<<"A area do segundo triangulo e: "<<area_segundo_triangulo<<"\n";
    if(area_primeiro_triangulo > area_segundo_triangulo){
        cout<<"O triangulo com a maior area e : Primeiro";
    }else{
        cout<<"O triangulo com a maior area e : Segundo";
    }    
}