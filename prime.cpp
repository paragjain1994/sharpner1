// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    // Write C++ code here
   int isPrime=4;
 bool prime = true;
        for (int j=2; j<isPrime; j++)
     {
            if (isPrime%j ==0)
            {
                prime = false;
                break;
            }
             std::cout << "Hello world123!";
     }
      
       if (prime)
       {
 std::cout << "Hello world!";
           
       }
        std::cout << "false";
    return 0;
}
