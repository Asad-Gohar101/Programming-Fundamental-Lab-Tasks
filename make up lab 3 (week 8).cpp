#include<iostream>
using namespace std;

int getTotalSteps(){

int n, total, avg;
total=0;
for(int i=1;i<=7;i++){
    cout<<"Enter the number of steps walked on day "<<i<<endl;
    cin>>n;
    cout<<"the total steps walked today:"<<n<<endl;
    total=total+n;
}
    cout<<"total steps walked in total: "<<total<<endl;
    avg=total/7;
    cout<<"Average steps per day"<<avg;
return 0;
}

int main()
{
 getTotalSteps();
 return 0;
}