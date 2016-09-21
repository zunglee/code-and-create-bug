#include <iostream>
#include <vector>
using namespace std;
 
void towers(int n, char frompeg, char topeg, char auxpeg){
    //if only one disk, make the move return
        if(n==1){
                cout<<"move disk 1 from peg "<<frompeg<<" to peg "<<topeg<<endl;
                return;
        }
        
        //move top n-1 disks from A to B, using C as auxiliary
        towers(n-1, frompeg, auxpeg, topeg);
        
        //move remaining disks from A to C
        cout<<"move disk "<<n<<" from peg "<<frompeg<<" to peg "<<topeg<<endl;
        
        //move n-1 disk from B to C using A as auxiliary
        towers(n-1, auxpeg, topeg, frompeg);
}
int main( )
{
        int n;
        cout<<"Enter the number of disks on tower A : ";
        cin >>n;
        cout<<endl<<endl;
        towers(n,'A','C','B');
        cout<<endl<<endl;
        
        system("pause");
        return 0;
}
