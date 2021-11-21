#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

class Rectangle{
    private:
        float len;
        float wid;
        float area;
    public:
        void input(){
            cout<<"Enter the length of Rectangle :";
            cin>>len;
            cout<<"Enter width of Rectangle :";
            cin>>wid;

            area = wid * len;
        }
        void radius_for_eq_area(Rectangle rt){
            
            float rs = (rt.area * 7)/22;
            float cRadius = sqrt(rs);
            

            cout<<"Radius of circle which area equal to entered rectangle = "<<cRadius<<std::endl;
        }
                
};
int main(){
    //object
    Rectangle rectangle;

    rectangle.input();

    rectangle.radius_for_eq_area(rectangle);

    return 0;
}