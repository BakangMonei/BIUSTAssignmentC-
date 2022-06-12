#include<iostream>

// Only Net Salary calculation is not working
using namespace std;

// Working
class Customer{
   public:
      string name;
      int accountNumber; 
      int age;
      int salary;
      int incomeTax;
};

// Working
class HR : public Customer{
   public:
      int IDs;
      // Setters
      void setDetails(string N, int A, int AN){
         name = N;
         age = A;
         accountNumber = AN;
      }
      
      // Getters
      string getName(){
         return name;
      }
      int getAge(){
         return age;
      }
      int getAccountNumber(){
         return accountNumber;
      }
};


class Finance : public Customer{
   public:
      int sal;
      // Setters
      void setFinDetails(int S, int T, int AN){
         salary = S;
         incomeTax = T;
         accountNumber = AN;
      }
      
      // Getters
      int getSalary(){
         return salary;
      }
      int getIncomeTax(){
         return incomeTax;
      }
      int getAccountNumber(){
         return accountNumber;
      }
};

class Payroll : public Customer{
   public:
      int netSalary = salary * (incomeTax / 100);
      int ID;
      int sal;
      
      // Setters
      void setPayDay(string N, int A, int AN, int S, int T){
         name = N;
         age = A;
         accountNumber = AN;
         salary = S;
         incomeTax = T;
      }
      void setTotalSalary(int S, int T){
         salary = S;
         incomeTax = T;
      }
      
      // Getters
      string getName(){
         return name;
      }
      int getAge(){
         return age;
      }
      int getAccountNumber(){
         return accountNumber;
      }
      int getSalary(){
         return salary;
      }
      int getIncomeTax(){
         return incomeTax;
      }
      int getTotalSalary(){
         return netSalary;
      }
};


// Working
int main(){
   Payroll myObj;
   myObj.setPayDay("Neiza", 20, 12345678, 50000, 20);
   myObj.setTotalSalary(50000, 20);
   myObj.ID = 1011;
   myObj.sal = 50000 * 0.20;
   cout << "Profile" << "\n";
   cout << "ID: " << myObj.ID << "\n";
   cout << "Name: " << myObj.getName() << "\n";
   cout << "Age: " << myObj.getAge() << "\n";
   cout << "Account Number: " << myObj.getAccountNumber() << "\n";
   cout << "Salary: " << myObj.getSalary() << "\n";
   cout << "IncomeTax: " << myObj.getIncomeTax() << "%" << "\n";
   cout << "Net Salary: " << myObj.sal << "\n";
   return 0;
}