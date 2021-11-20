#include <iostream>

using std::cout;
using std::endl;
using std::string;
class Student{
    private:
        static float max;
    	static float mark_scored;
    	static float pass_mark;
    	static string result;
    public:
    	void getData(){
    		cout<<"Enter your mark out of 100: ";
    		std::cin>>mark_scored;
    	}
    	static void calResult(){
    		if(mark_scored>pass_mark){
    			result= "Passed. Congratzz!";
    		}else{
    			result = "Failed . Better Luck Next Time! Study well";
    		}
    	}
    	void display() const{
    		cout<<"Your Result is : " << result<<endl;
    	}
};
string Student::result;
float Student::mark_scored;
float Student::pass_mark = 33;
float Student::max=100;

int main(){
	//object
	Student std1;
	
	std1.getData();
	Student::calResult();
	std1.display();
	
	return 0;
}
