#include<iostream>
#include<iomanip>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
   int main()
    {   
        void showMenu();
        void showFees(float,int);
        int choice;
        int fixed,showpoint;
        float quantity;
        const int hamburgerChoice=1;
        const int hotdogChoice=2;
        const int peanutsChoice=3;
        const int popcornChoice=4;
        const int sodaChoice=5;
        const int coffeeChoice=6;
   	    const int pastryChoice=7;
 	    const int chipsChoice=8;
   	    const int waterChoice=9;
      	const int endorderChoice=10;

       	const float hamburger=50.00;
    	const float hotdog=40.00;
    	const float peanuts=30.75;
    	const float popcorn=25.50;
   	    const float soda=22.50;
   	    const float coffee=20.75;
   	    const float pastry=17.50;
  	    const float chips=15.00;
 	    const float water=12.00;
 	    cout<<fixed<<showpoint;
 	    
 	    showMenu();
 	    {
 	        cin>>choice;
      	    while(choice<hamburgerChoice||choice>endorderChoice)
      	    {
      	    	cout<<"Please enter a valid menu choice:";
   	 	        cin>>choice;
      	    }
   	        if(choice!=endorderChoice);
   	        {
   	          switch(choice)
    	         {
                      case hamburgerChoice:
                           showFees(hamburger,quantity);
     				         break;
     				  
 		              case hotdogChoice:
   				           showFees(hotdog,quantity);
   				            break;
   				      
 		              case peanutsChoice:
   				            showFees(peanuts,quantity);
   				            break;
   				            
 		               case popcornChoice:
   	 		 	            showFees(popcorn,quantity);
    				        break;
    				        
 		                case sodaChoice:
      	 	 	  	        showFees(soda,quantity);
      	 	 	  	        break;
      	 	 	  	        
 	 	                case coffeeChoice:
   	 	 	                  showFees(coffee,quantity);
  	 	 	                  break;
  	 	 	                  
 		                case pastryChoice:
     				         showFees(pastry,quantity);
     				         break;
 	                	case chipsChoice:
            		  		  showFees(chips,quantity);
            				  break;
            				  
 	                	case waterChoice:
   	            			   showFees(water,quantity);
   	            			   break;
    	         }

              }

        }

         return 0;
    }
    
    void showMenu()
    {
 	 	while(choice != 10)
		{
			cout<< "\n\t\tRAHUL CAFE SNACKS"<<endl;
 	 	cout<< "1. Hamburger \t\t$50.00"<<endl;
 	    cout<< "2. Hotdog \t\t$40.00"<<endl;
 	    cout<< "3. Peanuts \t\t$30.75"<<endl;
 	    cout<< "4. Popcorn \t\t$25.50"<<endl;
     	cout<< "5. Soda \t\t$22.50"<<endl;
        cout<< "6. Coffee \t\t$20.75"<<endl;
        cout<< "7. Pastry \t\t$17.50"<<endl;
        cout<< "8. Chips \t\t$15.00"<<endl;
        cout<< "9.Water \t\t$12.00"<<endl;
        cout<< "10. END ORDER"<<endl;
        cout<<"Please enter your menu choice:";
		}
    }




    void showFees(float itemCost,int quantity)
    {
 	  	cout<<"Please enter the quantity you want:";
 	 	cin>>quantity;
 	 	
 	 	float amtTendered;
 	  	float totalBill=(itemCost*quantity);
 	  	float taxRate=.065;
 	 	float tipRate=.20;
 	 	float tip=(totalBill*tipRate);
 	 	float tax=(totalBill*taxRate);
 	 	float amountDue=(totalBill+tax+tip);

 	 	cout<< "Total Bill: $"<<totalBill<<endl;
 	 	cout<< "Tax: $"<<tax<<endl;
 	 	cout<< "Tip: $"<<tip<<endl;
 	 	cout<< "Total Amount Due: $"<<amountDue<<endl;
 	 	cout<< "Enter ammount tendered: $";
 	 	cin>> amtTendered;
 	 	float changeDue=amtTendered-amountDue;
 	 	cout<< "Change Due: $"<<changeDue<<endl;
 	 }
