#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
	string command;
    int number;
    
    //  create vector
    vector<int> array(0);
    
    while(true){
    	cin >> command;
    	
    	if  (command == "push") {  
        
            //  clear number
            number = 0;
            //  enter number
            cin>>number;
            //  push number to the stack
            array.push_back(number);
            cout<<"ok"<<endl;

        } else if(command == "pop") {
            cout << array[0] << endl;
            array.erase(array.begin());
        
        } else if(command == "front") {
        
            //  get the last element of stack 
            cout<<array[0]<<endl;

        } else if(command == "size") {

            //  print the size of stack
            cout<<array.size()<<endl;
        
        } else if(command == "clear") {
        
            //  clear stack
            array.clear();
            cout<<"ok"<<endl;
        
        } else if(command == "exit") {
        
           //   print bye and exit the program
           cout<<"bye"<<endl;
           return 0;
        
        }
	}
}
