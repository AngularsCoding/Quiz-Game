#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	string questions[10] = {
	"Which of the following is Tricontinental Country?",
	"Famous fast food restaurant company Burger King belongs to which Country?",
	"Office of strategic service (OSS) was old name of which Intelligence agency?",
	"The first person to draw the map of earth?",
	"Who laid first step on the Moon?",
	"What is the name of Chinese parliament?",
	"Ogaden desert is present in__________?",
	"Capital of America is___________?",
	"Wadi Rum which resemblance to the surface of Mars is located in__________?",
	"Borneo Island is in which Ocean?"
						};
	string options[10][4] = {
	{"chad","Chile","Mali","Swaziland"},
	{"America","England","Turkey","None of these"},
	{"MI6","CIA","ISI","N.O.T"},
	{"Heraclitus","phythagoras","Anaximander","Thales"},
	{"LMP Edgar","CMP Stuart","Neil Armstrong","None of them"},
	{"National Assembly","National people’s Congress","Fedral parliament","None"},
	{"Europe","Asia","Africa","America"},
	{"Washington Dc","Alaska","Hawaii","California"},
	{"Argentina","Israel","Jordan","Egypt"},
	{"Indian Ocean","Pacific Ocean","Arctic Ocean","Atlantic"},
					    };
	string correctOptions[10] = {
		"Chile","America","CIA","Anaximander",
		"Neil Armstrong","National people’s Congress","Africa",
		"Washington DC","Jordan","Pacific Ocean"
								};
	int userOptions[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int totalQs = 10;	
	int op;

	//----- Conducting Quiz -----
	for( int i=0; i<totalQs; i++ ){
		cout<<"Question # "<<(i+1)<<endl;
		cout<< questions[i]<<endl;
		cout<< "1."<<options[i][0]<<endl;
		cout<< "2."<<options[i][1]<<endl;
		cout<< "3."<<options[i][2]<<endl;
		cout<< "4."<<options[i][3]<<endl<<endl;
		
		cout<<"Select Option (1-4) or 0 to skip and press enter: ";
		cin >> userOptions[i];
		cout<<endl<<"-----------------------------"<<endl<<endl;
	}
	
	//----- Printing Correct Options -----
	cout<<"======= ======= ======= ======= "<<endl;
	cout<<"======= Correct Options ======= "<<endl;
	cout<<"======= ======= ======= ======= "<<endl;

	for( int i=0; i<totalQs; i++ ){
		cout<<"Question # "<<(i+1)<<endl;
		cout<< questions[i]<<endl;
		cout<< "1."<<options[i][0]<<endl;
		cout<< "2."<<options[i][1]<<endl;
		cout<< "3."<<options[i][2]<<endl;
		cout<< "4."<<options[i][3]<<endl;
		
		if( userOptions[i] == 0 ){
			cout<< "You Skipped this Question."<<endl;		
		}else{
			cout<< "You Selected : "<<options[i][userOptions[i]-1]<<endl;		
		}
		cout<< "Correct Option : "<<correctOptions[i]<<endl<<endl;

		cout<<"Press any key to continue..."<<endl;
		getch();
		cout<<endl<<"------------------"<<endl;
	}
	
	//----- Printing Result -----
	cout<<endl<<endl;
	cout<<"======= ======= ======= ======= "<<endl;
	cout<<"=======      Result     ======= "<<endl;
	cout<<"======= ======= ======= ======= "<<endl;

	int correct = 0;
	int incorrect = 0;
	int skipped = 0;
	for( int i=0; i<totalQs; i++ ){
		if( userOptions[i] != 0 ){
			if( correctOptions[i] == options[i][userOptions[i]-1] ){
				correct++;
			}else{
				incorrect++;
			}
		}else{
			skipped++;
		}
	}
	cout<< "Total Questions : "<< totalQs <<endl;	
	cout<< "Correct : "<< correct <<endl;
	cout<< "In-Correct : "<< incorrect <<endl;
	cout<< "Skipped : "<< skipped <<endl;
	
	getch();
	return 0;
}
