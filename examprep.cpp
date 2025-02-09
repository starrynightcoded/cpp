#include <iostream>
#include <sstream> 
#include <cmath>
using namespace std;
void mult(int n){
	for (int i=1; i<=10; i++){
		cout<<n<<" x "<<i<<" = "<<n*i<<endl;
	}
}
int digit_Count(int n){
	int digit=0,count=0;
	if (n==0){
		return 1;
	}
	else{
		while(n>0){
			digit=n%10;
			n=n/10;
			count++;
		}
		return count;
	}
}
string reverse(int n){
	string word="";
	if(n==0){
		cout<<"0";
	}
	while(n>0){
	int reverse=n%10;
//	word+= to_string (reverse);;
	n=n/10;	
	}
	
	return word;
}
bool prime_checker(int n){
	if(n<=1){
			return false;
		}
	else if(n==2){
		return true;
	}
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return false;
	}
	return true;
}
bool armstrong(int num, int (*func) (int)){ //aik function ko as a parameter pass karna, uski return type phir pointer to that function phir uske parameter ki data type
	int originalnum=num;
	int count= func(num);// jou use karna hai usse nikal walain, uski data type , uska naam, func likh k, uske parameter ka naam
	int armstrong =0;
	while (num > 0) {
	int digit= num%10;
	
	armstrong += pow(digit, count);
	
	num=num/10;
}

return armstrong==originalnum;
}
int main(){
	int num;
	cin>>num;
//	mult(num);
//	cout<<digit_Count(num);
//	cout<<reverse(num);
//	cout<<prime_checker(num);
	cout<<armstrong(num, digit_Count);
	return 0;
}
