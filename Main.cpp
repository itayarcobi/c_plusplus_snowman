/**
 * Demo program for snowman exercise.
 * 
 * Author: Arcobi Itay
 * Since : 2021-02
 */

#include "snowman.hpp"

#include <iostream>
#include <stdexcept>
#define START_RED "\x1B[31m"
#define START_GREEN "\x1B[32m"
#define START_YELLOW "\x1B[33m"
#define START_BLUE "\x1B[34m"
#define START_CYAN "\x1B[36m"
#define START_MAGENTA "\x1B[35m"
#define END_COLOR "\033[0m\t\t"

using namespace std;

int main() {
	// system("Color E4");
	cout<< START_RED "This is the story about the snow that become a man\n" END_COLOR<<endl;
	cout<< START_GREEN "Its all start in small town in russia" END_COLOR<<endl;
	cout<< START_GREEN "One winter day,a little boy named alex built his first snowman" END_COLOR<<endl;

	cout << ariel::snowman(41114411) << endl;   /* Should print:
 ___
(_*_)
(.,.)
( : )
( : )./
	*/

	cout<< START_BLUE "Alex was the only jew in his neighborhood so he was very lonely" END_COLOR<<endl;
	cout<< START_BLUE "One night before he went to bed" END_COLOR<<endl;
	cout<< START_BLUE "Alex asked god that his only friend the snowman will be a real man" END_COLOR<<endl;
	cout<< START_BLUE "In the morning alex came out of his house and saw his snowman waving at him" END_COLOR<<endl;
	cout << ariel::snowman(41114211) << endl;   /* Should print:
 ___
(_*_)
(.,.)/
( : )
( : )./
	*/
	cout<< START_YELLOW "Alex approached him in a panic and suddenly the snowman began to speak" END_COLOR<<endl;
	cout<< START_YELLOW "Dont worry alex, its okay you'll never be alone again" END_COLOR<<endl;
	cout<< START_YELLOW "Come meet some friends" END_COLOR<<endl;
	cout<< START_YELLOW "Meet migul the Mexican snowman, rahul the Indian snowman and tommy the American snowman " END_COLOR<<endl;
	cout << ariel::snowman(22222222) <<"\n"<<ariel::snowman(31223134) << "\n\n"<< ariel::snowman(13444113)<< endl;   /*should print
  ___ 
 .....
\(o.o)/
 (] [)
 (" ")
   _ 
  /_\ 
 (o,o)
 (> <)>
 (   )

 _===_
 (-_-)
 ( : )>
 (___)
 */
 	cout<< START_CYAN "Alex and the snowmen played and enjoyed for hours one end" END_COLOR<<endl;
 	cout<< START_CYAN "After a while alex awoke from his sleep" END_COLOR<<endl;
	cout<< START_CYAN "Alex heard shouting in his house and quicly went down to the living room" END_COLOR<<endl;
	cout<< START_CYAN "And suddenly saw\n" END_COLOR<<endl;
	cout<< START_MAGENTA "TO BE CONTINUED...." END_COLOR<<endl;



}