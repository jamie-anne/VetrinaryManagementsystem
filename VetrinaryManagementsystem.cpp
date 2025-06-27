//*******************************************************************
// Author: Jamie Anne Banjola
// Section: 1E
// Date: April 24, 2025
// Title: A simple veterinary program for my case study.
//*******************************************************************
#include <iostream>
#include <windows.h>
#include <vector>
using namespace std;

struct Item {
    string name;
    double price;
    int quantity;
};
	void owner();
	void grooming();
	void wellnessMenu();
	void petFoodMenu();
	void mainMenu();
	void billingMenu();

	//owner
	vector<string>ownerName; 
	vector<string>ownerAddress;	
	vector<int>ownerTel;
	vector<string>petName; 
	vector<int>petAge;
	vector<string>petBreed;
	vector<string>petSex;
	vector<string>petCategory;
	vector<string>petColor;
	
	//grooming
	vector<int>fullGroom;
	vector<int>dogBath;
	vector<int>nailCut;
	vector<int>faceTrim;
	vector<int>earCleaning;

	// inventories
	vector<Item> dewormingAndVitamins;
	vector<Item> vaccines;
	vector<Item> petFoodInventory;

	//history
	vector<pair<string, double> > purchaseHistory;

	//billing
	vector<double>amounts;
	//vector<int>final;
	//vector<int>finals;
	double totalBillingAmount = 0;


void mainMenu() {
    int choice;
    cout<<"\t\t\t\t\t\t========================================================="<<endl;
	cout<<"\t\t\t\t\t\t|\tPAWFECT CARE VETERINARY CLINIC\t\t\t|"<<endl;
	cout<<"\t\t\t\t\t\t========================================================="<<endl;
	cout<<"\t\t\t\t\t\t| [ 1 ]   >>  GROOMING SERVICES\t\t\t\t|"<<endl;
	cout<<"\t\t\t\t\t\t| [ 2 ]   >>  WELLNESS\t\t\t\t\t|"<<endl;
	cout<<"\t\t\t\t\t\t| [ 3 ]   >>  PET FOOD\t\t\t\t\t|"<<endl;
	cout<<"\t\t\t\t\t\t| [ 4 ]   >>  BILLING\t\t\t\t\t|"<<endl;
	cout<<"\t\t\t\t\t\t========================================================="<<endl;
	back:
        cout <<"\t\t\t\t\t\tEnter choice: ";
        cin >> choice;

        if (choice == 1) {
        	system("cls");
           grooming();
        } else if (choice == 2) {
        	system("cls");
            wellnessMenu();  
        } else if (choice == 3) {
        	system("cls");
            petFoodMenu();  
        } else if (choice == 4) {
        	system("cls");
            billingMenu(); 
        }else{
        	cout<<"\t\t\t\t\t\t--------- >>  INVALID CHOICE. PLEASE TRY AGAIN.  <<---------"<<endl;
        	goto back;
		}

    } 


void owner(){
	char pro;
	string name,address;
	int tel;
	string pname,breed,sex,category,color;
	int age;
	
	cout<<" ________________________________________________________"<<endl;
	cout<<"|_________OWNER'S INFORMATION____________________________|"<<endl;
	cout<<"Name: ";
	cin.ignore();
	getline(cin,name);
	ownerName.push_back(name);
	cout<<"Address: ";
	cin.ignore();
	getline(cin, address);
	ownerAddress.push_back(address);
	cout<<"Telephone No: ";
	cin>>tel;
	ownerTel.push_back(tel);
	cout<<" "<<endl;

	cout<<" __________________________________________________________"<<endl;
	cout<<"|___PET'S INFORMATION______________________________________|"<<endl;
	cout<<"Name: ";
	cin>>pname;
	petName.push_back(pname);
	cout<<"Age: ";
	cin>>age;
	petAge.push_back(age);
	cout<<"Breed: ";
	cin>>breed;
	petBreed.push_back(breed);
	cout<<"Sex: ";
	cin>>sex;
	petSex.push_back(sex);
	cout<<"Animal Category: ";
	cin>>category;
	petCategory.push_back(category);
	cout<<"Color: ";
	cin>>color;
	petColor.push_back(color);
	
	int screenWidth = GetSystemMetrics(SM_CXSCREEN);
	int screenHeight = GetSystemMetrics(SM_CYSCREEN);
	int boxWidth = 1000;
	int boxHeight= 1000;
	
	int xPos = (screenWidth - boxWidth) / 1;
	int yPos = (screenHeight - boxHeight) / 1;
	
	MessageBox(NULL, "COMPLETED!", "JAM PET CARE",MB_ICONINFORMATION);
	goo:
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<"ENTER [ P ] TO PROCEED ";
	cin>>pro;
	if(pro == 'p'&& 'P'){
	system("cls");
	mainMenu();
	}else{
	cout<<"\t\t\t\t\t\t--------- >>  INVALID INPUT. PLEASE TRY AGAIN.  <<---------"<<endl;
	goto goo;
	}
	}



