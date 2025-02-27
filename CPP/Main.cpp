#include <string>
#include <iostream>
#include <list>

using namespace std;

#include "Baju.cpp"

int main(){

    list<PetShop> listBarang;
    listBarang.push_front(PetShop("001", "PasirKucing"));
    listBarang.front().display();
    return 0;
}