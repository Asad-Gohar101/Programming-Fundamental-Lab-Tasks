#include<iostream>
using namespace std;
int main(){

    int row1, col1, row2, col2;
    int A[20][20], B[20][20], C[20][20];
    
    cout<<"Enter the rows of Martrix A: ";
    cin>>row1;
    cout<<"Enter the colomns of Matrix A: ";
    cin>>col1;
    cout<<"Enter the rows of Martrix B: ";
    cin>>row2;
    cout<<"Enter the colomns of Matrix B: ";
    cin>>col2;
    cout<<endl;
    
    if(col1!=row1){
        cout<<"Matrix A and B can not be Multiplied";
    }
    else if (row1==col2){
        cout<<"Enter the values of Matrix A: ";
        
        for(int i=0; i<row1; i++){      
          for(int j=0; j<col1; j++){
              cin>>A[i][j];
            //We have used < and not <= because index starts from 0
          }  
        }
        for(int i=0; i<row1; i++){
          for(int j=0; j<col1; j++){
              cout<<A[i][j]<<" ";
          }  
          cout<<endl;
        }
        
         cout<<"Enter the values of Matrix B: ";
        
        for(int i=0; i<row2; i++){      
          for(int j=0; j<col2; j++){
              cin>>B[i][j];
          }  
        }
        for(int i=0; i<row2; i++){
          for(int j=0; j<col2; j++){
              cout<<B[i][j]<<" ";
          }  
          cout<<endl;
        }
            
        for(int i=0; i<row1; i++){
           for(int j=0; j<col2; j++){
                C[i][j] = 0;
              for(int k=0; k<col1; k++){
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }
        
        cout<<"Matrix C (Product A and B)\n";
        for(int i=0; i<row1; i++){
            for(int j=0; j<col2; j++){
                cout<<C[i][j]<<" ";
            }
            cout<<endl;
        }

    }
     
}