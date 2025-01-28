#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify source code above this line

void shuffle(int &a ,int &b ,int &c ,int &d)
{   
    //=============================================================//
    
    // int A[] = {a , b , c , d};
    
    // int rand1 , rand2 , rand3 , rand4;
    
    // rand1 = rand()%4;
    
    // while (true)
    // {
    //     rand2 = rand()%4;
    //     if (rand2 != rand1) break;
    // }
    
    // while (true)
    // {
    //     rand3 = rand()%4;
    //     if (rand3 != rand1 and rand3 != rand2) break;
    // }
    
    // while (true)
    // {
    //     rand4 = rand()%4;
    //     if (rand4 != rand1 and rand4 != rand2 and rand4 != rand3) break;
    // }
    
    // a = A[rand1];
    // b = A[rand2];
    // c = A[rand3];
    // d = A[rand4];
    
    //=============================================================//
    
    int N = 4;
    
    int A[] = {a , b , c , d};
    
    int rand_[N];
    rand_[0] = rand()%N;
    
    for (int i = 1 ; i < 4 ; i++)
    {
        while (true)
        {
            rand_[i] = rand()%4;
            
            bool pass = true;
            
            for (int j = 0 ; j < i ; j++)
            {
                if (rand_[i] == rand_[j])
                {
                    pass = false;
                    break;
                }
            }
            
            if (pass == true) break;
        }
    }
    
    a = A[rand_[0]];
    b = A[rand_[1]];
    c = A[rand_[2]];
    d = A[rand_[3]];
}