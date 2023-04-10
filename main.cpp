/* 
Programming Project 7: ADT Bag
Jane McPheron
04/13/2023
*/

  
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;


//declaring class
class Bag {
    public:
        //DEFAULT CONSTRUCTOR
        Bag(){
            vector<string> allStuff;
        }

        //public display function
        void display(){
            for (int i = 0; i < allStuff.size(); i++) {
                std::cout << allStuff[i] << ", ";
            }
        }

        //public add function
        void add(string item){
            allStuff.push_back(item);
        }

    private:
        //vector for storing data
        vector<string> allStuff;
        
};

int main(){

    //code from asignment
   Bag grabBag;
   string item;

   // Test add()
   cout << "Enter an item ";
   getline(cin, item);
   while (item != "quit") {
      grabBag.add(item);
      cout << "Enter an item or 'quit': ";
      getline(cin, item);
   }
   grabBag.display();
}