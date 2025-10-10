#include<iostream>
#include<fstream>
#include<string>
using namespace std;

// Function prototypes
void login();
void Booking();
void search();
void information();
void info();
void logout();

// Login page
void login() {
    string user, password;
    do {
        cout << "\n<<<<<<<<<< Moon Hotel System >>>>>>>>> \n";
        cout << "Enter your Username: ";
        cin >> user;
        if (user == "Nimali") {
            cout << "Enter your password: ";
            cin >> password;
            if (password == "1122") {
                Booking();
            }
            else {
                cout << "Incorrect password. Please try again." << endl;
            }
        }
        else {
            cout << "Incorrect username. Please try again." << endl;
        }
    } while (user != "Nimali" || password != "1122");
}

// Booking process after login
void Booking() {
    string i;
    cout << "\n1. Available Rooms and Booking process." << endl;
    cout << "2. Display Booked Rooms." << endl;
    cout << "3. Logout." << endl;
    cout << "Choose an option: ";
    cin >> i;
    if (i == "1") {
        search();
    }
    else if (i == "2") {
        info();
    }
    else {
        logout();
    }
}

// Room selection
void search() {
    string num,x;
	int rooms,total;
	int num1[15]={10,20,30,40,50,60,70,80,90,100,200,300,400,500,600};
	int price[10]={1000,1500,2000,2500,3000,3500};
    information();
	
	cout<<"Welcome to Moon Hotel System "<<endl;
	cout<<"Moon Hotel Available Rooms"<<endl;
	cout<<"1.Single Rooms"<<endl;
	cout<<"Per Room - "<<price[0]<<endl;
	cout<<endl;
	cout<<"2.double Rooms"<<endl;
	cout<<"Per Room - "<<price[1]<<endl;
	cout<<endl;
	cout<<"3.Twin Rooms"<<endl;
	cout<<"Per Room - "<<price[2]<<endl;
	cout<<endl;
	cout<<"4.Family Rooms"<<endl;
	cout<<"Per Room - "<<price[3]<<endl;
	cout<<endl;
	cout<<"5.Standard Rooms"<<endl;
	cout<<"Per Room - "<<price[3]<<endl;
	cout<<endl;
	cout<<"6.Deluxe Rooms"<<endl;
	cout<<"Per Room - "<<price[4]<<endl;
	cout<<endl;
	cout<<"7.A/C Rooms"<<endl;
	cout<<"Per Room - "<<price[5]<<endl;
	cout<<endl;
	cout<<"8.non A/C Rooms"<<endl;
	cout<<"Per Room - "<<price[4]<<endl;
	cout<<endl;
	
	cout<<"Which Room do you want: ";
	cin>>rooms;

		switch(rooms){
		
		case 1:
			system("cls");
			cout<<"You choosed Single Room";
			cout<<"Rooms availables"<<endl;
			cout<<num1[0]<<endl;
			cout<<num1[1]<<endl;
			cout<<"How many Rooms do you want: ";
			cin>>num;
			
			if (num=="1"){
				cout<<"which room do you want: ";
				cin>>x;
    
                if (x=="10" || x=="20"){
                    system("cls");
                    cout<<"You choosed "<<x<<endl;
                    cout<<"Your bill amount is "<<price[0]<<"/="<<endl;
                    cout<<endl;
                    information();
                    logout();
                }
            }
			
			if (num=="2"){
				total=price[0]+price[0];
				system("cls");
				cout<<"your Rooms"<<endl;
				cout<<num1[0]<<endl;
				cout<<num1[1]<<endl;
				cout<<endl;
				cout<<"Your bill amount is "<<total<<"/="<<endl;
				cout<<endl;
				information();
		        logout();
		    }
			else 
			{
				cout<<"You entered the wrong value"<<endl;
				system("cls");
				search();
			}
			

		case 2:
			system("cls");
			cout<<"You choosed Double Room";
			cout<<"Rooms availables"<<endl;
			cout<<num1[2]<<endl;
			cout<<num1[3]<<endl;
			cout<<"How many Rooms do you want: ";
			cin>>num;
			if (num=="1"){
				cout<<"which room do you want: ";
				cin>>x;
    
			if (x=="30" || x=="40"){
                system("cls");
                cout<<"You choosed "<<x<<endl;	
                cout<<"Your bill amount is "<<price[1]<<"/="<<endl;
                cout<<endl;
                information();
                logout();
            }
        }
            else 
			{
			}
			if (num=="2"){
				total=price[1]+price[1];
				system("cls");
				cout<<"your Rooms"<<endl;
				cout<<"============="<<endl;
				cout<<num1[2]<<endl;
				cout<<num1[3]<<endl;
				cout<<"Your bill amount is "<<total<<"/="<<endl;
				cout<<endl;
				information();
		        logout();

		}
			else 
			{
				cout<<"You entered the wrong value"<<endl;
				system("cls");
				search();
			}

			break;
			
		case 3:
			system("cls");
			cout<<"You choosed Twin Room";
			cout<<"Rooms availables"<<endl;
			cout<<num1[4]<<endl;
			cout<<num1[5]<<endl;
			cout<<"How many Rooms do you want: ";
			cin>>num;
			if (num=="1"){
				cout<<"which room do you want: ";
				cin>>x;
    
			if (x=="50" || x=="60"){
			    system("cls");
			    cout<<"You choosed "<<x<<endl;
		        cout<<"Your bill amount is "<<price[2]<<"/="<<endl;
		        cout<<endl;
		        information();
		        logout();	
        }
        }
            else 
			{
			}
			if (num=="2"){
				total=price[2]+price[2];
				system("cls");
				cout<<"your Rooms"<<endl;
				cout<<num1[4]<<endl;
				cout<<num1[5]<<endl;
				cout<<"Your bill amount is "<<total<<"/="<<endl;
				cout<<endl;
				information();
		        logout();

		}
			else 
			{
				cout<<"You entered the wrong value"<<endl;
				system("cls");
				search();
			}

			break;
			
		case 4:
			system("cls");
			cout<<"You choosed Family Room";
			cout<<"Rooms availables"<<endl;
			cout<<num1[6]<<endl;;
			cout<<"How many Rooms do you want: ";
			cin>>num;
			if (num=="1"){
				system("cls");
				cout<<"your Room"<<endl;
				cout<<"============"<<endl;
				cout<<num1[6]<<endl;
				cout<<"Your bill amount is "<<price[3]<<"/="<<endl;
				cout<<endl;
				information();
		        logout();
			}
			else {
				cout<<"You entered the wrong value"<<endl;
				system("cls");
				search();
			}
			break;
			
		case 5:
			system("cls");
			cout<<"You choosed Standard Room";
		    cout<<"Rooms availables"<<endl;
			cout<<num1[7]<<endl;
			cout<<"How many Rooms do you want: ";
			cin>>num;
			if (num=="1"){
				system("cls");
				cout<<"your Room"<<endl;
				cout<<num1[7]<<endl;
				cout<<"Your bill amount is "<<price[3]<<"/="<<endl;
				cout<<endl;
				information();
		        logout();

			
			}
			else {
				cout<<"You entered the wrong value"<<endl;
				system("cls");
				search();
			}
			break;
			
		case 6:
			system("cls");
			cout<<"You choosed Deluxe Room";
			cout<<"Rooms availables"<<endl;
			cout<<num1[8]<<endl;
			cout<<"How many Rooms do you want: ";
			cin>>num;
			if (num=="1"){
				system("cls");
				cout<<"your Room"<<endl;
				cout<<num1[8]<<endl;
				cout<<"Your bill amount is "<<price[4]<<"/="<<endl;
				cout<<endl;
				information();
		        logout();		
			}
			else {
				cout<<"You entered the wrong value"<<endl;
				system("cls");
				search();
			}
			break;
			
		case 7:
			system("cls");
			cout<<"You choosed A/C Room";
			cout<<"Rooms availables"<<endl;
			cout<<num1[9]<<endl;
			cout<<num1[10]<<endl;
			cout<<"How many Rooms do you want: ";
			cin>>num;
			if (num=="1"){
				cout<<"which room do you want: ";
				cin>>x;
    
			if (x=="70" || x=="80"){
				system("cls");
				cout<<"You choosed "<<x<<endl;
		        cout<<"Your bill amount is "<<price[5]<<"/="<<endl;
		        cout<<endl;
		        information();
		        logout();

        }
        }
            else 
			{
			}
			if (num=="2"){
				total=price[5]+price[5];
				system("cls");
				cout<<"your Rooms"<<endl;
				cout<<num1[9]<<endl;
				cout<<num1[10]<<endl;
				cout<<"Your bill amount is "<<total<<"/="<<endl;
				cout<<endl;
				information();
		        logout();

		}
			else 
			{
				cout<<"You entered the wrong value"<<endl;
				system("cls");
				search();
			}

			break;
			
		case 8:
			system("cls");
			cout<<"You choosed non A/C Room";
		    cout<<"Rooms availables"<<endl;
			cout<<num1[11]<<endl;
			cout<<num1[12]<<endl;
			cout<<"How many Rooms do you want: ";
			cin>>num;
			if (num=="1"){
				cout<<"which room do you want: ";
				cin>>x;
    
			if (x=="90" || x=="100"){
				system("cls");
				cout<<"You choosed "<<x<<endl;
		        cout<<"Your bill amount is "<<price[4]<<"/="<<endl;
		        cout<<endl;
		        information();
		        logout();
        }
        }
            else 
			{
			}
			if (num=="2"){
				total=price[4]+price[4];
				system("cls");
				cout<<"your Rooms"<<endl;
				cout<<num1[11]<<endl;
				cout<<num1[12]<<endl;
				cout<<"Your bill amount is "<<total<<"/="<<endl;
				cout<<endl;
				information();
		        logout(); 
		}
			else 
			{
				cout<<"You entered the wrong value"<<endl;
				system("cls");
				search();
			}

			break;
			
			
			default:
			  search();	
}
}

