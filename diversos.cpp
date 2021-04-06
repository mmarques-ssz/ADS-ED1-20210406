#include <iostream>
#include <time.h>
#include <iomanip>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
	int r;
    string s;
    
    s = "1";
    
    cout << s << endl;
    s.insert(0,5-s.size(),'0');
    cout << s << endl;
    
    
	
	//cout << time(0) << endl;
	
	srand(time(0));
	for(int i=1; i<21; ++i)
	{
   	   r = rand();   // => 0..32767
	   cout << setw(2) << i << "ª - " << r << ": " << r % 100 << endl;
	}
	
	// rand() % (max + 1 - min) + min
	
	// Exemplo: intervalor de 50 .. 80
	cout << "-----" << endl;
	cout << rand() % (80+1-50)+50;
	
	
	
	return 0;
}