# include <iostream>
# include <random>
# include <chrono>
# include <string>
# include <cmath>
# include <math.h>
constexpr auto gravity { 9.8 };

void car () {
  std :: cout << "A car is moving in a speed and by seeing the barrier " << '\n';
  std :: cout << "he break the car and after moving a area the car is stopped " << '\n';
  std :: cout << "enter any key to continue : " << '\n';
  std :: string key {};
  std :: cin >> key;

}

double option () {
  again:
  std :: cout << "enter 1 : caculete the stop accelaration " << '\n';
  std :: cout << "enter 2 : caculate the time of the between the break and stop " << '\n';
  std :: cout << "enter 3 : caculate the friction force between tire of the car and the surface " << '\n';
  std :: cout << "enter 4 : caculate the item 1 , 2 , 3 " << '\n';
  double opt {};
  std :: cin >> opt;
  
  if ( opt != 1 && opt != 2 && opt != 3 && opt != 4 ) {
    std :: cout << "you must enter 1 , 2 , 3 " << '\n';
    goto again;
  }


return opt;
}

double getSequnceNumber () {
  again2:
  std :: cout << "enter the number of the sequnce : " << '\n';
  double sequnceNumber {};
  std :: cin >> sequnceNumber;

  if ( ( sequnceNumber - static_cast < int > ( sequnceNumber ) ) != 0 ) {
    std :: cout << "do not enter floating point " << '\n';
    goto again2;
  }

return sequnceNumber;
}

char rootOrPower () {
  std :: cout << "enter P : caulate the power of the rendom numbers  " << '\n';
  std :: cout << "enter R : caculate the root of the random numbers " << '\n';
  char pOrR {};
  std :: cin >> pOrR;

return pOrR;
}



char option2 () {
  a :
  char PR { rootOrPower () };

  switch ( static_cast < int > ( PR ) ) {

    case 80 :
      return 80;

    case 112 : 
      return 112;

    case 82 :
      return 82;

    case 114 :   
      return 114;

    default :
      std :: cout << "you must enter O or E " << '\n'; 
      goto a;
  }
}

double getPower () {
  enter :
  std :: cout << "enter a number to power your random numbers : " << '\n';
  double P {};
  std :: cin >> P;

  if ( P - static_cast < int > ( P ) != 0 ) {
    std :: cout << "you must enter an intger number " << '\n';
    goto enter;

  } 

return P;
}

bool trueOrFalse () {
  std :: cin >> std :: boolalpha; 
  std :: cout << "enter true : find the even and odd numbers " << '\n';
  std :: cout << "enter flase : quit the progeram " << '\n';
  bool tOrF {};
  std :: cin >> tOrF;

return tOrF;
}