// Getting information for booking
void information() {
    string name;
	string n,x,I;
	ofstream displayinfo;
	int y,pn,r,total,price;
	
	cout<<"Enter 0 to get the information: ";
	cin>>name;
	
	if (name=="0"){
		cout<<"Notice: No Space"<<endl;
		cout<<"What is your Name?: ";
		cin>>n;
		cout<<"What is your Age?: ";
		cin>>y;
		cout<<"What is your Phone number?: ";
		cin>>pn;
		cout<<"What kind of room are you booking?: ";
		cin>>x;
		cout<<"How many rooms are you booking?: ";
		cin>>r;
		cout<<"enter the room price: "<<endl;
		cout<<"Single=1000,Double=1500,Twin=2000,(Family,Standard=2500),(NonA/C,Deluxe=3000),A/C=3500: ";
		cin>>price;
		total=r*price;
		cout<<"Enter 0 to Book the Room: ";
		cin>>I;
		system("cls");
	    cout<<endl;
		cout<<"you entered information successfully"<<endl;


	displayinfo.open("FIP.txt");
	    if (I=="0"){
	    	displayinfo<<"You Booked Room successfully"<<endl;
	    	cout<<"You Booked Room successfully"<<endl;
		}
		else {
			cout<<"Error with booking process"<<endl;
		}
		
	displayinfo<<"Name: "<<n<<endl;
	displayinfo<<"Age: "<<y<<endl;
	displayinfo<<"Phone number: "<<pn<<endl;
	displayinfo<<"What kind of room are you booking?: "<<x<<endl;
	displayinfo<<"How many rooms are you booking?: "<<r<<endl;
	displayinfo<<"Bill amount is: "<<total<<endl;
	displayinfo.close();
	}
	else {
		information();
		logout();
    }
}

// Display booked rooms information
void info() {
    ifstream displayinfo("FIP.txt");
    if (displayinfo.is_open()) {
        string information;
        cout << "Booked Rooms" << endl;
        while (getline(displayinfo, information)) {
            cout << information << endl;
        }
        displayinfo.close();
    }
    else {
        cout << "Unable to open file for displaying booked rooms." << endl;
    }
}

// Logout function
void logout() {
    string x;
    cout << "Enter 0 to logout: ";
    cin >> x;
    if (x == "0") {
        system("cls");
        cout << "Logged out successfully." << endl;
    }
    else {
        cout << "Error: Invalid input for logout." << endl;
    }
}

// Main function
int main() {
    login();
    return 0;
}
