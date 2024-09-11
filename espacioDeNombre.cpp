#include <iostream>

namespace primero{
    int x = 1;
}

namespace segundo{
    int x = 2;
}

int main(){
    using std::cout;
    using std::endl;
    int x = 3;
    
    cout <<"Primera variable X: " <<primero::x <<endl; 
    cout <<"Segunda variable X: " <<segundo::x <<endl; 
    cout <<"Variable X en main: " << x <<endl; 

    return 0;
}