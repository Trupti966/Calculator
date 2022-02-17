 #include<iostream>
 #include<string.h>
 #include<conio.h>
 #include<iomanip>
 #include<fstream>
 #include<ctime>
 using namespace std;
 
 
 class Vehicle
 {
 	private:
	 	int vehicleNo;
		char shortDescription[60];
		char description[100];
		char createdBy[50];
		char lastUpdatedBy[50];
		char createdDateTime[50];
		char lastUpdatedDateTime[50];
		
	public:
		Vehicle()
		{
			this->vehicleNo=0;
			strcpy(this->shortDescription,"default");
			strcpy(this->description,"default");
			strcpy(this->createdBy,"Trupti");
			strcpy(this->lastUpdatedBy,"Pratik");
			time_t tt;
			time(&tt);
			strcpy(this->createdDateTime,asctime(localtime(&tt)));
			strcpy(this->lastUpdatedDateTime,asctime(localtime(&tt)));
			
		}	
 };
 int main()
 {
 	
 	return 0;
 }
