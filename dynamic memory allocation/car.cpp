#include<bits/stdc++.h>
using namespace std;

class car{
    private:
    string name;
    int price;
    int seats;
    int tyres;
    string color;
    public:
    car(string name,int price,int seats,int tyres,string color){
        cout<<"Car constructor called\n";
        this->price=price;
        this->name=name;
        this->color=color;
        this->seats=seats;
        this->tyres=tyres;

    }
    void print(){
        cout<<"Name : "<<this->name<<endl;
        cout<<"Price : "<<this->price<<endl;
        cout<<"Color : "<<this->color<<endl;
        cout<<"Seats : "<<this->seats<<endl;
        cout<<"Tyres : "<<this->tyres<<endl;
        cout<<endl;
    }
};



int main(){
    car A("Audi",5000000,2,4,"Red");
    // A.price=1000;
    // A.name="Audi";
    // A.color="Red";
    // A.seats=2;
    // A.tyres=4;
    car B("Mercedes",4000000,4,4,"White");
    car C(A);
    A.print();
    B.print();
    C.print();
    return 0;
}


