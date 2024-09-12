/*#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int N;
	cin>>N;
	if (N<=0||N>2000){
		cout<<"invalid"<<endl;
		return 1;
	}
	cout<<"Decimal format:"<<N<<endl;
	cout<<"Octal format:"<<oct<<N<<endl;
	cout<<"Hexa:"<<hex<<N<<endl;
	
	return 0 ;
}

#include<iostream>
using namespace std;
int fun1(int num1,int num2){
	return num1+num2;
}
int fun1(int num1,int num2,int num3){
	return num1*num2*num3;
}
int main(){
	int N;
	cin>>N;
	
	if(N==2){
		int num1,num2;
		cin>>num1>>num2;
		int result=fun1(num1,num2);
		cout<<result<<endl;
	}else if(N==3){
		int num1,num2,num3;
		cin>>num1>>num2>>num3;
		int result=fun1(num1,num2,num3);
		cout<<result<<endl;
	}else{
		cout<<"invalid"<<endl;
	}
	return 0;
}


#include<iostream>
using namespace std;
class dayOfweek{
	private:
		int dayNumber;
	public:
		dayOfweek(int num){
			dayNumber = num;
		}
		void printDay(){
			
		}
};

*/

#include<iostream>
using namespace std;
class time{
	private:
		int hours,min;
		public:
			time(int m){
				hours=m/60;
				min=m%60;
			}
			void show()
			{
				cout<<""
			}
};














