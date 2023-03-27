
#include<Windows.h>
#include<string>
#include<iomanip>
#include<conio.h>
#include<fstream>
#include <iostream>
using namespace std;

class Pet
{
	char* poroda; 
	uint32_t ves ;
	char* okpc; 

public:
	

	Pet()
	{
		cout << " "
			<< endl; 
	}
	const char* getPoroda()
	{
		return poroda; 
	}
	const char* getOkpc()
	{
		return okpc; 
	}

	uint32_t getVes()
	{
		return ves; 
	}
	void setPoroda(const char* Pet); 
	void setPoroda(const char* Pet);
	void setVes(uint32_t Pet); 
	
	Pet operator=(Pet&& poroda )
	{
		if (this != &poroda)
		{
					}
		
	}
	

	Pet(const Pet&); 
	Pet& operator=(const Pet ); 

	~Pet(void)
	{
		if (poroda != NULL)
			delete[]poroda;
	}
};



int main()
{
   
	

}


