#include <iostream>
using namespace std;

void array(int arr[], int size) {
    
    int temp =0;
    temp = arr[1];
    arr[1] = arr[0];
    arr[0] = temp;
     
    
}

int main() {
    
    
    int temp =0;
    
    
    int arr[2] = {2, 4};
    
    cout << " value at 0 index :" << arr[0] <<endl;
    
     cout << " and" << endl;
     
      cout << " value at 1 index :" << arr[1] << endl;
      
       cout << " after swap without swaping" << endl; 
       
       cout << " value at temp :" << temp << endl; 
       
       
       array(arr,2);
       
       
       
        cout << " value at 0 index :" << arr[0] <<endl;
        
        cout << " value at 1 index :" << arr[1] << endl;
        
        
       
        


    return 0;
}
