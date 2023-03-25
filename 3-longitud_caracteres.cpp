/*programa en c++ que mide la longitud de una caden de caracteres utilizando la funcion SIZEOF*/
#include <iostream>
#include <string>

using std::cout; using std::cin;
using std::endl; using std ::string;

int main(int arg, char*argv[]){
          string str1 = "Guatemala, tacita de plata";

          cout<<"string: " <<str1<<endl;
          cout<<"length: "<<str1.size() <<endl;

          exit(EXIT_SUCCESS);
          }
