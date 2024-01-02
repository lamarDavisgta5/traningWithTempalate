# include <iostream>
# include <cmath>
# include <iomanip>
# include <random>
# include <chrono>
constexpr auto lastSpeed { 0 };


auto physics () {
  std :: cout << "A car is driving with a uniform speed and after seeing a deer " << '\n';
  std :: cout << "in a distance the driver break the car to with an accelaration break " << '\n';
  std :: cout << "press any key to the deer hits by a car or not depnding on a info " << '\n' ;
  std :: cout << "and how much time it takes to sto the car by driver " << '\n';
  std :: cout << "and make random numbers between time and the distance between driver and the deer after stopping : " << '\n';
  std :: string keyBoard {};
  std :: cin >> keyBoard; 
}



double floatORInt () {
  a:
  std :: cout << "enter 1 : to caculate the infos in intger " << '\n';
  std :: cout << "enter 2 : to caculate the infos in floating point " << '\n';
  double opt {};
  std :: cin >> opt;

  if ( opt != 1  &&  opt != 2  ) {
    std :: cout << "please try again " << '\n';
    goto a; 
  }


return opt;
}

template < typename T > 
T speed ( T typeChooser ) {
  std :: cout << "enter the uniform speed of the car in m / s : " << '\n';
  T speed {};
  std :: cin >> speed;

 
return speed;
}


template < typename T > 
T distance ( T typeChooser ) {
  std :: cout << "enter the distance between car and the deer when the driver decided to break in m : " << '\n';
  T D {};
  std :: cin >> D;

return D;
}


template < typename T >
T accelaration ( T typeChooser ) {
  std :: cout << "enter the break accelaration of the driver in m /s2 : " << '\n';
  T a {};
  std :: cin >> a;

return a;
}

template < typename T >
void random ( T x , T time ) {
  std :: mt19937 randomMaker { static_cast < unsigned int > ( std :: chrono :: steady_clock :: now (). time_since_epoch (). count () ) };
  std :: cout << "enter the number of the sequnce : " << '\n';
  int SN {};
  std :: cin >> SN;

  if ( x > time ) {
    std :: cout << "the random number between the " << time << " and " << x << " is : " << '\n';
    std :: uniform_int_distribution period ( time , x );

    for ( int counter { 1 }; counter <= SN; ++ counter ) {
      std :: cout << period ( randomMaker ) << '\t';

      if ( counter % 10 == 0 ) 
        std :: cout << '\n';

    }
    std :: cout << '\n';
    

  }  

  else if ( time > x ) {
    std :: cout << "your random number between " << x << " and " << time << " is : " << '\n';
    std :: uniform_int_distribution period ( x , time );

    for ( int counter { 1 }; counter <= SN; ++ counter ) {
      std :: cout << period ( randomMaker ) << '\t';

      if ( counter % 10 == 0 )
        std :: cout << '\n';

    }

    std :: cout << '\n';


  }

  else
    std :: cout << "can not make random numbers due to a equlity " << '\n';


}


void hitOrNot ( int overLaod ) {
  auto V0 { speed ( 0 ) };
  auto d { distance ( 0 ) };
  auto a { accelaration ( 0 ) };
  auto x {  ( d ) + ( ( std :: pow ( lastSpeed , 2 ) - std :: pow ( V0 , 2 ) ) / ( 2 * a )  ) };
  std :: cout << "the distance between deer and the car after break is : " <<  x << 'm' << '\n';

  if ( x < 0 ) 
    std :: cout << "car hit the deer " << '\n';


  else if ( x > 0 ) 
    std:: cout << "the car did not hit the deer " << '\n';
  

  else 
    std :: cout << "the car was close to hit the deer " << '\n';

  auto time { V0 / a };
  std :: cout << "the time to take the driver stop the car is : " << time << 's' <<  '\n';
  std :: cout << " make a random number between the distance between car and the deer and time to take the break " << '\n';
  std :: cout << '\n';
  again:
  std :: cout << "enter 1 = intger " << '\n';
  std :: cout << "enter 2 = long long " << '\n';
  double opt {};
  std :: cin >> opt;

  if ( opt == 1 ) {
    std :: cout << "you choose intger for making random numbers " << '\n';
    random ( static_cast < int > ( x ) , static_cast < int > ( time ) );
  }

  else if ( opt == 2 ) {
    std :: cout << "you choose long long for making random numbers " << '\n';
    random ( static_cast < long long > ( x ) , static_cast < long long > ( time ) );
  }

  else {
    std :: cout << "you must enter 1 or 2 " << '\n';
    goto again;
  }

}


void hitOrNot( double overLaod ) {
  auto V0 { speed ( 0.0 ) };
  auto d { distance ( 0.0 ) };
  auto a { accelaration ( 0.0 ) };
  auto x {  ( d ) + ( ( std :: pow ( lastSpeed , 2 ) - std :: pow ( V0 , 2 ) ) / ( 2 * a )  )  };
  std :: cout << "the distance between deer and the car after break is : " <<  x << 'm' << '\n';

  if (  x < 0 ) 
    std :: cout << "car hit the deer " << '\n';


  else if ( x > 0 ) 
    std:: cout << "the car did not hit the deer " << '\n';
  

  else 
    std :: cout << "the car was close to hit the deer " << '\n';

  auto time { V0 / a };
  std :: cout << "the time to take the driver stop the car is : " << time << 's' <<  '\n';
  std :: cout << '\n';
  again :
  std :: cout << " make a random number between the distance between car and the deer and time to take the break " << '\n';
  std :: cout << "enter 1 = intger " << '\n';
  std :: cout << "enter 2 = long long " << '\n';
  double opt {};
  std :: cin >> opt;

  if ( opt == 1 ) {
    std :: cout << "you choose intger for making random numbers " << '\n';
    random ( static_cast < int > ( x ) , static_cast < int > ( time ) );
  }

  else if ( opt == 2 ) {
    std :: cout << "you choose long long for making random numbers " << '\n';
    random ( static_cast < long long > ( x ) , static_cast < long long > ( time ) );
  }

  else {
    std :: cout << "you must enter 1 or 2 " << '\n';
    goto again;
  }


}


void typeName () {
  double FOI { floatORInt () };

  if ( FOI == 1 ) {
    std :: cout << "you choose intger type  " << '\n';
    hitOrNot ( 0 );


  }

  else {
    std :: cout << "you choose floating point type " << '\n';
    hitOrNot ( 0.0 );
  }


}


int main () {
  std :: cout << std :: setprecision ( 2 );
  physics ();
  typeName ();
  std :: cout << "the bulid end " << '\n';
  std :: cout << "press any key to quit " << '\n';
  std :: string quit {};
  std :: cin >> quit;

return 0;
}