void grooming(){
	int cho;
	int groom,bath,cut,trim,cleaning;
	char proc;
	char proce;
	groo:
	cout<<"\t\t\t\t\t\t==========================================================="<<endl;
	cout<<"\t\t\t\t\t\t\t\t>>  GROOMING SERVICES  <<  "<<endl;//8
	cout<<"\t\t\t\t\t\t==========================================================="<<endl;
	cout<<"\t\t\t\t\t\t >>   FULL GROOM    "<<endl;
	cout<<"\t\t\t\t\t\t >>   DOG BATH		"<<endl;
	cout<<"\t\t\t\t\t\t >>   NAIL CUT		"<<endl;
	cout<<"\t\t\t\t\t\t >>   FACE TRIM 	"<<endl;
	cout<<"\t\t\t\t\t\t >>   EAR CLEANING	\n";
	goom:
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<"\t\t\t\t\t\tNote: If no items are being purchased, please choose [ NEXT ] to continue."<<endl;
	cout<<" "<<endl;
	cout<<"\t\t\t\t\t\tPRESS [ P ] TO PROCEED ";
	cout<<"\n\t\t\t\t\t\tPRESS [ B ] TO GO BACK  ";
	cin>>proc;
	if(proc == 'p'|| 'P'){
	system("cls");
	}else if(proc == 'b' || 'B'){
		system("cls");
		mainMenu();
	}else{
	cout<<"\t\t\t\t\t\t--------- >>  INVALID INPUT. PLEASE TRY AGAIN.  <<---------"<<endl;
	goto goom;
	}
	fg:
	cout<<" ___________________________________________________________"<<endl;
	cout<<"|___FULL GROOM______________________________________________|"<<endl;
	cout<<"[ 1 ] SMALL       PHP 500"<<endl;
	cout<<"[ 2 ] MEDIUM      PHP 600"<<endl;
	cout<<"[ 3 ] LARGE       PHP 700"<<endl;
	cout<<"[ 4 ] NEXT"<<endl;
	cout<<"Enter a number: ";
	cin>>groom;
	if(groom <=0 || groom>4){
	cout<<"\t\t\t\t\t\t--------- >>  INVALID INPUT. PLEASE TRY AGAIN.  <<---------"<<endl;
	cout<<" "<<endl;
	goto fg;
	}else{
	fullGroom.push_back(groom);	
	}
	
	
	db:
	cout<<" ___________________________________________________________"<<endl;
	cout<<"|___DOG BATH________________________________________________|"<<endl;
	cout<<"[ 1 ] SMALL       PHP 250"<<endl;
	cout<<"[ 2 ] MEDIUM      PHP 300"<<endl;
	cout<<"[ 3 ] LARGE       PHP 500"<<endl;
	cout<<"[ 4 ] NEXT"<<endl;
	cout<<"Enter a number: ";
	cin>>bath;
	if(bath <=0 || bath >4){
	cout<<"\t\t\t\t\t\t--------- >>  INVALID INPUT. PLEASE TRY AGAIN.  <<---------"<<endl;
	cout<<" "<<endl;
	goto db;
	}else{
	dogBath.push_back(bath);	
	}

	nc:
	cout<<" ___________________________________________________________"<<endl;
	cout<<"|___NAIL CUT________________________________________________|"<<endl;
	cout<<"[ 1 ] PURCHASE(any size)         PHP 50"<<endl;
	cout<<"[ 2 ] NEXT"<<endl;
	cout<<"Enter a number: ";
	cin>>cut;
	if(cut <=0 || cut > 2){
	cout<<"\t\t\t\t\t\t--------- >>  INVALID INPUT. PLEASE TRY AGAIN.  <<---------"<<endl;
	cout<<" "<<endl;
	goto nc;
	}else{
	nailCut.push_back(cut);	
	}
	
	ft:	
	cout<<" ___________________________________________________________"<<endl;
	cout<<"|___FACE TRIM_______________________________________________|"<<endl;
	cout<<"[ 1 ] PURCHASE(any size)         PHP 50"<<endl;
	cout<<"[ 2 ] NEXT"<<endl;
	cout<<"Enter a number: ";
	cin>>trim;
	if(trim <=0 || trim > 2){
	cout<<"\t\t\t\t\t\t--------- >>  INVALID INPUT. PLEASE TRY AGAIN.  <<---------"<<endl;
	cout<<" "<<endl;
	goto ft;
	}else{
	faceTrim.push_back(trim);	
	}
	
	ec:	
	cout<<" ___________________________________________________________"<<endl;
	cout<<"|___EAR CLEANING____________________________________________|"<<endl;
	cout<<"[ 1 ] PURCHASE(any size)         PHP 100"<<endl;
	cout<<"[ 2 ] NEXT"<<endl;
	cout<<"Enter a number: ";
	cin>>cleaning;
	if(cleaning <=0 || cleaning > 2){
	cout<<"\t\t\t\t\t\t--------- >>  INVALID INPUT. PLEASE TRY AGAIN.  <<---------"<<endl;
	cout<<" "<<endl;
	goto ec;
	}else{
	earCleaning.push_back(cleaning);	
	}
	
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	goob:
	cout<<" ENTER [ B ] TO GO BACK TO THE MENU ";
	cin>>proce;
	if(proce == 'b'&& 'B'){
	system("cls");
	mainMenu();
	}else{
	cout<<"\t\t\t\t\t\t--------- >>  INVALID INPUT. PLEASE TRY AGAIN.  <<---------"<<endl;
	goto goob;
	}
	}

