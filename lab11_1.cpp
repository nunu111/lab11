#include<iostream>
#include<string>
using namespace std;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	int student=1;
	string grade;
	do
	{
		cout << "Student [" << student << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == "A") 
		{
			++count[0];
			++student;
		}
		else if(grade == "B") 
		{
			++count[1];
			++student;
		}
		else if(grade == "C") 
		{
			++count[2];
			++student;
		}
		else if(grade == "D") 
		{
			++count[3];
			++student;
		}
		else if(grade == "F") 
		{
			++count[4];
			++student;
		}
		else if(grade == "0") 
		break;
		else
		{
			cout << "Wrong input. Please input again.\n"; 
		} 
	}while(true);
	
	
	cout << "In total "<< student-1 <<" students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];	

	
	return 0;
}
