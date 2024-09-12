/*#include<iostream>
using namespace std;
int main(){
	string s1("man");
	string s2="beast";
	string s3;
	s3=s1;
	cout<<"s3 = "<<s3<<endl;
	
	s3="neither "+s1+" nor ";
	s3+=s2;
	cout<<"s3 = "<<s3<<endl;
	s1.swap(s2);
	cout<<s1<<" nor "<<s2<<endl;
	return 0;
	
}
#include<iostream>
#include<string>
using namespace std;
int main(){
	string str="welcome";
	cout<<"Size="<<str.size()<<endl;
	cout<<"Length"<<str.length()<<endl;
	cout<<"Max Size="<<str.max_size()<<endl;
	cout<<"Empty:"<<(str.empty()?"yes":"no")<<endl;
	
	return 0;
}

#include <iostream>

class Counter {
private:
    int value;

public:
    Counter(int initial_value) : value(initial_value) {}

    void Increment(int increment_value) {
        value += increment_value;
    }

    int GetCounterValue() const {
        return value;
    }
};

int main() {
    int initial_value, increment_value;
    std::cin >> initial_value >> increment_value;

    // Create a Counter object
    Counter counter(initial_value);

    // Increment the counter
    counter.Increment(increment_value);

    // Output
    std::cout << initial_value << std::endl;
    std::cout << counter.GetCounterValue() << std::endl;
    
return 0;
}
#include<iostream>
using namespace std;
class person{
	int d,m,y;
	public:
		person(int a,int b,int c){
			d=a;
			m=b;
			y=c;		
		}
		
		
		
};

#include <iostream>
#include <string>

// Base class
class Person {
public:
    std::string name;
    std::string phoneNumber;

    Person(std::string n, std::string p) {
        name = n;
        phoneNumber = p;
    }
};

// Derived class
class Student : public Person {
public:
    std::string section;
    int rollNumber;
    double fee;

    Student(std::string n, std::string p, std::string s, int r, double f) : Person(n, p) {
        section = s;
        rollNumber = r;
        fee = f;
    }

    void display() {
        std::cout << "Name: " << name << "\n";
        std::cout << "Phone Number: " << phoneNumber << "\n";
        std::cout << "Section: " << section << "\n";
        std::cout << "Roll Number: " << rollNumber << "\n";
        std::cout << "Fee: " << fee << "\n";
    }
};

int main() {
    std::string name, phoneNumber, section;
    int rollNumber;
    double fee;

    std::cout << "Enter Name: ";
    getline(std::cin, name);
    
    std::cout << "Enter Phone Number: ";
    getline(std::cin, phoneNumber);
    
    std::cout << "Enter Section: ";
    getline(std::cin, section);
    
    std::cout << "Enter Roll Number: ";
    std::cin >> rollNumber;

    std::cout << "Enter Fee: ";
    std::cin >> fee;

    Student student1(name, phoneNumber, section, rollNumber, fee);
    student1.display();

    return 0;
}


//vehical as base class and car as inherited class


#include <iostream>
using namespace std;

class Vehicle {
protected:
    float distance;
    float time;

public:
    void getInput() {
        cout << "Enter distance (in km): ";
        cin >> distance;

        while (distance < 0) {
            cout << "Distance cannot be negative. Enter distance again (in km): ";
            cin >> distance;
        }

        cout << "Enter time (in hours): ";
        cin >> time;

        while (time < 0) {
           cout << "Time cannot be negative. Enter time again (in hours): ";
            cin >> time;
        }
    }
};

class Car : public Vehicle {
public:
    void calculateSpeed() {
        float speed = distance / time;
        cout << "Speed of car: " << speed << " km/hr" << endl;
    }
};

int main() {
    Car car;
    car.getInput();
    car.calculateSpeed();
return 0;
}




#include<iostream>
using namespace std;
class person
{
	private:
		int phno;
		char name[20];
		public:
			void read(){
				cout<<"Enter the phno and name: ";
				cin>>phno>>name;
			
			}
			void show(){
				cout<<"phno="<<phno;
				cout<<"\nName="<<name;
			}
};
class student:public person{
	private:
		int rollno;
		char course[20];
		oublic:
			void read(){
				person::read();
				cout<<"Enter rollno and course: ";
				cin>>rollno>>course;
				
			}
			void show(){
				person::show();
				cout<<"\nRollno="<<rollno;
				cout<<"\nCourse="<<course;
			}
			
};
class exam : public student{
	private:
		int m[4];
		double per;
		public:
			void read();
			void cal();
			void show();
			
};
void exam::read()
{
	student::read();
	cout<<"Enter marks :";
	for(int i=0;i<4;i++)
		cin>>m[i];
}
void exam::cal(){
	int tot_marks=0;
	for(int i=0;i<4;i++)
	tot_marks+=m[i];
	per=double (to_marks)/4;
	
}
void exam::show(){
	student::show();
	cout<<"\nMarks :";
	for(int i=0; i<4;i++)
	cout<<m[i]<<"\t";
	cout<<"\nPersentage = "<<per;
	
}
int main()
{
	exam
}
*/
//
//#include<iostream>
//using namespace std;
//// Base class
//class Student {
//public:
//    string name;
//    int rollNo;
//};
//
//// Derived class
//class InternalMarks : public Student {
//public:
//    int internalMark;
//};
//
//// Derived class
//class ExternalMarks : public Student {
//public:
//    int externalMark;
//};
//
//// Derived class from two base classes
//class Result : public InternalMarks, public ExternalMarks {
//public:
//    void display() {
//        cout << "Name: " << InternalMarks::name << endl;
//        cout << "Roll No: " << InternalMarks::rollNo << endl;
//        cout << "Internal Mark: " << internalMark << endl;
//        cout << "External Mark: " << externalMark << endl;
//        cout << "Total Marks: " << internalMark + externalMark << endl;
//    }
//};
//
//int main() {
//    Result student1;
//    student1.InternalMarks::name = "puneet";
//    student1.InternalMarks::rollNo = 0;
//    student1.internalMark = 85	;
//    student1.externalMark = 90;
//    student1.display();
//    return 0;
//}

//template syntax template<class classname>
//#include<iostream>
//using namespace std;
//template <class T>
//T square(T num){
//	
//	return (num*num);
//}
//int main(){
//	int num1 =45;
//	cout<<"Square of "<<num1<<" = "<<square<int>(num1)<<endl;
//	float num2=1.784;
//	cout<<"Square of "<<num2<<" = "<<square<float>(num2)<<endl;
//	double num3= 123.4532;
//	cout<<"Square of "<<num3<<" = "<<square<double>(num3);
//	return 0;
//}
//



#include<iostream>
using namespace std;





























