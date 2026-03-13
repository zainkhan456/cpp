#include<iostream>
using namespace std; 
class Vehicle{
public: 
string brand;
void setBrand(string brand){
this->brand = brand;
}
};
class Car : public Vehicle{
public: 
string carName;
void setCarName(string carName){
    this -> carName = carName;
}
void showCarDetail(){
    cout<<"Car Detail "<<endl;
    cout<<"Car brand: "<<brand<<endl;
    cout<<"Car Name: "<<carName<<endl;

}
};
class Bike : public Vehicle{
public: 
string bikeName;
void setBikeName(string bikeName){
    this -> bikeName = bikeName;
}
void showBikeDetail(){
    cout<<"Bike Detail "<<endl;
    cout<<"Bike brand: "<<brand<<endl;
    cout<<"Bike Name: "<<bikeName<<endl;
}
};

int main(){
    Car car;
    Bike bike;
    car.setBrand("Honda");
    car.setCarName("Honda Civic");
    bike.setBrand("Kawasaki");
    bike.setBikeName("Kawasaki Ninja H2");

    //showing the Details
    car.showCarDetail();
    bike.showBikeDetail();

return 0;
}