void addItem(vector<Item>& inventory) {
    Item item;
    cout<<" ____________________________________________________________"<<endl;
	cout<<"|___ADD ITEM_________________________________________________|"<<endl;
    cout << "Enter item name: ";
    cin.ignore(); 
    getline(cin, item.name);
    cout << "Enter price: ";
    cin >> item.price;
    cout << "Enter quantity: ";
    cin >> item.quantity;
    inventory.push_back(item); 
    cout << "Item added successfully.\n";
}


void viewInventory(vector<Item>& inventory) {
    if (inventory.empty()) {
        cout << "Inventory is empty.\n";
        return;
    }
    cout<<" ___________________________________________________________"<<endl;
	cout<<"|___SHOW ITEM_______________________________________________|"<<endl;
    for (int i = 0; i < inventory.size(); i++) {
        cout << i + 1 << ". " << inventory[i].name
             << " | Price: " << inventory[i].price
             << " | Quantity: " << inventory[i].quantity << "\n";
    }
}


void purchaseItem(vector<Item>& inventory) {
    if (inventory.empty()) {
        cout << "Inventory is empty.\n";
        return;
    }
    string itemName;
    int qty;
    int price;
    cin.ignore();  
     cout<<"____________________________________________________________"<<endl;
	cout<<"|___BUY ITEM_________________________________________________|"<<endl;
    cout << "Enter item name to purchase: ";
    getline(cin, itemName);

    for (int i = 0; i < inventory.size(); i++) {
        if (inventory[i].name == itemName) {
            cout << "Enter quantity to purchase: ";
            cin >> qty;
            if (qty > inventory[i].quantity) {
                cout << "Not enough stock.\n";
            } else {
                inventory[i].quantity -= qty; 
                double total = qty * inventory[i].price; 
                purchaseHistory.push_back({inventory[i].name, total});  
                totalBillingAmount += total;  
                cout << "Purchase successful. " << inventory[i].name << " | Quantity: " << qty << " | Total: " << total << "\n";
            }
            return;
        }
    }
    cout << "Item not found.\n";
}

