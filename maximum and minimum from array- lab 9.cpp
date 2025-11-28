#include<iostream>
using namespace std;
int main(){
    
    int johncena[10]={23,45,67,89,12,90,34,56,78,11};
    int max=johncena[0];
    int min=johncena[0];
    for(int i=0;i<10;i++){
        if(johncena[i]>max){
            max=johncena[i];
        }
        if(johncena[i]<min){
            min=johncena[i];
        }
    }
    cout<<"The maximum value in the array is: "<<max<<endl;
    cout<<"The minimum value in the array is: "<<min<<endl;
}