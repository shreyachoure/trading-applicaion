#include <iostream>
#include <ctime>
using namespace std;

float shop(){
  
    char choice;
    int product;
    int quantity;
    float bill = 0;

    cout << "-----------------Welcome-----------------" << endl;
    cout << "Please follow the instructions: " << endl;
    cout << "       1) Please enter r to order Refrigerator" << endl;
    cout << "       2) Please enter w to order Washing Machine" << endl;
    cout << "       3) Please enter m to order Microwave" << endl;
    cout << "       4) Please enter t to order Television" << endl;
    cout << "       5) Please enter a to order Air conditioner" << endl;
    cin >> choice;

    // Refrigerator
    if (choice == 'r' || choice == 'R') {
        cout << "-----------------Refrigerator Details-----------------" << endl;
        cout << "   1) Samsung => Price: $400" << endl;
        cout << "   2) LG => Price: $900" << endl;
        cout << "   3) Whirlpool => Price: $500" << endl;
        cout << "   4) Frigidaire => Price: $1300" << endl;
        cout << "   5) GE => Price: $600" << endl;
            
        cout << "Please enter your choice: " << endl;
        cin >> product;
        
        cout << "Please enter the number of products: " << endl;
        cin >> quantity; 
            
        if (product == 1) {
            bill += 400 * quantity;
        } else if (product == 2) {
            bill += 900 * quantity;
        } else if (product == 3) {
            bill += 500 * quantity;
        } else if (product == 4) {
            bill += 1300 * quantity;
        } else if (product == 5) {
            bill += 600 * quantity;
        }else {
            cout << "Please enter valid choice." << endl;
        }
        return bill;
    }

    // Washing Machine
    else if (choice == 'w' || choice == 'W') {
        cout << "-----------------Washing Machine Details-----------------" << endl;
        cout << "   1) Samsung => Price: $900" << endl;
        cout << "   2) LG => Price: $1200" << endl;
        cout << "   3) Whirlpool => Price: $1600" << endl;
        cout << "   4) Bosch => Price: $2000" << endl;
        cout << "   5) GE => Price: $2300" << endl;
            
        cout << "Please enter your choice: " << endl;
        cin >> product;
        
        cout << "Please enter the number of products: " << endl;
        cin >> quantity; 
            
        if (product == 1) {
            bill += 900 * quantity;
        } else if (product == 2) {
            bill += 1200 * quantity;
        } else if (product == 3) {
            bill += 1600 * quantity;
        } else if (product == 4) {
            bill += 2000 * quantity;
        } else if (product == 5) {
            bill += 2300 * quantity;
        }else {
            cout << "Please enter valid choice." << endl;
        }
        return bill;
    }

    // Microwave
    else if (choice == 'm' || choice == 'M') {
        cout << "-----------------Microwave Details-----------------" << endl;
        cout << "   1) Samsung => Price: $900" << endl;
        cout << "   2) LG => Price: $1200" << endl;
        cout << "   3) Whirlpool => Price: $1600" << endl;
        cout << "   4) Bosch => Price: $2000" << endl;
        cout << "   5) GE => Price: $2300" << endl;
            
        cout << "Please enter your choice: " << endl;
        cin >> product;
        
        cout << "Please enter the number of products: " << endl;
        cin >> quantity; 
            
        if (product == 1) {
            bill += 900 * quantity;
        } else if (product == 2) {
            bill += 1200 * quantity;
        } else if (product == 3) {
            bill += 1600 * quantity;
        } else if (product == 4) {
            bill += 2000 * quantity;
        } else if (product == 5) {
            bill += 2300 * quantity;
        }else {
            cout << "Please enter valid choice." << endl;
        }
        return bill;
    }

    // Television
    else if (choice == 't' || choice == 'T') {
        cout << "-----------------Television Details-----------------" << endl;
        cout << "   1) Samsung => Price: $900" << endl;
        cout << "   2) LG => Price: $1200" << endl;
        cout << "   3) Whirlpool => Price: $1600" << endl;
        cout << "   4) Bosch => Price: $2000" << endl;
        cout << "   5) GE => Price: $2300" << endl;
            
        cout << "Please enter your choice: " << endl;
        cin >> product;
        
        cout << "Please enter the number of products: " << endl;
        cin >> quantity; 
            
        if (product == 1) {
            bill += 900 * quantity;
        } else if (product == 2) {
            bill += 1200 * quantity;
        } else if (product == 3) {
            bill += 1600 * quantity;
        } else if (product == 4) {
            bill += 2000 * quantity;
        } else if (product == 5) {
            bill += 2300 * quantity;
        }else {
            cout << "Please enter valid choice." << endl;
        }
        return bill;
    }

    // Air Conditioner
    else if (choice == 'a' || choice == 'A') {
        cout << "-----------------Air Conditioner Details-----------------" << endl;
        cout << "   1) Samsung => Price: $900" << endl;
        cout << "   2) LG => Price: $1200" << endl;
        cout << "   3) Whirlpool => Price: $1600" << endl;
        cout << "   4) Bosch => Price: $2000" << endl;
        cout << "   5) GE => Price: $2300" << endl;
            
        cout << "Please enter your choice: " << endl;
        cin >> product;
        
        cout << "Please enter the number of products: " << endl;
        cin >> quantity; 
            
        if (product == 1) {
            bill += 900 * quantity;
        } else if (product == 2) {
            bill += 1200 * quantity;
        } else if (product == 3) {
            bill += 1600 * quantity;
        } else if (product == 4) {
            bill += 2000 * quantity;
        } else if (product == 5) {
            bill += 2300 * quantity;
        }else {
            cout << "Please enter valid choice." << endl;
        }
        return bill;
    }

    //default condition

    else {
        cout << "Please select valid option.";
    }
}

int main(){

    std::string name;
    char start;
    char choice;
    float total;
    
    cout << "What is your name?\n";
    cin >> name;
    cout << "Hi " << name << ", ";
    cout << "Please press H to start shopping for Home applicances: ";
    cin >> start;

    if (start == 'H' || start == 'h'){
        total = shop();
        time_t now_time = time(0);
        tm * ltm = localtime(&now_time);
 
        cout << "Bill Date: ";
        cout << ltm ->tm_mday << "/";
        cout << 1+ ltm->tm_mon << "/";
        cout << 1900 + ltm->tm_year << endl;

        cout << "Bill Time: ";
        cout << (ltm -> tm_hour) << ":";
        cout << (30 + ltm -> tm_min) << ":";
        cout << (ltm -> tm_sec) << endl;

        // 5% discount 
        if (total > 5000){
            cout << "You will get 5% discount!" << endl;
            float discount = total * 0.05; 
            total -= discount; 
            cout << "Discount: $" << discount << endl;
        } else if (total > 10000){
            cout << "You will get 10% discount!" << endl;
            float discount = total * 0.1; 
            total -= discount; 
            cout << "Discount: $" << discount << endl;
        } else {
            cout << "Shop more to get disounts!" << endl;
        }

        cout << "Amount to be paid: $" << total << endl;
    }

}



