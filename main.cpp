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

class Bag {
    public:
        Bag(){
            vector<string> allStuff;
        }

        void display(){
            for (int i = 0; i < allStuff.size(); i++) {
                std::cout << allStuff[i] << ", ";
            }
        }
        void add(string item){
            allStuff.push_back(item);
        }
    private:
        vector<string> allStuff;
        
};

int main(){
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