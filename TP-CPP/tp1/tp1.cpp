/*
#include <iostream>
#include <string>

int main(int, char **) {  // parametres muets
  std::string c;     // type chaines de caracteres"
  std::string d;

  std::cout << "chaine svp" << std::endl;
  std::cin  >> c;
  std::cout << "chaine 2 svp" << std::endl;
  std::cin  >> d;
  
  if (c.size()<d.size())
  {
      std::cout << c << " de taille " << c.size() <<std::endl;

  }
  else{
      std::cout << d << " de taille " << c.size() <<std::endl;
  }

  return 0;
}

#include <iostream>

using std::cout;
using std::endl;
*/
/* on peut utiliser le mot clé const pour définir la taille d'un tableau statique en C++ */
/* Jamais de #define pour cela */
/*
const int TAILLE = 10;

int main(int, char **) {
  int tab[TAILLE];
  
  for (int i=0; i < TAILLE; ++i) {
    tab[i] = i %2;
    cout << tab[i] << " ";
  }

  cout << endl;

  return TAILLE;
}

*/
/*
#include <iostream>

int main() {

  char * s;

  s = (char*)malloc(20);

  std::cout << "chaiiiiiiiine svppppp" << std::endl;
  std::cin >> s;

  std::cout << "#" << s << "#" << std::endl;
  for (int i = 0; i< 10; ++i)
    std::cout << "@" << s[i] << "@" << (int)s[i] << "@" << std::endl;

  return 0;
}
*/
/*
#include <iostream>

void echange(int& a, int& b){
    int c =a;
    a = b;
    b = c;
}

int main(int, char **) {

    int  a = 3;
    int  b = 7;
    int& c = a;

    std::cout << a << " " << b << " " << c << std::endl;
    b = 4;
    echange(a,b);
    std::cout << a << " " << b << " " << c << std::endl;
    c = 5;
    std::cout << a << " " << b << " " << c << std::endl;
    a = 6;
    std::cout << a << " " << b << " " << c << std::endl;

  return 0;
}
*/

#include <iostream>
    
int main(int, char**) {
    using std::cout;
    using std::endl;
   const int TAILLE = 500;

   int * p = new int[TAILLE];

   for(auto i = 0; i< TAILLE; ++i ) p[i] = i;
   for(auto i = 0; i< TAILLE; ++i ) cout << p[i] << endl;

     
   delete [] p;

   return 0;
}