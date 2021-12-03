#include <iostream>
#include <vector>
#include <stdlib.h>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <windows.h>
#include <conio.h>

using namespace std;
float c1=2,d1=2.5,e1=1.3,f1=1.52,g1=3,h1=1.5,i1=3.5,
      j1=1.25,k1=3.6,l1=2,m1=1.05,n1=0.4,o1=1.9,p1=0.75,q1=0.75,
	  r1=0.5,s1=0.58,t1=0.15,u1=0.61,v1=0.55,w1=0.5,x1=0.4,y1=0.55,
	  z1=0.54,aa1=1,bb1=1.3,cc1=0.5,dd1=0.5,ee1=0.65,ff1=0.55,gg1=0.45,
	  hh1=0.60,ii1=0.45,jj1=4.61,kk1=5.48,ll1=2.74,mm1=4.85,nn1=6.3,oo1=5.5,
	  pp1=12.8,qq1=6.55,rr1=3.99,ss1=1.12,tt1=5.53;                                                              //globle varible
	  int riel=4120; 
	  string f,l;
	  int n,choice;
	  double sum=0;
	  char letter;
	   
void gotoxy(int x, int y){                                                                          //void function call by value
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
struct wow{                                                                                                       //struct
	string ch;                                                                                                //local varible
};
int what(){                                                                                               //normal return functon
gotoxy(25,5);
	wow x;
	cout<<x.ch<<"\n\t\t\t\t\t\t\t                        THE FINAL PROJECT OF GROUP 4TH  " ;
	cout<<"\n\t\t\t\t\t\t\t                   =========================================\n";
	cout<<"\t                                                               \n";                                                           
}
string upper(string s){                                                                 //return function call by value         //c-string
	for(int i=0;i<s.size();i++){                                                                                 //for loop
		s[i]= toupper(s[i]);                                                                                     //array d1
	}
	return s;
}
string lower(string s){                                                                //return function call by value          //c-string                                                                               //c-string
    int i=0;
    while(i<s.size()){                                                                                         //while loop
    	s[i]=tolower(s[i]);                                                                                    //array d1
    	i++;
	}
	return s;
}
void up(){                                                                                             //normal void function
	string u3="\t\t\t\t\t\t                                              G'day mate          \n";
	string u1="\t\t\t\t\t\t                                       go in, get what you want.\n";
	cout<<"\t                                                                             \n";
	string u2="\t\t\t\t\t\t                                   <<      please enjoy it !!!    >>";
	cout<<upper(u3)<<endl;
	cout<<upper(u1)<<endl;
	cout<<upper(u2)<<endl;
	system ("PAUSE"); 
} 
void low(){                                                                                             //normal void function
	string l1="                                       Thanks you costumers.\n";
	cout<<"\t                                                                  \n";
	string l2="                          <<         wish you have a good day!!!      >>";
	cout<<lower(l1)<<endl;
	cout<<lower(l2)<<endl;
}

int welcome(){                                                                                            //normal return function
    cout<<"\t                                                                                                                   "<<endl;
	cout<<"\t                                                                                                                   "<<endl;
	cout<<"\t\t\t\t\t\t ll        ll        ll    llllllll     ll           llllll      llllll      lll    lll    llllllll      "<<endl;
	cout<<"\t\t\t\t\t\t  ll      llll      ll     ll           ll          ll          ll    ll     llllllllll    ll            "<<endl;
	cout<<"\t\t\t\t\t\t   ll    ll  ll    ll      llllllll     ll         ll          ll      ll    ll  ll  ll    llllllll      "<<endl;
	cout<<"\t\t\t\t\t\t    ll  ll    ll  ll       ll           ll         ll          ll      ll    ll      ll    ll            "<<endl;
	cout<<"\t\t\t\t\t\t     llll      llll        ll           ll          ll          ll    ll     ll      ll    ll            "<<endl;
	cout<<"\t\t\t\t\t\t      ll        ll         llllllll     lllllll      llllll      llllll     llll    llll   llllllll      "<<endl;
	cout<<"\t                                                                                                                   "<<endl;
    cout<<"\t                                                                                                                   "<<endl;
	cout<<"\t\t\t\t\t\t                                          llllllllll    llllll                                           "<<endl;
	cout<<"\t\t\t\t\t\t                                              ll       ll    ll                                          "<<endl;
	cout<<"\t\t\t\t\t\t                                              ll      ll      ll                                         "<<endl;
	cout<<"\t\t\t\t\t\t                                              ll      ll      ll                                         "<<endl;
	cout<<"\t\t\t\t\t\t                                              ll       ll    ll                                          "<<endl;
	cout<<"\t\t\t\t\t\t                                              ll        llllll                                           "<<endl;
	cout<<"\t                                                                                                                   "<<endl;
	cout<<"\t                                                                                                                   "<<endl;
	cout<<"\t\t\t\t\t\t                                     ll        llllllll     lllllll                                      "<<endl;
	cout<<"\t\t\t\t\t\t                                    llll          ll        ll    ll                                     "<<endl;
	cout<<"\t\t\t\t\t\t                                   ll  ll         ll        lllllll                                      "<<endl;
	cout<<"\t\t\t\t\t\t                                  llllllll        ll        ll    ll                                     "<<endl;
	cout<<"\t\t\t\t\t\t                                 ll      ll       ll        ll    ll                                     "<<endl;
	cout<<"\t\t\t\t\t\t                                ll        ll   llllllll     ll11111                                      "<<endl;
	cout<<"\t                                                                                                                   "<<endl;
	cout<<"\t                                                                                                                   "<<endl;
	cout<<"\t\t\t\t\t\t                          lll    lll         ll         lllllll      llllllllll                          "<<endl;
	cout<<"\t\t\t\t\t\t                          llllllllll        llll        ll    ll         ll                              "<<endl;
	cout<<"\t\t\t\t\t\t                          ll  ll  ll       ll  ll       lllllll          ll                              "<<endl;
	cout<<"\t\t\t\t\t\t                          ll      ll      llllllll      llll             ll                              "<<endl;
	cout<<"\t\t\t\t\t\t                          ll      ll     ll      ll     ll  ll           ll                              "<<endl;
	cout<<"\t\t\t\t\t\t                         llll    llll   ll        ll    ll    ll         ll                              "<<endl;
	cout<<"\t                                                                                                                   "<<endl;
	cout<<"\t                                                                                                                   "<<endl;
	cout<<"\t\t\t\t\t\t           lllllll     lllllll      llllll      llllll    llllllll    llllll     llllll                  "<<endl;
	cout<<"\t\t\t\t\t\t           ll    ll    ll    ll    ll    ll    ll         ll         ll         ll                       "<<endl;
	cout<<"\t\t\t\t\t\t           lllllll     lllllll    ll      ll  ll          llllllll    llllll     llllll                  "<<endl;
	cout<<"\t\t\t\t\t\t           ll          llll       ll      ll  ll          ll               ll         ll                 "<<endl;
	cout<<"\t\t\t\t\t\t           ll          ll ll       ll    ll    ll         ll          ll   ll    ll   ll                 "<<endl;
	cout<<"\t\t\t\t\t\t          llll         ll   ll      llllll      llllll    llllllll     lllll      lllll                  "<<endl;
	cout<<"\t                                                                                                                   "<<endl;
	cout<<"\t                                                                                                                   "<<endl;
	return 0;
	system ("PAUSE"); 
}
void readf(){                                                                                              //normal void function
	system ("cls");
gotoxy (20,5);
	ifstream f;
	f.open("Developer.txt.txt");
	char c;
	while(f.get(c)){		
    cout<<c;
	}
	f.close();
	cout<<"\n\n\t Press enter back to menu  ";
}
void bill(double &sum){                                                    //void function call by reference        //overloading function 

	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout<<"\t                                        AIB MART                                    "<<endl;
	cout<<"\t                                        Riceipt                                     "<<endl;
	cout<<"                                                                                      "<<endl;
	cout<<" Discount  :                                       0%                                 "<<endl;
    cout<<" Total     :                                       "<<sum<<" $"<<endl;
    cout<<" Riel      :                                       "<<sum*riel<<" riel"<<endl;
    cout<<" Tel       : 015 400 718"<<endl;
    cout<<" Gmail     : AIBmart@.gmail.com"<<endl;
    cout<<"\t                     Thanks you "<< f <<" "<< l <<"."<<" have an awesome day!!!"<<endl;
    cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	
}
void bill(double sum,double u ){                                          //void function call by value           //overloading function 
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout<<"\t                                        AIB MART                                    "<<endl;
	cout<<"\t                                        Riceipt                                     "<<endl;
	cout<<"                                                                                      "<<endl;
	cout<<" Discount  :                                       20%                                "<<endl;
    cout<<" Total     :                                       "<<(sum*80)/100<<" $"<<endl;
    cout<<" Riel      :                                       "<<(sum*80)/100*riel<<" riel"<<endl;
    cout<<" Tel       : 015 400 718"<<endl;
    cout<<" Gmail     : AIBmart@.gmail.com"<<endl;
    cout<<"\t                     Thanks you "<< f <<" "<< l <<"."<<" have an awesome day!!!"<<endl;
    cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
}
int Process(float &a1,float &b1){                                                                  // return function call by reference 
                                                                                     
	int y,m;
	char A,B,C,YY;
	float V1=14.39,V2=5.99,V3=9.50,V4=7.99,V5=11.95,V6=14.90,V7=13.99,                                              //local varible
	W1=9.50,W2=9.00,W3=2.55,W4=18.00,W5=3.95,W6=2.55,W7=4.29,
	X1=7.47,X2=12.00,X3=4.99, A1=5.00,A2=5.50,A3=6.00,A4=6.00,A5=5.50,A6=4.50,A7=23.00,A8=6.00,A9=10.00,A10=15.00,
	B1=1.50,B2=3.50,B3=3.00,B4=4.00,B5=6.00,B6=4.00,B7=7.50,B8=0.58,B9=0.15,B10=0.61,
	C1=0.55,C2=0.75,C3=1.50,C4=0.55,C5=7.29,C6=4.50,C7=5.50,C8=6.00,C9=0.50,C10=0.75,
	D1=3.00,D2=10.00,D3=15.00,D4=7.00,D5=6.50,D6=4.00,D7=15.00,D8=15.00,D9=20.00,D10=20.00,
	E1=30.00,E2=15.00,E3=13.00,E4=20.00;
menu:
system ("cls");	
gotoxy(30,7);     
    cout<<"\n\t\t\t\t\t\t\t                             AIB MART PROCESS\n";    
	cout<<"\t\t\t\t\t\t\t                   ++++++++++++++++++++++++++++++++++++++++++\n";                                                                                          
    cout<<"\t                                                                     \n";  
	cout<<"\n\t\t\t\t\t\t\t                     1- INFORMATION ABOUT (AIB MART PROCESS)\n";                                                                            
    cout<<"\n\t\t\t\t\t\t\t                     2- PRODUCT OF THE MART\n";
	cout<<"\n\t\t\t\t\t\t\t                     3- CASHIER PROCESS SYSTEM\n";                                      
	cout<<"\n\t\t\t\t\t\t\t                     Enter your choice :::  ";
	cin>>choice;

	switch (choice){                                                                                             //switch case
		case 1:{
    	readf();
getch();
goto menu;   	
		break;
}
		case 2:{
db:
system ("cls");
gotoxy(30,7);					 
			cout<<"\t                                          \n";
			cout<<"\t\t\t\t\t\t\t\t\t                        MENU :\n"; 
			cout<<"\t\t\t\t\t\t\t\t\t     =========================================\n\n";
			cout<<"\n\t\t\t\t\t\t\t\t               A- FOODS\n";
			cout<<"\n\t\t\t\t\t\t\t\t               B- SKIN CARE\n";
			cout<<"\n\t\t\t\t\t\t\t\t               C- MEDICINE\n";
			cout<<"\n\t\t\t\t\t\t\t\t               D- Back to your choice\n";
			cout<<"\n\t\t\t\t\t\t\t\t               Press upper letter :::  ";
			cin>>letter;
			switch (letter){                                                                                       //switch case
				case 'A':
system ("cls");					
	cout<<"\t                                                  "<<endl;
	cout<<"\t*******                                   ******* "<<endl;
	cout<<"\t      *******                       *******       "<<endl;
	cout<<"\t            *******           *******             "<<endl;
	cout<<"\t________________>>>   FOODS   <<<________________ "<<endl;
	cout<<"\t            *******           *******             "<<endl;
	cout<<"\t      *******                       *******       "<<endl;
	cout<<"\t*******                                   ******* "<<endl;
	cout<<"\t                                                  "<<endl;
	cout<<"\t                                                  "<<endl;
	cout<<"+++++++++++++ Canned food ++++++++++++++++ Price ++++++++++++++++ Code product +++++++++++\n";
	cout<<"\t                                                                          "<<endl;
	cout<<"\t    - Pinto beans                 $ 0.48                      1           "<<endl;
	cout<<"\t    - Tomatoes                    $ 1.64                      2           "<<endl;
	cout<<"\t    - Smoked mackerel             $ 2.00                      3           "<<endl;
	cout<<"\t    - Sardines                    $ 2.50                      4           "<<endl;
	cout<<"\t    - Kidney beans                $ 1.30                      5           "<<endl;
	cout<<"\t    - Pumpkin                     $ 1.52                      6           "<<endl;
	cout<<"\t    - Clams                       $ 3.00                      7           "<<endl;
	cout<<"\t    - Corn                        $ 1.50                      8           "<<endl;
	cout<<"\t    - Chicken                     $ 3.50                      9           "<<endl;
	cout<<"\t    - Mushroom                    $ 1.25                      10          "<<endl;
	cout<<"\t    - Meals                       $ 3.60                      11          "<<endl;
	cout<<"\t                                                                          "<<endl;
	cout<<"+++++++++++++ Milk ++++++++++++++++++++++ Price ++++++++++++++++ Code product ++++++++++++\n";
	cout<<"\t                                                                          "<<endl;
    cout<<"\t    - Fermented milk              $ 2.00                      12          "<<endl;
    cout<<"\t    - Yogurt                      $ 1.05                      13          "<<endl;
    cout<<"\t    - Fresh cream                 $ 0.40                      14          "<<endl;
    cout<<"\t    - Casein                      $ 1.90                      15          "<<endl;
    cout<<"\t    - Ice-cream                   $ 0.75                      16          "<<endl;
    cout<<"\t    - Chocolate                   $ 0.75                      17          "<<endl;
    cout<<"\t    - Milk chocolate              $ 0.50                      18          "<<endl;
    cout<<"\t                                                                          "<<endl;
    cout<<"+++++++++++++ Soft drink ++++++++++++++++ Price ++++++++++++++++ Code product ++++++++++++\n";
    cout<<"\t                                                                          "<<endl;
    cout<<"\t    - Coca-cola                    $ 0.58                     19          "<<endl;
    cout<<"\t    - Diet coke                    $ 0.15                     20          "<<endl;
    cout<<"\t    - Red Bull                     $ 0.61                     21          "<<endl;
    cout<<"\t    - Pepsi                        $ 0.55                     22          "<<endl;
    cout<<"\t    - Nescafe                      $ 0.50                     23          "<<endl;
    cout<<"\t    - Tropicana juice              $ 0.40                     24          "<<endl;
    cout<<"\t    - Fanta                        $ 0.55                     25          "<<endl;
    cout<<"\t    - Sprite                       $ 0.54                     26          "<<endl;
    cout<<"\t    - Gatorade                     $ 1.00                     27          "<<endl;
    cout<<"\t    - Minute Maid                  $ 1.30                     28          "<<endl;
    cout<<"\t    - Mountain Dew                 $ 0.50                     29          "<<endl;
    cout<<"\t                                                                          "<<endl;
    cout<<"+++++++++++++ Snack food ++++++++++++++++ Price ++++++++++++++++ Code product ++++++++++++\n";
	cout<<"\t                                                                          "<<endl;
	cout<<"\t    - Cookies                      $ 0.50                     30          "<<endl;
	cout<<"\t    - Cake                         $ 0.65                     31          "<<endl;
	cout<<"\t    - Pastries                     $ 0.55                     32          "<<endl;
	cout<<"\t    - Bread                        $ 0.45                     33          "<<endl;
	cout<<"\t    - Sandwiches                   $ 0.60                     34          "<<endl;
	cout<<"\t    - Cheese                       $ 0.45                     35          "<<endl;
	cout<<"\t                                                                          "<<endl;
	cout<<"+++++++++++++ Fruit +++++++++++++++++++++++ Price +++++++++++++ Code product +++++++++++++\n";
	cout<<"\t                                                                          "<<endl;
	cout<<"\t    - Apple                        $ 4.61/ kg                 36          "<<endl;
	cout<<"\t    - Avocado                      $ 5.48/ kg                 37          "<<endl;
	cout<<"\t    - Banana                       $ 2.74/ kg                 38          "<<endl;
	cout<<"\t    - Bil berry                    $ 4.85/ kg                 39          "<<endl;
	cout<<"\t    - Black currant                $ 6.30/ kg                 40          "<<endl;
	cout<<"\t    - Blue berry                   $ 5.50/ kg                 41          "<<endl;
	cout<<"\t    - Cherry                       $ 12.80/kg                 42          "<<endl;
	cout<<"\t    - Crab apple                   $ 6.55 /kg                 43          "<<endl;
	cout<<"\t    - Lemon                        $ 3.99 /kg                 44          "<<endl;
	cout<<"\t    - Mango                        $ 1.12 /kg                 45          "<<endl;
	cout<<"\t    - Orange                       $ 5.53 /kg                 46          "<<endl;
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout<<"\n\n\t Press enter back to menu  ";
getch();
goto db;	      
	    case 'B':
system ("cls");
	cout<<"\t                                                        "<<endl;
	cout<<"\t*******                                         ******* "<<endl;
	cout<<"\t      *******                           *******         "<<endl;
	cout<<"\t            *******              *******                "<<endl;
	cout<<"\t________________>>> Skin Care <<<_______________________"<<endl;
	cout<<"\t            *******              *******                "<<endl;
	cout<<"\t      *******                           *******         "<<endl;
	cout<<"\t*******                                         ******* "<<endl;
	cout<<"\t                                                        "<<endl;
	cout<<"\t                                                        "<<endl;
	cout<<"+++++++++++++ Hair shampoo ++++++++++++++++++++++ Price ++++++++++++++++ Code Product++++++++++++++++\n";
	cout<<"\t                                                                                     "<<endl;
	cout<<"\t    - Clear for men                      $ 5.00                     47               "<<endl;
	cout<<"\t    - Clear for women                    $ 5.50                     48               "<<endl;
	cout<<"\t    - Sunsil                             $ 6.00                     49               "<<endl;
	cout<<"\t    - Dove                               $ 6.00                     50               "<<endl;
	cout<<"\t    - Pentine                            $ 5.50                     51               "<<endl;
	cout<<"\t    - Headandshoulder                    $ 4.50                     52               "<<endl;
	cout<<"\t    - Kesar Lamor                        $ 23.00                    53               "<<endl;
	cout<<"\t    - Dove hair mask                     $ 6.00                     54               "<<endl;
	cout<<"\t    - Bio Hair mask                      $ 10.00                    55               "<<endl;
	cout<<"\t    - Organic hair mask                  $ 15.00                    56  		      "<<endl;
	cout<<"\t                                                                                     "<<endl;
	cout<<"+++++++++++++ Toothpaste +++++++++++++++++++++++++Price ++++++++++++++++  Code Product++++++++++++++++\n";
	cout<<"\t                                                                                    "<<endl;
    cout<<"\t    - Colgate                            $ 1.50                     57 		     "<<endl;
    cout<<"\t    - Sensodyne                          $ 3.50                     58   		 	 "<<endl;
    cout<<"\t    - Darlie                             $ 3.00                     59    	         "<<endl;
    cout<<"\t    - Pepsodent                          $ 4.00                     60  		 	 "<<endl;
    cout<<"\t    - Advance White                      $ 6.00                     61   		 	 "<<endl;
    cout<<"\t    - Pepsodent                          $ 4.00                     62  			 "<<endl;
    cout<<"\t    - Meswax                             $ 7.50                     63   			 "<<endl;
    cout<<"\t                                                      							     "<<endl;
    cout<<"+++++++++++++ Mouth wash ++++++++++++++++++++++++Price ++++++++++++++++  Code Product++++++++++++++++\n";
    cout<<"\t                                                                                    "<<endl;
    cout<<"\t    - Listerine                          $ 0.58                     64   			 "<<endl;
    cout<<"\t    - Oral-B                             $ 0.15                     65  		   	 "<<endl;
    cout<<"\t    - Pearlie White                      $ 0.61                     66  		     "<<endl;
    cout<<"\t    - Breath Spray                       $ 0.55                     67		         "<<endl;
    cout<<"\t                                                       							 "<<endl;
    cout<<"+++++++++++++ Toothbrush +++++++++++++++++++++++ Price ++++++++++++++++  Code Product++++++++++++++++\n";
    cout<<"\t                                                                                    "<<endl;
	cout<<"\t    - Simple brush                       $ 0.75                     68	 	         "<<endl;
	cout<<"\t    - Pepsodent                          $ 1.50                     69	             "<<endl;
	cout<<"\t    - Colgate                            $ 0.55                     70	             "<<endl;
	cout<<"+++++++++++++ Body Foam ++++++++++++++++++++++++ Price +++++++++++++++++ Code Product++++++++++++++++\n";
	cout<<"\t                                                                                    "<<endl;
	cout<<"\t    - Shokubutsu                         1 bottle $7.29             71	 	         "<<endl;
	cout<<"\t    - Biore                              1 bottle=$4.50             72	             "<<endl;
	cout<<"\t    - Dove  care (for men)               1 bottle=$5.50             73	             "<<endl;
	cout<<"\t    - Dove  care (for women)             1 bottle=$6.00             74	             "<<endl;
	cout<<"\t                                                         						     "<<endl;   
	cout<<"+++++++++++++ Body Soap ++++++++++++++++++++++ Price ++++++++++++++++  Code Product++++++++++++++++\n";
	cout<<"\t                                                                                      "<<endl;
	cout<<"\t    - Lux                                $ 0.50                     75	 		       "<<endl;
	cout<<"\t    - Protect                            $ 0.75                     76                "<<endl;
	cout<<"\t    - Ance body soap                     $ 3.00                     77                "<<endl;
	cout<<"\t                                                        							   "<<endl;
	cout<<"+++++++++++++ Face foam ++++++++++++++++++++++ Price ++++++++++++++++  Code Product++++++++++++++++\n";
	cout<<"\t                                                                                     "<<endl;
	cout<<"\t    - Bio Face foam                      $ 10.00                    78               "<<endl;
	cout<<"\t    - Innisfree                          $ 15.00                    79               "<<endl;
	cout<<"\t    - Nivea for women                    $ 7.00                     80               "<<endl;
	cout<<"\t    - Nivea for men                      $ 6.50                     81               "<<endl;
	cout<<"\t    - Pond                               $ 4.00                     82               "<<endl;
	cout<<"\t    - Skin 7                             $ 15.00                    83               "<<endl;
	cout<<"\t                                                                                     "<<endl;
	cout<<"++++++++++++++ Shet Mask +++++++++++++++++++++++Price++++++++++++++Code Product++++++++++++++++++++\n";
	cout<<"\t                                                                                    "<<endl;
	cout<<"\t    - Skin 7                            1 box=$15.00               84  			 "<<endl;
	cout<<"\t    - Innisfree                         1 box=$20.00               85               "<<endl;
	cout<<"\t    - Jm solution                       1 box=$20.00               86               "<<endl;
	cout<<"\t    - Mamacos                           1 box=$30.00               87  		     "<<endl;
	cout<<"\t                                                                                    "<<endl;
	cout<<"+++++++++++++ Toner ++++++++++++++++++++++++++++++Price++++++++++++++Code Product++++++++++++++++++\n";
	cout<<"\t                                                                                     "<<endl;
	cout<<"\t    - Bio Toner                          $ 15.00                   88                "<<endl;
	cout<<"\t    - Klair                              $ 13.50                   89                "<<endl;
	cout<<"\t    - Mononde                            $ 20.00                   90                "<<endl;
	cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout<<"\n\n\t Press enter back to menu  ";
getch();
goto db;	
		case 'C':
system ("cls");			
    cout<<"\t                                                  "<<endl;
	cout<<"\t*******                                   ******* "<<endl;
	cout<<"\t      *******                       *******       "<<endl;
	cout<<"\t            *******           *******             "<<endl;
	cout<<"\t________________>>> MEDICINE <<<________________  "<<endl;
	cout<<"\t            *******           *******             "<<endl;
	cout<<"\t      *******                       *******       "<<endl;
	cout<<"\t*******                                   ******* "<<endl;
	cout<<"\t                                                  "<<endl;
	cout<<"\t                                                  "<<endl;
	cout<<"++++++++ Type of medicine ++++++++++++++++++++++ Price ++++++++++++ Code product ++++++++++++\n";
	cout<<"\t                                                                           "<<endl;
	cout<<"\t    -  Collager                               $14.39               91      "<<endl;  
	cout<<"\t    -  Sunkist                                $5.99                92      "<<endl;
	cout<<"\t    -  Panadeine                              $9.50                93      "<<endl;
	cout<<"\t    -  Mersyndol                              $7.99                94      "<<endl;
	cout<<"\t    -  Nuroten                                $11.95               95      "<<endl;
	cout<<"\t    -  Claritin                               $14.90               96      "<<endl;
	cout<<"\t    -  Wal-itin                               $13.99               97      "<<endl;
	cout<<"\t    -  Sudafed                                $9.50                98      "<<endl;
	cout<<"\t    -  Polaramine                             $9.00                99      "<<endl;
	cout<<"\t    -  Panadol extra                          $2.55                100     "<<endl;
	cout<<"\t    -  Mederma                                $18.00               101     "<<endl;
	cout<<"\t    -  Wal-phed                               $3.95                102     "<<endl;
	cout<<"\t    -  Aaginetten                             $2.55                103     "<<endl;
	cout<<"\t    -  Cold and allergy                       $4.29                104     "<<endl;
	cout<<"\t    -  Omepracid                              $7.47                105     "<<endl;
	cout<<"\t    -  Prevacid                               $12.00               106     "<<endl;
	cout<<"\t    -  Pepcid                                 $4.99                107     "<<endl;
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout<<"\n\n\t Press enter back to menu  ";
getch();
goto db;
	case 'D':
		goto menu;
break;
}
}                                                        
    case 3:{
system ("cls");
gotoxy(30,7);
    	cout<<"\t\t\t  Dear cashier\n";
	cout<<"\t\t\t* Here are some note :\n";
	cout<<"\t\t\t1-Press any key for continue buying product \n";
	cout<<"\t\t\t2-Press C to calulate the bill \n";
	cout<<"\t\t\t3-If costumers spend more than 50$ , they will get 20% discount\n";
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
    cout<<"\t\t\tCostumer's first name :";cin>>f;
	cout<<"\t\t\tCostumer's last name  :";cin>>l;
    cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
system ("cls");
    cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
    cout<<"\n\t\t\tHow many product you want to buy?\n";
	cout<<"\t\t\tProduct =";cin>>n;
	do{                                                                                                                      //while
	cout<<"\n\t\t\tCode of product = ";cin>>y;
	cout<<"\t\t\tQuantity        = ";cin>>m;
	if       (y==1){                                                                                                //if else function
		cout<<"\n> Pinto bean                                      $"<<a1*m<<endl;
	}else if (y==2){
		cout<<"\n> Tomatoes                                        $"<<b1*m<<endl;
	}else if (y==3){
		cout<<"\n> Smoked mackerel                                 $"<<c1*m<<endl;
	}else if (y==4){
		cout<<"\n> Sardines                                        $"<<d1*m<<endl;
	}else if (y==5){
		cout<<"\n> Kidney beans                                    $"<<e1*m<<endl;
	}else if (y==6){
		cout<<"\n> Pumpkin                                         $"<<f1*m<<endl;
	}else if (y==7){
		cout<<"\n> Clams                                           $"<<g1*m<<endl;
	}else if (y==8){
		cout<<"\n> Corn                                            $"<<h1*m<<endl;
	}else if (y==9){
		cout<<"\n> Chicken                                         $"<<i1*m<<endl;
	}else if (y==10){
		cout<<"\n> Mushroom                                        $"<<j1*m<<endl;
	}else if (y==11){
		cout<<"\n> Meals                                           $"<<k1*m<<endl;
	}else if (y==12){
		cout<<"\n> Fermented milk                                  $"<<l1*m<<endl;
	}else if (y==13){
		cout<<"\n> Yogurt                                          $"<<m1*m<<endl;
	}else if (y==14){
		cout<<"\n> Fresh cream                                     $"<<n1*m<<endl;
	}else if (y==15){
		cout<<"\n> Casein                                          $"<<o1*m<<endl;
	}else if (y==16){
	    cout<<"\n> Ice-cream                                       $"<<p1*m<<endl;
	}else if (y==17){
	    cout<<"\n> Chocolate                                       $"<<q1*m<<endl;                  
	}else if (y==18){
	    cout<<"\n> Milk chocolate                                  $"<<r1*m<<endl;
	}else if (y==19){
		cout<<"\n> Coca-cola                                       $"<<s1*m<<endl;
	}else if (y==20){
		cout<<"\n> Diet coke                                       $"<<t1*m<<endl;
	}else if (y==21){
		cout<<"\n> Red Bull                                        $"<<u1*m<<endl;
	}else if (y==22){
		cout<<"\n> Pepsi                                           $"<<v1*m<<endl;
	}else if (y==23){
		cout<<"\n> Nescafe                                         $"<<w1*m<<endl;
    }else if (y==24){
		cout<<"\n> Tropicana juice                                 $"<<x1*m<<endl;
	}else if (y==25){
		cout<<"\n> Fanta                                           $"<<y1*m<<endl;
	}else if (y==26){
		cout<<"\n> Sprite                                          $"<<z1*m<<endl;
	}else if (y==27){
		cout<<"\n> Gatorada                                        $"<<aa1*m<<endl;
	}else if (y==28){
		cout<<"\n> Minute Maid                                     $"<<bb1*m<<endl;
	}else if (y==29){
		cout<<"\n> Mountain Dew                                    $"<<cc1*m<<endl;
	}else if (y==30){
		cout<<"\n> Cookies                                         $"<<dd1*m<<endl;
	}else if (y==31){
		cout<<"\n> Cake                                            $"<<ee1*m<<endl;
	}else if (y==32){
		cout<<"\n> Pastries                                        $"<<ff1*m<<endl;
	}else if (y==33){
		cout<<"\n> Bread                                           $"<<gg1*m<<endl;
	}else if (y==34){
		cout<<"\n> Sandwiches                                      $"<<hh1*m<<endl;                       
	}else if (y==35){
		cout<<"\n> Cheese                                          $"<<ii1*m<<endl;
	}else if (y==36){
		cout<<"\n> Apple                                           $"<<jj1*m<<endl;
	}else if (y==37){
		cout<<"\n> Avocado                                         $"<<kk1*m<<endl;
	}else if (y==38){
		cout<<"\n> Banana                                          $"<<ll1*m<<endl;
	}else if (y==39){
		cout<<"\n> Bil berry                                       $"<<mm1*m<<endl;
	}else if (y==40){
		cout<<"\n> Black currant                                   $"<<nn1*m<<endl;
	}else if (y==41){
		cout<<"\n> Blue berry                                      $"<<oo1*m<<endl;
	}else if (y==42){
		cout<<"\n> Cherry                                          $"<<pp1*m<<endl;
	}else if (y==43){
		cout<<"\n> Crab apple                                      $"<<qq1*m<<endl;
	}else if (y==44){
		cout<<"\n> Lemon                                           $"<<rr1*m<<endl;
	}else if (y==45){
		cout<<"\n> Mango                                           $"<<ss1*m<<endl;
	}else if (y==46){
		cout<<"\n> Orange                                          $"<<tt1*m<<endl;
	}else if  (y==91){
    	cout<<"\n> collager	                                       $"<<V1*m<<endl;
	}else if (y==92){
		cout<<"\n> sukist		                                   $"<<V2*m<<endl;
	}else if (y==93){
		cout<<"\n> panadeine		                               $"<<V3*m<<endl;
	}else if (y==94){
		cout<<"\n> mersyndol	                                   $"<<V4*m<<endl;
	}else if (y==95){
		cout<<"\n> nuroten	                                       $"<<V5*m<<endl;	   
	}else if (y==96){
		cout<<"\n> claritin	                                       $"<<V6*m<<endl;
	}else if (y==97){	  
		cout<<"\n> wal-itin                                        $"<<V7*m<<endl;
	}else if (y==98){
		cout<<"\n> sudafed	                                       $"<<W1*m<<endl;
	}else if (y==99){
		cout<<"\n> polaramine	                                   $"<<W2*m<<endl;
	}else if (y==100){
		cout<<"\n> panadol extra	                               $"<<W3*m<<endl;
	}else if (y==101){
		cout<<"\n> mederma	                                       $"<<W4*m<<endl;
	}else if (y==102){
		cout<<"\n> wal-phed	                                       $"<<W5*m<<endl;
	}else if (y==103){ 
		cout<<"\n> aaginetten		                               $"<<W6*m<<endl;
	}else if (y==104){
		cout<<"\n> cold and allergy	                               $"<<W7*m<<endl;
	}else if (y==105){
		cout<<"\n> omepriacid	                                   $"<<X1*m<<endl;
	}else if (y==106){
		cout<<"\n> prevacid		                                   $"<<X2*m<<endl;
	}else if (y==107){
		cout<<"\n> pepcid		                                   $"<<X3*m<<endl;
	}else if (y==47){
		cout<<"\n> Clear for men                                   $"<<A1*m<<endl;
	}else if (y==48){
		cout<<"\n> clear for women                                 $"<<A2*m<<endl;
	}else if (y==49){
		cout<<"\n> sunsil                                          $"<<A3*m<<endl;
	}else if (y==50){
		cout<<"\n> Dove                                            $"<<A4*m<<endl;
	}else if (y==51){
		cout<<"\n> Pentine                                         $"<<A5*m<<endl;
	}else if (y==52){
		cout<<"\n> Headandshoulder                                 $"<<A6*m<<endl;
	}else if (y==53){
		cout<<"\n> Kesar Lamor                                     $"<<A7*m<<endl;
	}else if (y==54){
		cout<<"\n> Dove hair mask                                  $"<<A8*m<<endl;
	}else if (y==55){
		cout<<"\n> Bio hair mask                                   $"<<A9*m<<endl;
	}else if (y==56){
		cout<<"\n> Organic Hair mask                               $"<<A10*m<<endl;
	}else if (y==57){
		cout<<"\n> Colgate                                         $"<<B1*m<<endl;
	}else if (y==58){
		cout<<"\n> Snesodyne                                       $"<<B2*m<<endl;
	}else if (y==59){
		cout<<"\n> Darlie                                          $"<<B3*m<<endl;
	}else if (y=60){
		cout<<"\n> Pepsodent                                       $"<<B4*m<<endl;
	}else if (y==61){
		cout<<"\n> Advance White                                   $"<<B5*m<<endl;
	}else if (y==62){
		cout<<"\n> Perfestional                                    $"<<B6*m<<endl;
	}else if (y==63){
		cout<<"\n> Meswax                                          $"<<B7*m<<endl;
	}else if (y==64){
		cout<<"\n> Listerine                                       $"<<B8*m<<endl;
	}else if (y==65){
		cout<<"\n> Oral B                                          $"<<B9*m<<endl;
	}else if (y==66){
		cout<<"\n> Pearlie White                                   $"<<B10*m<<endl;
	}else if (y==67){
		cout<<"\n> Breath Spray                                    $"<<C1*m<<endl;
	}else if (y==68){
		cout<<"\n> Simple brush                                    $"<<C2*m<<endl;
	}else if (y==69){
		cout<<"\n> Pepsodent                                       $"<<C3*m<<endl;
	}else if (y==70){
		cout<<"\n> Colgate                                         $"<<C4*m<<endl;
	}else if (y==71){
		cout<<"\n> Shokubutsu                                      $"<<C5*m<<endl;
	}else if (y==72){
		cout<<"\n> Biore                                           $"<<C6*m<<endl;
	}else if (y==73){
		cout<<"\n> Dove care for men                               $"<<C7*m<<endl;
	}else if (y==74){
		cout<<"\n> Dove care for women                             $"<<C8*m<<endl;
	}else if (y==75){
		cout<<"\n> Lux                                             $"<<C9*m<<endl;
	}else if (y==76){
		cout<<"\n> Protect                                         $"<<C10*m<<endl;
	}else if (y==77){
		cout<<"\n> Acne body soap                                  $"<<D1*m<<endl;
	}else if (y==78){
		cout<<"\n> Bio face foam                                   $"<<D2*m<<endl;
	}else if (y==79){
		cout<<"\n> Innisfree                                       $"<<D3*m<<endl;
	}else if (y==80){
		cout<<"\n> Nivea for women                                 $"<<D4*m<<endl;
	}else if (y==81){
		cout<<"\n> Nivea for men                                   $"<<D5*m<<endl;
	}else if (y==82){
		cout<<"\n> Pond                                            $"<<D6*m<<endl;
	}else if (y==83){
		cout<<"\n> Skin7                                           $"<<D7*m<<endl;
	}else if (y==84){
		cout<<"\n> Skin 7 mask                                     $"<<D8*m<<endl;
	}else if (y==85){
		cout<<"\n> Innisfree mask                                  $"<<D9*m<<endl;
	}else if (y==86){
		cout<<"\n> JM solution                                     $"<<D10*m<<endl;
	}else if (y==87){
		cout<<"\n> Mamacos                                         $"<<E1*m<<endl;
	}else if (y==88){
		cout<<"\n> Bio Toner                                       $"<<E2*m<<endl;
	}else if (y==89){
		cout<<"\n> Klair                                           $"<<E3*m<<endl;
	}else if (y==90){
		cout<<"\n> Momonde                                         $"<<E4*m<<endl;
	}else {
		cout<<"\n  Sorry you enter the wrong code \n";
	}
	cout<<"\n>>>>  ";
	cin>>YY;
}   while ((YY=='Q')||(YY=='q') && (YY!='C')||(YY!='c'));                                                    // ||,&&,!= and ==
    cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
    vector<double> price(n);                                                                                     //dynamic array
    int i=0;
    do{                                                                                                          //do while loop
    	cout<<"\nEnter price "<<(i+1)<<" = "<<setw(35)<<"$";
		cin>>price[i];
		sum+=price[i];
		i++;
	}while(i<n);                                                                                                     // <
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout<<"\nThe sum of these "<<n<<" product is = "<<setw(19)<<"$"<<sum<<endl;
	break;
}
}
 return 0;
}

int fe(){                                                                                                 //normal return function 
	if (sum>0 && sum<50){                                                                                     //>,<,>=,<= and &&
		bill(sum);
	}else if (sum>=50){
		bill(sum,0);
	}
	return 0;
}
int main(){
	float a1=0.48,b1=1.64; 
	what();
	welcome();                                                                                                 
	up();                                                                                                                                                                                                
	cout<<Process(a1,b1);                                                                                      
	cout<<fe();                                                                                                       
	low();
}
                                                                                             