// Menu for the wellness section (Deworming + Vitamins and Vaccines)
void wellnessMenu() {
    int choice;
    do {
    cout<<"\t\t\t\t\t\t==========================================================="<<endl;//6
	cout<<"\t\t\t\t\t\t\t\t\t>>  WELLNESS  <<  "<<endl;//8
	cout<<"\t\t\t\t\t\t==========================================================="<<endl;
    cout<<"\t\t\t\t\t\t| [ 1 ]   >>  DEWORMING + VITAMINS\t\t\t  |"<<endl;
	cout<<"\t\t\t\t\t\t| [ 2 ]   >>  VACCINES\t\t\t\t\t  |"<<endl;
	cout<<"\t\t\t\t\t\t|\t\t\t\t\t\t\t  |"<<endl;
	cout<<"\t\t\t\t\t\t| [ 3 ]   >>  BACK\t\t\t\t\t  |"<<endl;
    cout<<"\t\t\t\t\t\tEnter choice: ";
    cin >> choice;
	system("cls");
    if (choice == 1) {
        int subChoice;
        do { 
		cout<<" ____________________________________________________________"<<endl;
		cout<<"|___DEWORMING + VITAMINS_____________________________________|"<<endl;
            cout << "[ 1 ] ADD ITEM"<<endl;
            cout << "[ 2 ] SHOW ITEM"<<endl;;
            cout << "[ 3 ] BUY ITEM"<<endl;
            cout << "[ 4 ] BACK"<<endl;
            cout << "Enter choice: ";
            cin >> subChoice;

            if (subChoice == 1) addItem(dewormingAndVitamins);
            else if (subChoice == 2) viewInventory(dewormingAndVitamins);
            else if (subChoice == 3) purchaseItem(dewormingAndVitamins);
            else if (subChoice == 4){
            	system("cls");
            	wellnessMenu();
			}
            }while (subChoice != 4);
        } 
		
		else if (choice == 2) {
            int subChoice;
            do {
            cout<<" __________________________________________________________"<<endl;
			cout<<"|___VACCINES_______________________________________________|"<<endl;
            cout << "[ 1 ] ADD ITEM"<<endl;
            cout << "[ 2 ] SHOW ITEM"<<endl;;
            cout << "[ 3 ] BUY ITEM"<<endl;
            cout << "[ 4 ] BACK"<<endl;
            cout << "Enter choice: ";
            cin >> subChoice;

            if (subChoice == 1) addItem(vaccines);
            else if (subChoice == 2) viewInventory(vaccines);
            else if (subChoice == 3) purchaseItem(vaccines);
			else if (subChoice == 4){
				system("cls");
				wellnessMenu();
			}

			} while (subChoice != 4);
        	}
        
        else if(choice == 3){
        	system("cls");
			mainMenu();
			}

   			 } while (choice != 3);
}


