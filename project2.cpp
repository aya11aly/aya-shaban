#include<iostream>
using namespace std;
int main()
{
      const int x=1000;
      string names[x];
      int ages[x];
      int ids[x];
      int added=0;
       
      while(true){
      	int choice =-1;
      	cout<<"\n Enter your choice "<<endl;
      	cout<<"1- Add new student"<<endl;
      	cout<<"2- Print all students"<<endl;
      	cout<<"3- Delete by age"<<endl;
      	cout<<"4- Updata id by name"<<endl;
      	 
      	 cin>>choice;
      	  
      	  if(!(1<=choice && choice<=4)){
      	  	cout<<"Invalid choice . Try again"<<endl;
      	  	continue ;
	        }
	if(choice == 1){
	    cout<<"Enter name"<<endl;
	    cin>>names[added];
	    cout<<"Enter age"<<endl;
	    cin>>ages[added];
	    cout<<"Enter id"<<endl;
	    cin>>ids[added];
	    ++added;
        }

       else if(choice == 2){
        	cout<<"-------------------"<<endl;
        	for(int i =0; i<added ; i++){
        		if(ages[i]!=-1)
        		cout<<names[i]<<" "<<ages[i]<<" "<<ids[i]<<" "<<endl;
	        }
        }
}
   return 0;
}
