#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pair_list_t;
//typedef std::string text_t;
typedef int numero_t;
using text_t = std::string;

int main(){
    text_t nombre = "Luis";
    numero_t edad = 33;
    std::cout<<nombre<<" "<<edad<<std::endl;

    return 0;
}