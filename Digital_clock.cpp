#include <iostream>
//if you have linux : 
#include <unistd.h>
//if you have windows : 
//#include <windows.h>

using namespace std; 

int main(){
      int hrs,min,sec; 
      cout << "Hours : "; 
      cin >> hrs; 
      cout << endl;
      cout << "Minutes : "; 
      cin >> min; 
      cout << endl;
      cout << "Seconds : "; 
      cin >> sec; 
      while (true)
      {
            system("clear"); //if you have linux or Mac.
            //if you have windows : system("cls"); 
            cout << "************************************\n \n";
            cout << hrs << ":" << min << ":" << sec << "\n \n";
            cout << "************************************\n";
            sleep(1);

            sec++; 
            if(sec > 59){
                  sec = 0;
                  min += 1;
            }
            if(min > 59){
                  min = 0; 
                  hrs++;
            }
            if(hrs > 23){
                  hrs = 0;
            }
      }
      
}