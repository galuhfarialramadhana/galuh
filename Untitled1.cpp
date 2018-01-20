#include <iostream>
#include <string>
using namespace std;

class laptop {
    public:
    	void jenislptp(string jenis);
        string merek;
        void ukuranlptp(string ukuran);
    
      
        };
        
int main(){
    laptop notebook, standard, netbook, touchscreen; 

	notebook.merek			="Acer ";
	standard.merek			="Lenovo ";
	netbook.merek			="Asus ";
	touchscreen.merek		="Toshiba ";

	
	cout << "notebook: \n\n";
	cout << (notebook.merek);
	notebook.ukuranlptp("12 inch ");
	cout <<"===================================\n\n";
	
	cout << "standard: \n\n";
	cout << (standard.merek);
	standard.ukuranlptp("14inch ");
	cout <<"===================================\n\n";
	
	cout << "netbook: \n\n";
	cout << (netbook.merek);
	netbook.ukuranlptp("12inch ");
	cout <<"===================================\n\n";
	
	cout << "touchscreen: \n\n";
	cout << (touchscreen.merek);
	touchscreen.ukuranlptp("16inch ");
	cout <<"===================================\n\n";
	
}