void petFoodMenu() {
    int choice;
    
    cout<<"\t\t\t\t\t\t==========================================================="<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t>>  PETFOOD  <<  "<<endl;//8
	cout<<"\t\t\t\t\t\t==========================================================="<<endl;
	do{
		
	cout<<" __________________________________________________________"<<endl;
	cout<<"|___PETFOOD MENU___________________________________________|"<<endl;
        cout << "[ 1 ] ADD ITEM"<<endl;
        cout << "[ 2 ] SHOW ITEM"<<endl;;
        cout << "[ 3 ] BUY ITEM"<<endl;
        cout << "[ 4 ] BACK"<<endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) addItem(petFoodInventory);
        else if (choice == 2) viewInventory(petFoodInventory);
        else if (choice == 3) purchaseItem(petFoodInventory);
        else if(choice ==4){
        	system("cls");
        	mainMenu();
		}
    } while (choice != 4);
}

	
	void exit(){
		char p;
		
		//std::cout<<R"( 	)"<<std::endl;
		
		std::cout<<R"(
	 /$$$$$$$$ /$$                           /$$             /$$     /$$                         /$$$$$$                  /$$      /$$                     /$$       /$$
	|__  $$__/| $$                          | $$            |  $$   /$$/                        /$$__  $$                | $$$    /$$$                    | $$      | $$
	   | $$   | $$$$$$$   /$$$$$$  /$$$$$$$ | $$   /$$       \  $$ /$$//$$$$$$  /$$   /$$      | $$  \__/  /$$$$$$       | $$$$  /$$$$ /$$   /$$  /$$$$$$$| $$$$$$$ | $$
	   | $$   | $$__  $$ |____  $$| $$__  $$| $$  /$$/        \  $$$$//$$__  $$| $$  | $$      |  $$$$$$  /$$__  $$      | $$ $$/$$ $$| $$  | $$ /$$_____/| $$__  $$| $$		
	   | $$   | $$  \ $$  /$$$$$$$| $$  \ $$| $$$$$$/          \  $$/| $$  \ $$| $$  | $$       \____  $$| $$  \ $$      | $$  $$$| $$| $$  | $$| $$      | $$  \ $$|__/
	   | $$   | $$  | $$ /$$__  $$| $$  | $$| $$_  $$           | $$ | $$  | $$| $$  | $$       /$$  \ $$| $$  | $$      | $$\  $ | $$| $$  | $$| $$      | $$  | $$    
	   | $$   | $$  | $$|  $$$$$$$| $$  | $$| $$ \  $$          | $$ |  $$$$$$/|  $$$$$$/      |  $$$$$$/|  $$$$$$/      | $$ \/  | $$|  $$$$$$/|  $$$$$$$| $$  | $$ /$$
	   |__/   |__/  |__/ \_______/|__/  |__/|__/  \__/          |__/  \______/  \______/        \______/  \______/       |__/     |__/ \______/  \_______/|__/  |__/|__/
		)"<<std::endl;
		
		
		 std::cout << R"(              
                                        ...:..                                                      
                                     .=%@@@@@@*.                                                    
                                     .@@@@@@@@@%:.                                                  
                                     :@@@@@@@@@@@%*-.   .:..                                       		Developed by: 
                                    .#@@@@@@@@@@@@@*....+@@#:.                                     				       Jamie Anne Banjola 
                                   .+@@@@@@@@@@@@@#:. *@@@@@@#.                                     					
                                 .:#@@@@@@@@@=---:   +@@@@@@@@%.                                    					
                               .:%@@@@@@@@@@@:       %@@@@@@@@@*                                    					
                              .@@@@@@@@@@@@@@:        :-@@@@@@@%:                                   					
                            .%@@@@@@@@@@@@@@@*         .*@@@@@@@@@@@@@:                             
                        ..:#@@@@@@@@@@@@@@@@@@         :@@@@@@@@@@@@@@@@=                           
                        .%@@@@@@@@@@@@@@@@@@@@         :@@@@@@@@@@@@@@@@@+.                         
                      .*@@@@@@@@@@@@@@@@@@@@@:         :%@@@@@@@@@@@@@@@@@-.    ....                
               .     :@@@@@@@@@@@@@@@@@@@@@+.           -@@@@@@@@@@@@@@@@@+.     =@+.               
              .%    :%@@@@@@@@@@@@@@@@@@@@+.             :#@@@@@@@@@@@@@@@%:.     +@:               
              ##   .*@@@@@@@@@@@@@@@@@@@@#.               .#@@@@@@@@@@@@@@@-.     =@+               
              #@.  .#@@@@@@@@@@@@@@@@+@@@*                 =@@%-@@@@@@@@@@@=.   ..*@=               
              =@%: .*@@@@@@@@@@@@@@#:.#@@*                 +@@::*@@@@@@@@@@=.  .:#@%.               
              .*@@*:=@@@@@@@@@@@@@+...+@@*                 *@#. .*@@@@@@@@@+==#@@@#:.               
                -#@@@@@@@@@@@@@@@@@@@*=@@%+:             .-%@: .-+*@@@@@@@@@@@#*=:.                 
                 ..:=++**********+++*+.+**+:             -+*-. .-===---:.....                       



