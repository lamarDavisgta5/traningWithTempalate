# include <iostream>
# include <random>
# include <chrono>
# include <string>
# include <cmath>
# include <math.h>

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
  std :: cout << "enter 2 : caculate the time of the between the break " << '\n';
  std :: cout << "enter 3 : caculate the friction force between tire of the car and the surface " << '\n';
  double opt {};
  std :: cin >> opt;
  
  if ( opt != 1 && opt != 2 && opt != 3 ) {
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

template < typename T > 
T random ( T object1 , T object2 ) {
  auto SN { getSequnceNumber () };
  std :: mt19937_64 sids { static_cast < unsigned int > ( std :: chrono :: steady_clock :: now () . time_since_epoch () . count () ) };

  if ( object1 > object2 ) {
    std :: cout << "the random number between " << object2 << " and " << object1 << " is : " << '\n';
    std :: uniform_int_distribution period ( object2 , object1 );
   
    for ( T counter { 1 }; counter <= SN; ++ counter ) {
      std :: cout << period ( sids ) << '\t';
      
      if ( counter % 10 == 0 )
        std :: cout << '\n';

    }

    std :: cout << '\n';
    
  
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
      std :: mt19937_64 random2 { static_cast < unsigned int > ( period ( sids ) ) };
      std :: cout << "the power of the random number between " << object1 << " and " << object2 << " is : " << '\n'; 

      for ( int counter { 1 }; counter <= SN; ++ counter ) {
        std :: cout << random2 << '\t';

        if ( counter % 10 == 0 ) 
          std :: cout << '\n'; 

      }

    }

    else if ( O2 == 82 || O2 == 114 ) {
      std :: cout << "you entered to root the random numbers " << '\n'; 

    }

    
  }

  else
    std :: cout << "can not make random numbers due to a equlity of them " << '\n';

}

auto answer () {
  auto O { option () };
  
  switch ( static_cast < int > ( O ) ) {

    case 1 :
      std :: cout << "you entered 1 " << '\n';
      break;

    case 2 :
      std :: cout << "you entered 2 " << '\n';
      break;

    case 3 :
      std :: cout << "you entered 3 " << '\n';
      break;

  }

}



int main () {
  std :: mt19937_64 random { static_cast < unsigned int > ( std :: chrono :: steady_clock :: now () . time_since_epoch () . count () ) };
  std :: uniform_int_distribution D ( 10 , 20 );
  std :: mt19937_64 random2 { random };

  for ( int counter { 1 }; counter <=20; ++ counter ) {
    std :: cout << D ( random ) << '\t';

    if ( counter % 10 == 0 )
      std :: cout << '\n';

  }

  std :: cout << '\n';

  for ( int counter { 1 }; counter <=20; ++ counter ) {
    std :: cout << D ( random2 ) << '\t';

    if ( counter % 10 == 0 )
      std :: cout << '\n';

  }


return 0; 
}
