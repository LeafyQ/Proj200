// This is the c++ implementation of Newton raphson Algorithm
// The methodology is based on Taylor Approximation

#include <iostream>
#include <cmath>

using std::cout;
using std::endl;
using std::abs;

double Newton(double n, double init=1, double tol = 1e-5, bool tracking = true){
    if(n==0) return n;
    else if(n<0){cout<<"Input negtive number!\nThe following result is the imaginary part of square root:"<<Newton((-1)*n, init, tol);
    cout<<endl;
	return -1;
    }
    else{
	int idx = 1;
	while(abs(n-init*init)>tol){
	    init = (n/init+init)/2; // simplify Taylor 1st order approximation
	    if(tracking){
		cout<<"End of Iteration #"<<idx<<" X("<<idx<<") = "<<init<<endl;
	    }
	    ++idx;
	}
	return init;
    }
}

int main(){
// fundamental test;
    Newton(100);
    Newton(-1);
    return 0;
}



