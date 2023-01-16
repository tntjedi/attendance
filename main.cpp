//howdy welcome to this whack yet usefull code. yes i know you could have done these calculations by yourself but why not make it a tad bit convinient.


#include <iostream>
#include <cmath>

using namespace std;
int main(){
    
    float att;
    float tot;
    float x;
    int sum;
    int per;
    int pve;
    
    cout<<"enter the total number of classes you attended : ";
    cin>>att;
    
    x= att/.75;
    
    cout<<"enter total number of classes happned till now: ";
    cin>>tot;
    
    sum=x-tot;
    
    per=(att/tot)*100;
    cout<< "your attendance is "<<per<<"%\n";
    
  //yes i do not know how to mod numbers so i will use an over complicated method(i like making my life hard)
    
    if(sum<0){
        
        pve=sum+(-2*sum);
        cout<<"caught lackin bro attend "<<pve<<" more class/classes to cover up\n";
    }
    else if (sum>0){
        
        cout<<"well done nerd you can miss "<<sum<<" classes now\n";
    }
    else if(sum==0){
        
        cout<<"welp you cant miss any classes\n";
    }
        
    
    
    
}


