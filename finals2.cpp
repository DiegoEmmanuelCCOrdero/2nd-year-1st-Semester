#include<iostream>
using namespace std;
int main(){
	string username;
	string password;
	cout<<"Enter your username : ";cin>>username;
	cout<<"Enter your password : ";cin>>password;
	if(username == "admin5"){
		if(password == "admin12345"){
			cout<<"you are now logged in!"<<endl;
		}else{
			cout<<"invalid login, please try again !"<<endl;
		}
	}else{
		cout<<"invalid login, please try again !"<<endl;
	}
		
	int secretnum = 7;
	int guess;
	int guesscount = 0;
	int guesslimit = 3;
	bool outofguess = false; 
	
	while (secretnum !=guess && !outofguess){
		if (guesscount < guesslimit){
			cout<<"enter guess: ";
			cin>> guess;
			guesscount++;
		}else{
			outofguess = true;
		}
	}
	
	if (outofguess){
		cout<<"please try again";
	}else{
		cout<<"congratulation, you got it!";
	}
	
	
		
		
	
	return 0;	
}
	
