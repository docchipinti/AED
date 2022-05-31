#include <cassert>
#include <string>
using namespace std::literals;

int main()
{
//Prueba
assert(2==1+1);
/*
 TIPO DE DATO: INT
  Conjunto de valores: representado matematicamente por los enteros. (Z) 
*/
    assert(3==2+1);    //Suma y comparacion
    assert(-5!=4-6);   //Diferencia y resta
    assert(8>=-8);     //Menor o igual
    assert(-10<=9);    //Mayor o igual
    assert(16==4*4);   //comparacion y multiplicación
    assert(-7==21/-3); //comparacion y división              
    assert(3==15%4);   //comparacion y resto 
/*
 TIPO DE DATO: DOUBLE
   Conjunto de valores: representado matematicamente por los reales. (R)
    --> Se debe utilizar para los "Continuos" y no para valores "discretos"
    --> En double no es conveniente comparar por "==" ya que no va a dar una devolución precisa (Siempre es mejor plantear una desigualdad > < !=)
*/
    assert(0.0-1.0==-1.0);    //Resta y operacion unario de negación
    assert(5.0==1.5+3.5);     //Suma y comparacion
    assert(4.9!=3.2-1.8);     //Diferencia y resta
    assert(170.1<=199.78);    //Menor o igual
    assert(13.5>=6.7);        //Mayor o igual
    assert(4.5==1.5*3.0 );    //comparacion y multiplicación
    assert(6.8==17/2.5);      //comparacion y división|Promocion de tipo de dato: para poder operarlos, promociona al 17 y lo toma como double. (de INT --> DOUBLE)
    assert(2==1+1.0);         //Promociona a ambos enteros 
    assert(0.1==1.0/10.0);    //presición infinita
    assert(0.9 != 0.3 + 0.3 + 0.3); //Distinto un termino de otro 
    assert(1.0 != 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1); 
     //Assertion failed (==). 1/10 (0.1); no puede ser respresentado con presicion en double ya que no puede ser representado en base 2 (da periodico)

/* 
 TIPO DE DATO: UNSIGNED
    Tipo de dato representado por los Naturales
    4 bytes. 2^32 combinaciones diferentes. 
    --> para identificar a los unsigned se utiliza el sufijo "u"
*/
  
   assert(0u==0u);
   assert(0u==15u%3u);
   assert(5u==3u+2u);
   assert(9999999999u == 9999999998u + 1u);
   assert(1000000000000000000000000001u == 1000000000000000000000000000u + 1u);  //warning, constante entera demasiado grande para su tipo 
   assert(1400u <= 1500u);
   assert(8000u >= 1000u);



/*
 TIPO DE DATO: BOOL
  Conjunto de valores: representado matematicamente por dos valores; verdaero o falso.
 */
    assert(true);                                 
    assert(false or true);                        
    assert(true and true);                   
    assert(not false);                       
    assert(false != true and true or false);
    assert(false != (5+5.0==10));                             
    assert(true == true);
    assert(true == (true and true) and false or true );  


/*
 TIPO DE DATO: CHAR
  Conjunto de valores: todos los caracteres disponibles en la tabla ASCII extendido. (2^8 = 255 + 00 (256 posibles carateres))
*/

    assert('A' != 'B');  
    assert('A' <= 'B');            // A=65 < B=66 en ASCII
    assert('A'== 65);
    assert('B'== 'A' + 1);
    assert(131 == 'A' + 'B');      //Combinacion de tipos de datos
    assert(1 == 'B' % 'A');                     
    assert('8' != '1' + '7');      //Assertion failed (==); falla debido a que son tratados como CHAR ---> (8=56) != (1=49) + (7=55)  ; (49 + 55 = 104)
    assert( 1 == 'B' - 'A');
    assert( 'a'!= 'A');
    assert('a'- 32 == 'A');


/*
  TIPO DE DATO: STRING
    Tipo de dato compuesto, formado por caracteres. 
    A diferencia de el tipo CHAR, se expresa entre comillas y con la "s" al final de cada string
*/

     assert( "A"s == "A"s );
    assert( "damian"s == "dam"s + "ian"s );
    assert( 8 == "banfield"s.length());             
    /*funcion miembro. length() 
    -->Es un tipo de función sufijo
    */
    assert( "aaa"s >= "aa"s); //De forma simplificada se toma como standard el ASCII
    assert( "1" <= "2" );
    assert( "AA"s < "AB"s );
    assert( "hola"s == "hola"s );
}