template < typename T > 
void random ( T object1 , T object2 ) {
  auto SN { getSequnceNumber () };
  std :: mt19937_64 sids { static_cast < unsigned int > ( std :: chrono :: steady_clock :: now () . time_since_epoch () . count () ) };
  std :: mt19937_64 random2 { sids };
  std :: mt19937_64 random3 { random2 };
  std :: mt19937_64 random4 { random3 };

  if ( object1 > object2 ) {
    std :: cout << "the random number between " << object2 << " and " << object1 << " is : " << '\n';
    std :: uniform_int_distribution period ( object2 , object1 );
   
    for ( T counter { 1 }; counter <= SN; ++ counter ) {
      std :: cout << period ( sids ) << '\t';
      
      if ( counter % 10 == 0 )
        std :: cout << '\n';

    }

    std :: cout << '\n';
    
    int O2 { option2 () };

    if ( O2 == 80 || O2 == 112 ) {
      std :: cout << "you entered to power you random numbers : " << '\n';
      std :: cout << '\n';
      int P { static_cast < int > ( getPower () ) };
      std :: cout << "the power of the random numbers is : " << '\n';

      for ( int counter { 1 }; counter <= SN; ++ counter ) {
        std :: cout << std :: pow ( period ( random2 ) , P ) << '\t';

        if ( counter % 10 == 0 )
          std :: cout << '\n';


      }

      std :: cout << '\n';
      bool tOrF { trueOrFalse () };

      if ( tOrF ) {
        std :: cout << "you entered true " << '\n';
        std :: cout << '\n';
        std :: cout << "odds : 1 " << '\n';
        std :: cout << "evens : 0 " << '\n';

        for ( int counter { 1 }; counter <= SN; ++ counter ) {
          std :: cout << period ( random3 ) << " = " << period ( random4 ) % 2 << '\t';

          if ( counter % 10 == 0 )
            std :: cout << '\n';


        }

      }

      else  
        std :: cout << "you entered false " << '\n';  

      


    }

    else if ( O2 == 82 || O2 == 114 ) {
      std :: cout << "you entered to root the random numbers " << '\n';
      std :: cout << '\n';
      std :: cout << "the root of the random number is : " << '\n';

      for ( int counter { 1 }; counter <= SN; ++ counter ) {
        std :: cout << std :: sqrt ( period ( random2 ) ) << '\t';

        if ( counter % 10 == 0 )
          std :: cout << '\n';

      }

      std :: cout << '\n'; 
      bool tOrF { trueOrFalse () };

      if ( tOrF ) {
        std :: cout << "you entered true " << '\n';
        std :: cout << "odds : 1 " << '\n';
        std :: cout << "evens : 0 " << '\n';
        
        for ( int counter { 1 }; counter <= SN; ++ counter ) {
          std :: cout << period ( random3 ) << " = " << period ( random4 ) % 2 << '\t';

          if ( counter % 10 == 0 ) 
            std :: cout << '\n'; 

        }

      }

      else 
        std :: cout << "you entered false " << '\n';

          
    }
  
  }

  else if ( object1 < object2 ) {
    std :: cout << "your random number between " <<  object1 << " and " << object2 << " is : " << '\n';
    std :: uniform_int_distribution period ( object1 , object2 );

    for ( T counter { 1 }; counter <= SN; ++ counter ) {
      std :: cout << period ( sids ) << '\t';

      if ( counter % 10 == 0 )
        std :: cout << '\n';

    }

    std :: cout << '\n';
    int O2 { option2 () };

    if ( O2 == 80 || O2 == 112 ) {
      std :: cout << "you entered to power the random numbers " << '\n';
      std :: cout << '\n'; 
      auto power { getPower () }; 
      std :: cout << "the power of the random number between " << object1 << " and " << object2 << " is : " << '\n'; 

      for ( int counter { 1 }; counter <= SN; ++ counter ) {
        std :: cout <<  std :: pow ( ( period ( random2 ) ) , power ) << '\t';

        if ( counter % 10 == 0 ) 
          std :: cout << '\n'; 

      }

      std :: cout << '\n'; 
      bool tOrF { trueOrFalse () };

      if ( tOrF ) {
        std :: cout << "you entered true " << '\n';
        std :: cout << '\n';
        std :: cout << "odds : 1" << '\n';
        std :: cout << "evens : 0 " << '\n';

        for ( int counter { 1 }; counter <=SN; ++ counter ) {
          std :: cout << period ( random3 ) << " = " << period ( random4 ) % 2 <<'\t';

          if ( counter % 10 == 0 )
            std :: cout << '\n'; 

        }


      }

      else 
        std :: cout << "you entere false " << '\n';


  

    }

    else if ( O2 == 82 || O2 == 114 ) {
      std :: cout << "you entered to root the random numbers " << '\n'; 
      std :: cout << "the root of the rnadom numbers between " << object1 << " and " << object2 << " is : " << '\n';

      for ( int counter { 1 }; counter <= SN; ++ counter ) {
        std :: cout << std :: sqrt ( period ( random2 ) ) << '\t';

        if ( counter % 10 == 0 )
          std :: cout << '\n';


      } 

      std :: cout << '\n';
      bool tOrF { trueOrFalse () };

      if ( tOrF ) {
        std :: cout << "you entered true " << '\n';
        std :: cout << '\n';
        std :: cout << "odds : 1 " << '\n';
        std :: cout << "evens : 0 " << '\n'; 

        for ( int counter { 1 }; counter <= SN; ++ counter ) {
          std :: cout << period ( random3 ) << " = " << period ( random4 ) % 2 << '\t';

          if ( counter % 10 == 0 ) 
            std :: cout << '\n'; 


        }

      }

      else
        std :: cout << "you entered false " << '\n';


    }

    
  }

  else
    std :: cout << "can not make random numbers due to a equlity of them " << '\n';

}

auto getSpeed () {
  std :: cout << "enter the speed of the car in m/s : " << '\n';
  double speed {};
  std :: cin >> speed;

return speed;
}

auto displacement () {
  std :: cout << "enter the displacement after the car stop by seeing the barrier in m : " << '\n';
  double d {};
  std :: cin >> d;

return d;
}

auto getMass () {
  std :: cout << "enter the mass of the car in kg : " << '\n';
  double mass {};
  std :: cin >> mass;

return mass;
}



double accelaration () {
  double V { getSpeed () };
  double D { displacement () };
  double VpowerTwo { std :: pow ( V , 2 ) };
  std :: cout << "the stop accelaration of the car is : " << ( 0 - VpowerTwo ) /  ( 2 * D ) << " m / s2 " << '\n';

return ( 0 - VpowerTwo ) / ( 2 * D );
}

double time () {
  double V { getSpeed () };
  double D { displacement () };
  double VpowerTwo { std :: pow ( V , 2 ) };
  double accelaration { ( 0 - VpowerTwo ) /  ( 2 * D ) };

  if ( V / accelaration > 0 ) 
    std :: cout << "the time betweem breake and stop is : " << static_cast < int > ( V / accelaration )  << 's' << '\n';

  else if ( V / accelaration < 0 ) 
    std :: cout << "the time betweem breake and stop is : " << static_cast < int > ( V / accelaration ) * -1  << 's' << '\n';


return  ( ( V / accelaration ) > 0 ) ? V / accelaration : -1 * ( V / accelaration );
}


