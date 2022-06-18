// CAR RENTAL SYSTEM :

/*Including all the header files*/
#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<fstream>
#include<time.h>
#include<string.h>
using namespace std;

struct Cars{
    string comp[10] = {"BMW", "Mercedes", "Hyundai", "Mahindra", "Tata", "Tesla", "Skoda", "Fiat", "Ford"};

    string model[10] = {"2016MD", "2018DS", "2016LA", "2018DK", "2018AS", "2005PS", "2008PW", "2019QW", "2020SA"};

    string color[10] = {"Red", "Black", "White", "Grey", "Yellow", "Green", "Silver", "Blue", "Brown"};

    string speed[10] = {"150 Km/h", "160 Km/h", "200 Km/h", "170 Km/h", "180 Km/h", "190 Km/h", "220 Km/h", "215 Km/h", "195 Km/h" };
    int price[10] = {100, 200, 300, 500, 400, 450, 699, 999, 700};

    int date[10] = {2010, 2012, 2013, 2014, 2015, 2016, 2017, 2018, 2019, 2021};
};
struct Customer{

    string name[10];
    int payment_acc[10];

};

Cars car;
Customer cust;

void details(int choice){
    system("CLS");
    cout<<"\n\n\n\t\t\t-----------------------\n";
    cout<<"\t\t\t You have selected -"<<car.comp[choice-1]<<endl;
    cout<<"\t\t\t-------------------------\n\n\n";
    cout<<"\t\t\tModel: "<<car.model[choice-1]<<endl;
    cout<<"\t\t\tColor: "<<car.color[choice-1]<<endl;
    cout<<"\t\t\tTop Speed: "<<car.speed[choice-1]<<endl;
    cout<<"\t\t\tPrice: "<<car.price[choice-1]<<endl;

}

// Check Customer Credit 

void check(int j){
    if(cust.payment_acc[j] >= car.price[j])
        cout<<"\n\n\n\t\t\tProcess has been done succesfully!"<<endl;

    else
        cout<<"\n\n\n\t\t\tNot Available";
}

// Payment checking
void user_input(int choice){
    int j=choice-1;
    cout<<"\t\t\t---------------------------------\n";
    cout<<"\t\t\t PLEASE ENTER YOUR PERSONAL DETAILS    :\n";
    cout<<"\t\t\t---------------------------------\n\n";
    cout<<"\n\tPROVIDE YOUR FIRST NAME ONLY\n\tPAYMENT WON'T PROCEED IF THE GIVEN AMOUNT IS LESS THAN THE RATE OF THE CAR!\n\n\n";
    cout<<"\t\t\tEnter Your Name ";
    cin>>cust.name[j];
    cout<<"\t\t\t Payment Amount:";
    cin>>cust.payment_acc[j];

    check(j);
}
int main(){
    int choice;

    string decide = "yes";
    cout<<"---------------------------------------------------\n \tCAR RENTAL SYSTEM \n \tWelcome To Our Company\n---------------------------------------------------"<<endl;
    cout<<"---------------MENU-------------------"<<endl;
    cout<<"Enter 1 to Select- BMW\nEnter 2 to select- Mercedes\nEnter 3 to select- Hyundai\nEnter 4 to select- Mahindra\nEnter 5 to select- Tata\nEnter 6 to select- Tesla\nEnter 7 to select- Skoda\nEnter 8 to select- Fiat\nEnter 9 to select- Ford\n";
 while (decide!="exit"){
    // menu();
    cout<<"Enter your choice :"<<endl;
    cin>>choice;
    details(choice);
    cout<<"Are you sure you want to rent this car?(yes/no/exit):";
    cin>>decide;

    if(decide == "yes"){
        user_input(choice);
        cout<<"\n\n\t\t\t Do you want to continue?(yes/no)";
        cin>>decide;
    if(decide=="no")
        break;
    system("CLS");
 }

 else{
    if(decide == "no"){
    system("CLS");
    continue;
 }
 else if(decide == "exit"){
    system("CLS");
    cout<<"Thank you! Visit Again"<<endl;
    break;
 }
 }
 }

 return 0;
}  
