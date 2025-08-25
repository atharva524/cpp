

#include<iostream>
using namespace std;

class Math {
    public: 
        static const float PI;
};

const float Math :: PI = 3.14;

class Cylinder{

    private:
     float radius;
     float height;
     float volume;

    public:

        Cylinder():radius(0), height(0){}
        Cylinder(double radius, double height):radius(radius), height(height){}

        float getRadius(){
            return radius;
        }
        void setRadius(float radius){
            radius = radius;
        }
        float getHeight(){
            return height;
        }
        void setHeight(float height){
            height = height;
        }

        float calculateVolume(){
            volume = Math :: PI * height *  radius * radius;
            
            return volume;
        }

        void inputRecord(){
            float radius, height;
            
            cout << "Enter radius of cylinder: " << endl;
            cin >> radius;
            cout << "Enter height of cylinder: " << endl;
            cin >> height;

            this->radius = radius;
            this->height = height;
        
        }

        void printVolume(){
            cout << "Volume of the cylinder is: "<< volume << endl;

        }
};


int main()
{
    Cylinder cy;
    cy.inputRecord();
    cy.calculateVolume();
    cy.printVolume();

    return 0;
}