double frictionForce () {
  double V { getSpeed () };
  double D { displacement () };
  double VpowerTwo { std :: pow ( V , 2 ) };
  double accelaration { ( 0 - VpowerTwo ) /  ( 2 * D ) };
  double M { getMass () };

  if (  ( accelaration * M ) > 0 )
    std :: cout << "the friction force between the tire and the surface is : " << accelaration * M<< 'N' <<'\n';

  else if  (  ( accelaration * M ) < 0 )
    std :: cout << "the friction force between the tire and the surface is : " <<  -1 * ( accelaration * M ) << 'N' <<'\n';

return ( ( accelaration * M ) > 0 ) ? accelaration * M : -1 * ( accelaration * M ); 
}


double first_Item ();
double second_Item ();
bool makeRandomNumbers ();  

void all () {
  double V { getSpeed () };
  double D { displacement () };
  double VpowerTwo { std :: pow ( V , 2 ) };
  double accelaration { ( 0 - VpowerTwo ) /  ( 2 * D ) };
  double M { getMass () };
  std :: cout << "the stop accelaration of the car is : " << accelaration << " m / s2 " << '\n';

  if ( V / accelaration > 0 ) 
    std :: cout << "the time betweem breake and stop is : " << static_cast < int > ( V / accelaration )  << 's' << '\n';

  else if ( V / accelaration < 0 ) 
    std :: cout << "the time betweem breake and stop is : " << static_cast < int > ( V / accelaration ) * -1  << 's' << '\n';

  if (  ( accelaration * M ) > 0 )
    std :: cout << "the friction force between the tire and the surface is : " << accelaration * M<< 'N' <<'\n';

  else if  (  ( accelaration * M ) < 0 )
    std :: cout << "the friction force between the tire and the surface is : " <<  -1 * ( accelaration * M ) << 'N' <<'\n';

  bool RN { makeRandomNumbers () };
  
  if ( RN ) {

    int intA { static_cast < int > ( accelaration ) }; 
    int intT { static_cast < int > ( ( V / accelaration > 0 ) ? V/ accelaration : -1 * ( V / accelaration ) ) };
    int intFF { static_cast < int > ( ( accelaration * M > 0 ) ? accelaration * M : -1 * ( accelaration * M ) ) }; 
    std :: cout << "1 : accelaration stop " << '\n';
    std :: cout << "2 : time between break and stop " << '\n';
    std :: cout << "3 : firction force between tire and surface " << '\n';
    int I1 { static_cast < int > ( first_Item () ) };
    int I2 { static_cast < int > ( second_Item () ) };
    
    if ( ( I1 == 1 && I2 == 2 ) || ( I1 == 2 && I2 == 1 ) ) {
      std :: cout << "you entered item 1 and 2 " << '\n'; 
      random ( intA , intT );

    }

    if ( ( I1 == 1 && I2 == 3 ) || ( I1 == 3 && I2 == 1 ) ) {
      std :: cout << "you entered item 1 and 3 " << '\n'; 
      random ( intA , intFF );
    }

    if ( ( I1 == 2 && I2 == 3 ) || ( I1 == 3 && I2 == 2 ) ) {
      std :: cout << "you entered item 2 and 3 " << '\n'; 
      random ( intT , intFF );
    }



  }

  else
    std :: cout << "you entered false " << '\n';


}

bool makeRandomNumbers () {
  std :: cin >> std :: boolalpha;
  std :: cout << "enter true : make random numbers between item 1 , 2 , 3 " << '\n';
  std :: cout << "enter false : quit the progeram " << '\n'; 
  bool tOrF {};
  std :: cin >> tOrF;

return tOrF;  
}

double first_Item() {
  A:
  std :: cout << "enter the first item : " << '\n';
  double opt {};
  std :: cin >> opt;

  if ( opt != 1 && opt != 2 && opt != 3 ) {
    std :: cout << "you must enter 1 , 2 , 3 " << '\n';
    goto A;
  }

  if ( opt - static_cast < int > ( opt ) ) {
    std :: cout << "do not enter floating point " << '\n';
    goto A;

  }

return opt;
}

double second_Item() {
  A:
  std :: cout << "enter the second item : " << '\n';
  double opt {};
  std :: cin >> opt;

  if ( opt != 1 && opt != 2 && opt != 3 ) {
    std :: cout << "you must enter 1 , 2 , 3 " << '\n';
    goto A;
  }

  if ( opt - static_cast < int > ( opt ) ) {
    std :: cout << "do not enter floating point " << '\n';
    goto A;

  }

return opt;
}




auto answer () {
  auto O { option () };
  double a;
  double t;
  double ff;

  switch ( static_cast < int > ( O ) ) {

    case 1 :
      std :: cout << "you entered 1 " << '\n';
      a = accelaration (); 
      return;

    case 2 :
      std :: cout << "you entered 2 " << '\n';
      t = time (); 
      return;

    case 3 :
      std :: cout << "you entered 3 " << '\n';
      ff = frictionForce (); 
      return;

    case 4 :
      std :: cout << "you entered 4 " << '\n';  
      all ();
      return; 

  }

}


int main () {
  car ();
  answer (); 
  std :: cout << "the bulid end " << '\n';
  std :: cout << "press any key to quit " << '\n';
  std :: string key {};
  std :: cin >> key;

return 0; 
}