-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
)" << std::endl;





		/*std::cout << R"(
																				.....:=++-:.                                  
															                    .:%@%@%@%%%%%%*.                                
															                    -%%%%%%%%%%%%%%%%%:.                            
															                  .*@%%%%%%%%%%%%%%%%@@-                            
															                .*%%%%%%%%%%%%%%%%%%%%%-                            
															                :%%%%%%%%%%%%%%%%%%%%%%+.                           
															                .:%%%%%%%%%%%%%%%%%%%%%%=                           
															                  .%@%:%%%%%%%%%%%%%%%%%#.                          
															                  .+%:.%%%%%%%%%%#%%%@%*..                          
															                   ....%%%%%%%%%%=#%%....        ...                
															                     .%%%%%%%%%%%%**             =%#.               
															                    .+%%%%%%%%%%%%#.       ..   .*%%+.              
															                    :@@%%%%%%%%%%%%=       #%#+%@%%%%:              
															                   .+%%%%%%%%%%%%%%#        #%%%%%%%%%.             
															                   .#%%%%%%%%%%%%%%%         %%%%%%%%%:             
															                    .#%%%%%%%%%%%%%%%         +%%%%%%%%.             
															                    .%@%%%%%%%%%%%%%%.        .@%%%%%%%*.            
														                  	   .#%%%%%%%%%%%%%%%.        .@%%%%%%%%:     ..     
															                    *%%%%%%%%%%%%%%#.        :%%%%%%%%%=    .=%%.   
														                     ...=@%%%%%%%%%%%%%*...     .*%%%%%%%%%%-. .+@%..   
															                :%%%%%%%%%%%%%%%%%%%%%%@@=   -@%%%%%%%%%%%. .%%..    
															                *%%%%%%%%%%%%%%%%%%%%%%%@#. .%%%%%%%%%%%%@%.:@%.     
															                -@%%%%%%%%%%%%%%%%%%%%%%@+  *@%%%%%%%%%%%%@+.%%.     
														                     =%@%%%%%%%%%%%%%%%%%%%@#...%@%%%%%%%%%%%%@%.%%:     
															                 .-%%@%%%%%%%%%%%%%%%%%#.  .%%%%%%%%%%%%%%%#:%@:     
															                   .#%%%%%%%%%%%%%%%%%-.  ..%%%%%%%%%%%%%%%*#%%.     
															     ....=*%@@@@%*+:.*@%%%%%%%%%%%%%%....   #@%%%%%%%%%%%%%%@%-.     
															 ..:*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%-.  .*%%%%%%%%%%%%%@*.   
					              
)" << std::endl;*/
cout<<"\t\t"<<endl;
cout<<"\t\t"<<endl;
cout<<"\t\t"<<endl;
cout<<"\t\t"<<endl;
cout<<"\t\t"<<endl;

	pres:
	cout<<"PRESS [ E ] TO EXIT"<<endl;
	cin>>p;
	if(p == 'E' || p == 'e'){
		return;
		}
	else{
		goto pres;
	}
	}

