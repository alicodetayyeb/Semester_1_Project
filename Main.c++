#include<iostream>
#include<cstdlib>
#include<limits>
#include<sstream>
#include <ctime>
#include<string>
#include <cstring>
#include<fstream>
using namespace std;
void display()  // display function
{
	cout<<"\t\t\t\t***********************************************************"<<endl;
	cout<<"\t\t\t\t\t\tWelcome to a password Generator. "<<endl;
	cout<<"\t\t\tHere you can generate a password for any platfrom at different security levels. "<<endl;
	cout<<"\t\t\t*******************                                         *******************"<<endl<<endl;
}
int main()
{
	int program,length,command,index,x,y,j,k,z;
	string filename;
	char run,o;
	char array[length],array2[8];
	char library[150]={'Q','W','$','E','R','T','Y','U','I','@','&','!','?','!','@','#','$','%','&','*','(',')','~','.','/','O','P','A','S','D','F','G','H','J','$','K','1','2','3','4','5','6','7','8','@','&','!','?','9','0','L','Z','X','$','C','V','B','2','N','M','$','$','1','2','3','4','5','6','7','8','9','0','@','&','!','?','q','w','e','3','r','t','y','u','i','o','p','$','a','s','d','f','g','5','$','$','h','j','k','@','&','!','?','l','z','x','c','!','@','#','$','%','&','*','(',')','~','.','/','v','b','n','m','$','1','2','3','@','&','!','?','4','$','5','6','7','8','9','0'};	
	char password[8];
	char cap[26]={'Q','W','E','R','T','Y','U','I','O','P','A','S','D','F','G','H','J','K','L','Z','X','C','V','B','N','M'};
	char nums[10]={'1','2','3','4','5','6','7','8','9','0'};
	char symbols[12]={'!','@','#','$','%','&','*','(',')','~','.','/'};
	int strength,strength2,strength3;
	string finalstrength;
	display();
	srand((unsigned int)time(NULL));
	cout<<"\t\tChoose Your Desired Tool:\n"<<endl;
	cout<<"\t\tPress 1 For Password Generator."<<endl;
	cout<<"\t\tPress 2 for Strength Tool."<<endl;
	cout<<"\n\t\tUser Choice: ";
	cin>>program;
	if(program==1||program==2)
	{
	system("cls");
	}
	else
	{
	while(program<1||program>2||cin.fail())						//The function that prompts the user that you've entered a wrong value
	{
		cin.clear();											
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		cout<<"\t\tInvalid Entry please Re-enter."<<endl;
		cout<<"\t\tUser Choice: ";
		cin>>program;
		cout<<endl;
	}
	system("cls");
	}
	if(program==1)
	{
	do
	{
		cout<<"\nEnter the length of the password: "<<endl;
		cout<<"User Choice:";
		cin>>length;
		for(int i=0;i<length;i++)  // Random password generator
    	{
    		index= rand() % 114;
    		array[i]=library[index];
		}
	cout<<"\nRandom password: ";
	for(int i=0;i<length;i++)
	{
	cout<<array[i];
	}
	cout<<"\n\nDo you want to save the password:(y/n) "<<endl;
	cout<<"User Choice:";
	cin>>run;
	if(run=='y'||run=='Y')
	{
	ofstream file;						//File Handling
	cout<<"\nEnter Filename: "<<endl;
	cout<<"User Choice:";
	cin>>filename;
	file.open(filename.c_str());
	file<<"Password: "<<endl;
	for(int k=0;k<length;k++)
	{
	file<<array[k]<<" ";
	}
	file.close();						//File Handling End
	system("cls");
	cout<<endl<<"Press 1 to generate | Press 2 to terminate program"<<endl;
    cout<<"User choice:";
	cin>>command;
    while(command<1||command>2||cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		cout<<"Invalid Entry please Re-enter."<<endl;
		cout<<"User Choice: ";
		cin>>command;
		cout<<endl;
	}
    system("cls");
	}
	else if(run=='n'||run=='N')
	{
	system("cls");
	cout<<endl<<"\nPress 1 to generate | Press 2 to terminate program"<<endl;
    cout<<"User choice:";
	cin>>command;
    while(command<1||command>2||cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		cout<<"Invalid Entry please Re-enter."<<endl;
		cout<<"User Choice: ";
		cin>>command;
		cout<<endl;
	}
    system("cls");
	}
	}
	while(command==1);
	}
	else if(program==2)
	{
	do{	cout<<"\nEnter an 8 character password"<<endl;
	for(int i=0;i<8;i++){
	cin>>password[i];}
for(int i=0;i<8;i++)  // Here starts the algorithm to determine password strength
{
	for(int j=0;j<26;j++)
	{
	if(password[i]==cap[j])
	{
		strength=1;
		break;
		
	}}
	if(strength==1){
		break;
	}
}
for(int i=0;i<8;i++){
		for(int j=0;j<10;j++)
	{
	if(password[i]==nums[j])
	{
		strength2=1;
		break;
		
	}
	}
		if(strength2==1){
		break;
	}
	}
for(int i=0;i<8;i++){
		for(int j=0;j<5;j++)
	{
	if(password[i]==symbols[j])
	{
		strength3=1;
		break;
		
	}
	}
		if(strength3==1){
		break;
	}
	}
	
	
		for(int i=0;i<8;i++) // String is being translated into integer here to check for consecutive numbers
{
switch (password[i]) {
        case '1':
          array2[i]=1;
            break;
        case '2':
          array2[i]=2;
            break;
        case '3':
          array2[i]=3;
            break;
        case '4':
          array2[i]=4;
            break;
        case '5':
          array2[i]=5;
            break;
        case '6':
          array2[i]=6;
            break;
        case '7':
          array2[i]=7;
            break;
        case '8':
          array2[i]=8;
            break;
        case '9':
          array2[i]=9;
            break;
        case '0':
          array2[i]=0;
            break;
        default:
          array2[i]=rand() % (20 - 9) + 10;
            break;
}}

	if(strength==1 && strength2==1 && strength3==1) // Strength is being checked from here on
	{
		finalstrength="Very Strong";
	}
	else if (strength==1 && strength2==1 && strength3==0)
	{finalstrength="Strong";}
	else if (strength==1 && strength2==0 && strength3==0)
	{finalstrength="Weak";}
	else if (strength==1 && strength2==0 && strength3==1)
	{finalstrength="Strong";}
	else if (strength==0 && strength2==1 && strength3==0)
	{finalstrength="Weak";}
	else if (strength==0 && strength2==0 && strength3==1)
	{finalstrength="Weak";}
	else if (strength==0 && strength2==1 && strength3==1)
	{finalstrength="Strong";}
	else{finalstrength="Very Weak";}
	for(int i=0;i<6;i++)
{
	j=i+1;
	z=j+1;
	x=array2[j];
	y=array2[z];
	if(x==array2[i]+1 && y==array2[j]+1){
		finalstrength="Weak because of consecutive numbers";
		break;
	
	}
}
	for(int i=0;i<6;i++)
{
	j=i+1;
	z=j+1;
	if(array2[i]==array2[j] && array2[j]==array2[z]){
		finalstrength="Weak because of repetitive numbers";
		break;
	
	}
}

	cout<<"\nStrength: "<<finalstrength<<endl;  // Output of strength checker
	cout<<"Press any button to generate again, 0 to terminate"<<endl;
	cin>>o;
	} while(o!='0');
} 
	cin.get();
	return 0;
}