void billingMenu() {

    int amount,totalofGrooming=0;
    int final, payment ,finalPayment=0;
    char p;
    int i=0;
    cout<<"\t\t\t\t\t\t========================================================="<<endl;
	cout<<"\t\t\t\t\t\t|\tPAWFECT CARE VETERINARY CLINIC\t\t\t|"<<endl;
	cout<<"\t\t\t\t\t\t========================================================="<<endl;
    cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;

    cout<<" __________________________________________________________"<<endl;
	cout<<"|___TRANSACTION INFORMATION________________________________|"<<endl;
	cout<<">>  Owner's Information  <<"<<endl;
	cout<<"Name: "<< ownerName[i]<<endl;
	cout<<"Contact: "<<ownerTel[i]<<endl;
	cout<<"Address: "<<ownerAddress[i]<<endl;
	cout<<" "<<endl;
	cout<<">>  Pet's Information  <<"<<endl;
	cout<<"Name: "<< petName[i]<<endl;
	cout<<"Age: "<<petAge[i]<<endl;
	cout<<"Breed: "<<petBreed[i]<<endl;
	cout<<"Sex: "<< petSex[i]<<endl;
	cout<<"Category: "<<petCategory[i]<<endl;
	cout<<"Color: "<<petColor[i]<<endl;
	cout<<" "<<endl;
	
	cout<<"------>> GROOMING SERVICES <<--------------------------------"<<endl;
	int totalPets = 1;
	for(int j=0;j<totalPets;j++){
	//FULL GROOM
    if(fullGroom[i] == 1){
			cout<<"Full Groom (Small)\t\t500"<<endl;
			amount = 500;
			amounts.push_back(amount);
			totalofGrooming += amount;	
		}else if(fullGroom[i] == 2){
			cout<<"Full Groom (Medium)\t\t600"<<endl;
			amount=600;
			amounts.push_back(amount);
			totalofGrooming += amount;
		}else if(fullGroom[i] ==3){
			cout<<"Full Groom (Large)\t\t700"<<endl;
			amount=700;
			amounts.push_back(amount);
			totalofGrooming += amount;
		}/*else{
			cout<<" "<<endl;
			tot=0;
			tots.push_back(tot);
			totall += tot;}*/
			
	//DOG BATH
    if(dogBath[i] == 1){
			cout<<"Dog Bath (Small)\t\t250"<<endl;
			amount=250;
			amounts.push_back(amount);
			totalofGrooming += amount;
		}else if(dogBath[i] == 2){
			cout<<"Dog Bath (Medium)\t\t300"<<endl;
			amount=300;
			amounts.push_back(amount);
			totalofGrooming += amount;
		}else if(dogBath[i] ==3){
			cout<<"Dog Bath (Large)\t\t500"<<endl;
			amount=500;
			amounts.push_back(amount);
			totalofGrooming += amount;
		}
		
	//NAIL CUT
    if(nailCut[i] == 1){
			cout<<"Nail Cut\t\t\t50"<<endl;
			amount=50;
			amounts.push_back(amount);
			totalofGrooming += amount;
		}else{
			cout<<" "<<endl;
			amount=0;
			amounts.push_back(amount);
			totalofGrooming += amount;
}
	//FACE TRIMMING
    if(faceTrim[i] == 1){
			cout<<"Face Trim\t\t\t50"<<endl;
			amount=50;
			amounts.push_back(amount);
			totalofGrooming += amount;
		}
			
	//EAR CLEANING
    if(earCleaning[i] == 1){
			cout<<"Ear Cleaning\t\t\t100"<<endl;
			amount=100;
			amounts.push_back(amount);
			totalofGrooming += amount;
		}
		
	cout<<" "<<endl;
	cout<<"TOTAL: "<< totalofGrooming<<endl;
	cout<<" "<<endl;
	
	
	
	cout<<"------>> WELLNESS AND PETFOOD <<-----------------------------"<<endl;
	if (purchaseHistory.empty()) {
        cout<<"---------------- >>  NO PURCHASE MADE YET  <<----------------"<<endl;
    }
	double totalofWellnessandPF = 0;
    for (int i = 0; i < purchaseHistory.size(); i++) {
    cout << purchaseHistory[i].first << "\t\t\t\t" << purchaseHistory[i].second << "\n";
    totalofWellnessandPF += purchaseHistory[i].second;
   	cout<<" "<<endl;

}
		cout << "TOTAL: " << totalofWellnessandPF << "\n";
	cout<<" "<<endl;
	cout<<"-------------------------------------------------------------"<<endl;
	cout<<" "<<endl;
	final = totalofWellnessandPF + totalofGrooming;
	cout<<"TOTAL: "<< final;
	pay:
	cout<<"\nPAYMENT: ";
	cin>>payment;
	if(payment < final){
	cout<<"----------------- >>  INSUFFICIENT PAYMENT  <<-----------------"<<endl;
	goto pay;
	}else{
		finalPayment= payment-final;
		cout<<"CHANGE: "<<finalPayment;
	}
	//j
	press:
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<"\nPRESS [ P ] TO PROCEED"<<endl;
	cin>>p;
	if(p == 'p' || p == 'P'){
	cout<<" "<<endl;
	system("cls");
	exit();}
	else{
		goto press;
	}
	}
}

  int main(){
	string name;
	int pin;	
	int attempts = 3;
	char p;
	std::cout << R"(

   +---------------------------------------------------------------------------------------------------------------------------------------------------+
   |     ____                 __           _      ____                __     __   _            _                           ____ _ _       _            |
   |    |  _ \ __ ___      __/ _| ___  ___| |_   / ___|__ _ _ __ ___  \ \   / /__| |_ ___ _ __(_)_ __   __ _ _ __ _   _   / ___| (_)_ __ (_) ___       |
   |    | |_) / _` \ \ /\ / / |_ / _ \/ __| __| | |   / _` | '__/ _ \  \ \ / / _ \ __/ _ \ '__| | '_ \ / _` | '__| | | | | |   | | | '_ \| |/ __|      |
   |    |  __/ (_| |\ V  V /|  _|  __/ (__| |_  | |__| (_| | | |  __/   \ V /  __/ ||  __/ |  | | | | | (_| | |  | |_| | | |___| | | | | | | (__       |
   |    |_|   \__,_| \_/\_/ |_|  \___|\___|\__|  \____\__,_|_|  \___|    \_/ \___|\__\___|_|  |_|_| |_|\__,_|_|   \__, |  \____|_|_|_| |_|_|\___|      |
   |                                                                                                              |___/                                |
   +---------------------------------------------------------------------------------------------------------------------------------------------------+
)"<< std::endl;
 



	cout<<"\t\t\t\t\t\t_______USER LOGIN_______________________________________________"<<endl;
	namm:
	cout<<"\t\t\t\t\t\tName: ";
	cin>>name;
		if (name == "jamie" || name=="JAMIE" || name=="Jamie" ){
		}else {
		cout<<"\t\t\t\t\t\t------------------- >>  NAME NOT FOUND  <<-------------------"<<endl;
		goto namm;
		system ("cls");
		}
	
	pi:
	while (attempts > 0 ){
	cout<<"\t\t\t\t\t\tPin: ";
	cin>>pin;
		if (pin == 1234){
			system("cls");
			owner();
			return 0;
		}else {
		attempts--;
		cout<<"\t\t\t\t\t\t------------------- >>  INCORRECT PIN  <<-------------------"<<endl;
		cout<<"\t\t\t\t\t\tRemaining attempts: "<<attempts<<endl;
		cout<<" "<<endl;
		goto pi;
		}
}
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<"\t\t\t\t\t\t----- >>  SYSTEM LOCKED DUE TO TOO MANY FAILED ATTEMPTS  <<-----"<<endl;
	return 0;
/*	cout<<" "<<endl;
	press:
	cout<<"***************PRESS [ E ] TO EXIT***************"<<endl;
	cin>>p;
	if(p == 'E'){
	return 0;}
	else if(p == 'e'){
	return 0;
	}else{
		goto press;
	}
*/

    return 0;
}
